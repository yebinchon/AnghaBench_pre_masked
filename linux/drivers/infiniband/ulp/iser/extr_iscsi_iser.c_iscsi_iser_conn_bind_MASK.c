
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct iser_conn {scalar_t__ state; int state_mutex; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct iscsi_conn {struct iser_conn* dd_data; int session; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct iscsi_endpoint* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct iser_conn*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,struct iscsi_conn*,struct iser_conn*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_cls_session *VAR_2,
       struct iscsi_cls_conn *VAR_3,
       uint64_t VAR_4,
       int VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_3->dd_data;
 struct iser_conn *VAR_7;
 struct iscsi_endpoint *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (VAR_9)
  return VAR_9;



 VAR_8 = FUNC_1(VAR_4);
 if (!VAR_8) {
  FUNC_3("can't bind eph %llx\n",
    (unsigned long long)VAR_4);
  return -VAR_0;
 }
 VAR_7 = VAR_8->dd_data;

 FUNC_5(&VAR_7->state_mutex);
 if (VAR_7->state != VAR_1) {
  VAR_9 = -VAR_0;
  FUNC_3("iser_conn %p state is %d, teardown started\n",
    VAR_7, VAR_7->state);
  goto out;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_6->session);
 if (VAR_9)
  goto out;




 FUNC_4("binding iscsi conn %p to iser_conn %p\n", VAR_6, VAR_7);

 VAR_6->dd_data = VAR_7;
 VAR_7->iscsi_conn = VAR_6;

out:
 FUNC_6(&VAR_7->state_mutex);
 return VAR_9;
}
