
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_1)
{
 uid_t VAR_2;
 int VAR_3;

 if (FUNC_3() != 0)
  FUNC_1(-1, "get_sock_priv: running without real uid 0");

 VAR_2 = FUNC_2();
 if (FUNC_4(0) < 0)
  FUNC_0(-1, "get_sock_priv: seteuid(0)");

 VAR_3 = FUNC_5(VAR_0, VAR_1, 0);

 if (FUNC_4(VAR_2) < 0)
  FUNC_0(-1, "get_sock_priv: seteuid(%d)", VAR_2);

 return (VAR_3);
}
