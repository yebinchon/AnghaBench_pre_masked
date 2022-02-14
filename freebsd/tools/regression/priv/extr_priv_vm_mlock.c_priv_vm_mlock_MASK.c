
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int ) ;

void
FUNC_3(int VAR_1, int VAR_2, struct test *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_4, FUNC_1());
 if (VAR_1 && VAR_2)
  FUNC_0("priv_vm_mlock(asroot, injail)", VAR_4, -1, VAR_0);
 if (VAR_1 && !VAR_2)
  FUNC_0("priv_vm_mlock(asroot, !injail", VAR_4, 0, 0);
 if (!VAR_1 && VAR_2)
  FUNC_0("priv_vm_mlock(!asroot, injail", VAR_4, -1, VAR_0);
 if (!VAR_1 && !VAR_2)
  FUNC_0("priv_vm_mlock(!asroot, !injail", VAR_4, -1, VAR_0);
}
