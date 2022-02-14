
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_0(FUNC_2(&VAR_2));
 unsigned long VAR_7 = FUNC_0(FUNC_2(&VAR_3));
 unsigned long VAR_8 = FUNC_0(FUNC_2(VAR_1)) - 1;
 unsigned long VAR_9 = FUNC_0(FUNC_2(VAR_4));


 if (VAR_5 <= VAR_0)
  return 0;
 if (VAR_5 >= VAR_6 && VAR_5 < VAR_7)
  return 1;

 if (VAR_5 >= VAR_9 && VAR_5 <= VAR_8)
  return 0;
 if (FUNC_3(FUNC_1(VAR_5)))
  return 1;
 return 0;
}
