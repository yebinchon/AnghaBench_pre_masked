
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_12, unsigned int VAR_13,
       int *VAR_14)
{
 int VAR_15 = 0;

 if (!(VAR_12 & VAR_10))
  *VAR_14 = 1;

 if (!*VAR_14)
  VAR_15 = VAR_7;

 if (VAR_13 & VAR_0)
  return VAR_15 + VAR_6;

 if (VAR_13 & VAR_5)
  return VAR_15 + VAR_8;

 if (VAR_12 & VAR_11) {
  if (VAR_13 & VAR_2)
   return VAR_15 + VAR_8;
  if ((VAR_13 &
       (VAR_1|VAR_4|VAR_3)) == VAR_1)
   return VAR_15 + VAR_9;
 }

 return 0;
}
