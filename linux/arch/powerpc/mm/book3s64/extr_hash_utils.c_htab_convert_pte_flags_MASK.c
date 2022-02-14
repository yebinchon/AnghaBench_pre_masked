
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;

unsigned long FUNC_2(unsigned long VAR_18)
{
 unsigned long VAR_19 = 0;


 if ((VAR_18 & VAR_11) == 0)
  VAR_19 |= VAR_4;







 if (VAR_18 & VAR_13) {



  if (!(VAR_18 & VAR_17)) {
   if (FUNC_0(VAR_8))
    VAR_19 |= (VAR_5 | 0x2);
   else
    VAR_19 |= 0x3;
  }
 } else {
  if (VAR_18 & VAR_14)
   VAR_19 |= 0x2;
  if (!((VAR_18 & VAR_17) && (VAR_18 & VAR_10)))
   VAR_19 |= 0x1;
 }




 VAR_19 |= VAR_6;

 if (VAR_18 & VAR_10)
  VAR_19 |= VAR_0;




 if ((VAR_18 & VAR_9) == VAR_16)
  VAR_19 |= VAR_2;
 else if ((VAR_18 & VAR_9) == VAR_12)
  VAR_19 |= (VAR_2 | VAR_1);
 else if ((VAR_18 & VAR_9) == VAR_15)
  VAR_19 |= (VAR_7 | VAR_2 | VAR_3);
 else



  VAR_19 |= VAR_3;

 VAR_19 |= FUNC_1(VAR_18);
 return VAR_19;
}
