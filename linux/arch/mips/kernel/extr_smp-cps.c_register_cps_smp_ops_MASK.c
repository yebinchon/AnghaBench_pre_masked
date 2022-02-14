
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 if (!FUNC_0()) {
  FUNC_1("MIPS CPS SMP unable to proceed without a CM\n");
  return -VAR_1;
 }


 if (!(FUNC_2() & VAR_0)) {
  FUNC_1("MIPS CPS SMP unable to proceed without a GIC\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_2);
 return 0;
}
