
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int ,int ) ;

void
FUNC_3(int VAR_3, int VAR_4, struct test *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, ((void*)0), ((void*)0),
     VAR_2, FUNC_1(VAR_2));
 if (VAR_3 && VAR_4)
  FUNC_0("priv_sysctl_write(asroot, injail)", VAR_6, -1,
      VAR_0);
 if (VAR_3 && !VAR_4)
  FUNC_0("priv_sysctl_write(asroot, !injail)", VAR_6, 0, 0);
 if (!VAR_3 && VAR_4)
  FUNC_0("priv_sysctl_write(!asroot, injail)", VAR_6, -1,
      VAR_0);
 if (!VAR_3 && !VAR_4)
  FUNC_0("priv_sysctl_write(!asroot, !injail)", VAR_6, -1,
      VAR_0);
}
