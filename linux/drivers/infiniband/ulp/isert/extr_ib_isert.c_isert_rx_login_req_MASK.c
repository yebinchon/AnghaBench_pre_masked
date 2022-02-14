
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int login_req_len; int login_comp; struct iscsi_conn* conn; struct iser_rx_desc* login_req_buf; } ;
struct iser_rx_desc {void* data; int iscsi_header; } ;
struct iscsi_login_req {int flags; void* isid; int tsih; int cid; int exp_statsn; int itt; int cmdsn; int max_version; int min_version; } ;
struct iscsi_login {int leading_connection; int current_stage; scalar_t__ first_request; int * req_buf; int * req; void* tsih; void* cid; void* initial_exp_statsn; int init_task_tag; void* cmd_sn; int * isid; int version_max; int version_min; } ;
struct iscsi_conn {int login_work; struct iscsi_login* conn_login; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int,int ) ;
 int FUNC_5 (char*,struct isert_conn*) ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(struct isert_conn *VAR_3)
{
 struct iser_rx_desc *VAR_4 = VAR_3->login_req_buf;
 int VAR_5 = VAR_3->login_req_len;
 struct iscsi_conn *VAR_6 = VAR_3->conn;
 struct iscsi_login *VAR_7 = VAR_6->conn_login;
 int VAR_8;

 FUNC_5("conn %p\n", VAR_3);

 FUNC_0(!VAR_7);

 if (VAR_7->first_request) {
  struct iscsi_login_req *VAR_9 =
   (struct iscsi_login_req *)&VAR_4->iscsi_header;




  VAR_7->leading_connection = (!VAR_9->tsih) ? 1 : 0;
  VAR_7->current_stage =
   (VAR_9->flags & VAR_0)
    >> 2;
  VAR_7->version_min = VAR_9->min_version;
  VAR_7->version_max = VAR_9->max_version;
  FUNC_6(VAR_7->isid, VAR_9->isid, 6);
  VAR_7->cmd_sn = FUNC_2(VAR_9->cmdsn);
  VAR_7->init_task_tag = VAR_9->itt;
  VAR_7->initial_exp_statsn = FUNC_2(VAR_9->exp_statsn);
  VAR_7->cid = FUNC_1(VAR_9->cid);
  VAR_7->tsih = FUNC_1(VAR_9->tsih);
 }

 FUNC_6(&VAR_7->req[0], (void *)&VAR_4->iscsi_header, VAR_1);

 VAR_8 = FUNC_7(VAR_5, VAR_2);
 FUNC_4("Using login payload size: %d, rx_buflen: %d "
    "MAX_KEY_VALUE_PAIRS: %d\n", VAR_8, VAR_5,
    VAR_2);
 FUNC_6(VAR_7->req_buf, &VAR_4->data[0], VAR_8);

 if (VAR_7->first_request) {
  FUNC_3(&VAR_3->login_comp);
  return;
 }
 FUNC_8(&VAR_6->login_work, 0);
}
