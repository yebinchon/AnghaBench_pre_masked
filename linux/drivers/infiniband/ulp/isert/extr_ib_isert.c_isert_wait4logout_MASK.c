
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {scalar_t__ logout_posted; struct iscsi_conn* conn; } ;
struct iscsi_conn {int conn_logout_comp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct isert_conn*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct isert_conn *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_2->conn;

 FUNC_0("conn %p\n", VAR_2);

 if (VAR_2->logout_posted) {
  FUNC_0("conn %p wait for conn_logout_comp\n", VAR_2);
  FUNC_1(&VAR_3->conn_logout_comp,
         VAR_1 * VAR_0);
 }
}
