
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int ,int,int*,char*,char*,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_3;





 if (FUNC_2(VAR_0, VAR_1, 0, 0, 0, 0, &VAR_3, "PF_INET",
     "SOCK_STREAM", "test_defaults", "default_0_listen_0") < 0)
  FUNC_1(-1);
 FUNC_0(VAR_3);





 if (FUNC_2(VAR_0, VAR_1, 0, -1, 0, VAR_2, &VAR_3,
     "PF_INET", "SOCK_STREAM", "test_defaults", "default_0_listen_-1")
     < 0)
  FUNC_1(-1);
 FUNC_0(VAR_3);





 if (FUNC_2(VAR_0, VAR_1, 0, 1, 0, 1, &VAR_3, "PF_INET",
     "SOCK_STREAM", "test_defaults", "default_0_listen_1") < 0)
  FUNC_1(-1);
 FUNC_0(VAR_3);





 if (FUNC_2(VAR_0, VAR_1, 0, VAR_2, 0, VAR_2,
     &VAR_3, "PF_INET", "SOCK_STREAM", "test_defaults",
     "default_0_listen_somaxconn") < 0)
  FUNC_1(-1);
 FUNC_0(VAR_3);





 if (FUNC_2(VAR_0, VAR_1, 0, VAR_2+1, 0, VAR_2,
     &VAR_3, "PF_INET", "SOCK_STREAM", "test_defaults",
     "default_0_listen_somaxconn+1") < 0)
  FUNC_1(-1);
 FUNC_0(VAR_3);
}
