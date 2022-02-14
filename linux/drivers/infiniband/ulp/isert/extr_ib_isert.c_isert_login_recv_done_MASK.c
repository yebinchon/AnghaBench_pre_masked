
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isert_conn {int login_req_dma; int mutex; int login_req_comp; TYPE_3__* conn; scalar_t__ login_req_len; TYPE_2__* device; } ;
struct iscsi_login {int first_request; } ;
struct ib_wc {scalar_t__ status; scalar_t__ byte_len; TYPE_1__* qp; } ;
struct ib_device {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_6__ {struct iscsi_login* conn_login; } ;
struct TYPE_5__ {struct ib_device* ib_device; } ;
struct TYPE_4__ {struct isert_conn* qp_context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_device*,int ,int ,int ) ;
 int FUNC_2 (struct ib_device*,int ,int ,int ) ;
 int FUNC_3 (struct ib_wc*,char*) ;
 int FUNC_4 (struct isert_conn*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct ib_cq *VAR_4, struct ib_wc *VAR_5)
{
 struct isert_conn *VAR_6 = VAR_5->qp->qp_context;
 struct ib_device *VAR_7 = VAR_6->device->ib_device;

 if (FUNC_7(VAR_5->status != VAR_1)) {
  FUNC_3(VAR_5, "login recv");
  return;
 }

 FUNC_1(VAR_7, VAR_6->login_req_dma,
   VAR_3, VAR_0);

 VAR_6->login_req_len = VAR_5->byte_len - VAR_2;

 if (VAR_6->conn) {
  struct iscsi_login *VAR_8 = VAR_6->conn->conn_login;

  if (VAR_8 && !VAR_8->first_request)
   FUNC_4(VAR_6);
 }

 FUNC_5(&VAR_6->mutex);
 FUNC_0(&VAR_6->login_req_comp);
 FUNC_6(&VAR_6->mutex);

 FUNC_2(VAR_7, VAR_6->login_req_dma,
    VAR_3, VAR_0);
}
