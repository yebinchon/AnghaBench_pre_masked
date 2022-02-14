
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 unsigned long VAR_6 ;
 long VAR_7 ;
 unsigned long VAR_8 ;
 long VAR_9 ;

__attribute__((used)) static inline int FUNC_0(unsigned long *VAR_10, int VAR_11)
{
 unsigned long VAR_12 = *VAR_10;
 int VAR_13;


 VAR_13 = (VAR_12 & ((long)VAR_11 << VAR_9)) != 0UL;


 if (VAR_13 != 0) {
  VAR_11 &= ((VAR_12 & VAR_8) >> VAR_9);
  if ((VAR_11 & (VAR_11 - 1)) != 0) {
   if (VAR_11 & VAR_2)
    VAR_11 = VAR_2;
   else if (VAR_11 & VAR_3)
    VAR_11 = VAR_3;
   else if (VAR_11 & VAR_4)
    VAR_11 = VAR_4;
   else if (VAR_11 & VAR_0)
    VAR_11 = VAR_0;
   else if (VAR_11 & VAR_1)
    VAR_11 = VAR_1;
  }
 }







 VAR_12 &= ~(VAR_6);
 VAR_12 |= ((long)VAR_11 << VAR_7);







 if (VAR_13 == 0)
  VAR_12 |= ((long)VAR_11 << VAR_5);


 if (VAR_13 != 0)
  VAR_12 |= (1UL << 14);

 *VAR_10 = VAR_12;

 return (VAR_13 ? 0 : 1);
}
