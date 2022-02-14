
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_2 ;

void FUNC_2(void)
{
 if (VAR_2) {
  int VAR_3 = FUNC_0(&VAR_0);
  if (VAR_3)
   FUNC_1("Unable to register PCI driver: %d\n", VAR_3);
  else
   VAR_1 = 1;
 }
}
