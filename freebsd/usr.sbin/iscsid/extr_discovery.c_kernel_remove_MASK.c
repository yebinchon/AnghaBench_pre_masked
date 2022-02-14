
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session_remove {int isr_session_id; } ;
struct connection {int conn_iscsi_fd; int conn_session_id; } ;
typedef int isr ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct iscsi_session_remove*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct iscsi_session_remove*,int ,int) ;

__attribute__((used)) static void
FUNC_3(const struct connection *VAR_1)
{
 struct iscsi_session_remove VAR_2;
 int VAR_3;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.isr_session_id = VAR_1->conn_session_id;
 VAR_3 = FUNC_0(VAR_1->conn_iscsi_fd, VAR_0, &VAR_2);
 if (VAR_3 != 0)
  FUNC_1("ISCSISREMOVE");
}
