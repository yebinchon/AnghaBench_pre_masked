
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int conn_iscsi_fd; } ;
typedef int cap_rights_t ;


 int VAR_0 ;
 unsigned long const VAR_1 ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long const VAR_4 ;
 unsigned long const VAR_5 ;
 unsigned long const VAR_6 ;
 unsigned long const VAR_7 ;
 unsigned long const VAR_8 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,unsigned long const*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned long const*) ;

__attribute__((used)) static void
FUNC_9(struct connection *VAR_9)
{
 cap_rights_t VAR_10;




 const unsigned long VAR_11[] = { VAR_3, VAR_2, VAR_6,
     VAR_8, VAR_7 };


 FUNC_0(&VAR_10, VAR_0);
 if (FUNC_4(VAR_9->conn_iscsi_fd, &VAR_10) < 0)
  FUNC_6(1, "cap_rights_limit");

 if (FUNC_3(VAR_9->conn_iscsi_fd, VAR_11, FUNC_8(VAR_11)) < 0)
  FUNC_6(1, "cap_ioctls_limit");

 if (FUNC_2() != 0)
  FUNC_6(1, "cap_enter");

 if (FUNC_1())
  FUNC_5("Capsicum capability mode enabled");
 else
  FUNC_7("Capsicum capability mode not supported");
}
