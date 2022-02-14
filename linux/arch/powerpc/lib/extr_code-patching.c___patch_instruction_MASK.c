
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int*,int,char*) ;

__attribute__((used)) static int FUNC_1(unsigned int *VAR_0, unsigned int VAR_1,
          unsigned int *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(VAR_1, VAR_2, VAR_3, "stw");
 if (VAR_3)
  return VAR_3;

 asm ("dcbst 0, %0; sync; icbi 0,%1; sync; isync" :: "r" (VAR_2),
           "r" (VAR_0));

 return 0;
}
