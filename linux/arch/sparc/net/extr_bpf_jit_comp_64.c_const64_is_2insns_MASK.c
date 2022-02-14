
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,int*,int*,int*) ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_0,
         unsigned long VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (VAR_0 == 0 || VAR_0 == 0xffffffff)
  return 1;

 FUNC_0(VAR_0, VAR_1,
          &VAR_2, &VAR_3,
          &VAR_4);

 if ((VAR_2 == 63 || VAR_3 == 0) &&
     VAR_4 != 0)
  return 1;

 if (VAR_2 - VAR_3 < 21)
  return 1;

 return 0;
}
