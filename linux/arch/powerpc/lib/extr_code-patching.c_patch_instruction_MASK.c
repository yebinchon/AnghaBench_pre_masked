
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int*,int) ;
 int FUNC_2 (char*,unsigned int*) ;

int FUNC_3(unsigned int *VAR_1, unsigned int VAR_2)
{

 if (VAR_0 && FUNC_1(VAR_1, 4)) {
  FUNC_2("Skipping init section patching addr: 0x%px\n", VAR_1);
  return 0;
 }
 return FUNC_0(VAR_1, VAR_2);
}
