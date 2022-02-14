
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(unsigned long VAR_4, unsigned long VAR_5)
{
 if (FUNC_1(VAR_2)) {
  if (VAR_5 >= VAR_1)
   return -VAR_0;

  if (VAR_4 > VAR_1 - VAR_5)
   return -VAR_0;
 } else {
  if (VAR_5 >= VAR_3)
   return -VAR_0;

  if (FUNC_0(VAR_4, VAR_5))
   return -VAR_0;
 }

 return 0;
}
