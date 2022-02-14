
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_daemon_fail {int idf_reason; int idf_session_id; } ;
struct connection {int conn_iscsi_fd; int conn_session_id; } ;
typedef int idf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct iscsi_daemon_fail*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct iscsi_daemon_fail*,int ,int) ;
 int FUNC_3 (int ,char const*,int) ;

void
FUNC_4(const struct connection *VAR_2, const char *VAR_3)
{
 struct iscsi_daemon_fail VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_1;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.idf_session_id = VAR_2->conn_session_id;
 FUNC_3(VAR_4.idf_reason, VAR_3, sizeof(VAR_4.idf_reason));

 VAR_5 = FUNC_0(VAR_2->conn_iscsi_fd, VAR_0, &VAR_4);
 if (VAR_5 != 0)
  FUNC_1(1, "ISCSIDFAIL");

 VAR_1 = VAR_6;
}
