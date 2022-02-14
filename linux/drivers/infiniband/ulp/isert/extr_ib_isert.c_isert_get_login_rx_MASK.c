
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int login_comp; int login_req_comp; struct isert_conn* context; } ;
struct iscsi_login {struct isert_conn* req; int first_request; } ;
struct iscsi_conn {int login_comp; int login_req_comp; struct iscsi_conn* context; } ;


 int FUNC_0 (char*,struct isert_conn*) ;
 int FUNC_1 (char*,struct isert_conn*) ;
 int FUNC_2 (struct isert_conn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct iscsi_conn *VAR_0, struct iscsi_login *VAR_1)
{
 struct isert_conn *VAR_2 = VAR_0->context;
 int VAR_3;

 FUNC_1("before login_req comp conn: %p\n", VAR_2);
 VAR_3 = FUNC_4(&VAR_2->login_req_comp);
 if (VAR_3) {
  FUNC_0("isert_conn %p interrupted before got login req\n",
     VAR_2);
  return VAR_3;
 }
 FUNC_3(&VAR_2->login_req_comp);







 if (!VAR_1->first_request)
  return 0;

 FUNC_2(VAR_2);

 FUNC_1("before login_comp conn: %p\n", VAR_0);
 VAR_3 = FUNC_4(&VAR_2->login_comp);
 if (VAR_3)
  return VAR_3;

 FUNC_1("processing login->req: %p\n", VAR_1->req);

 return 0;
}
