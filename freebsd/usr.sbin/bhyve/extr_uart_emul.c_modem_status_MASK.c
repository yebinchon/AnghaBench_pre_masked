
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;

__attribute__((used)) static uint8_t
FUNC_1(uint8_t VAR_10)
{
 uint8_t VAR_11;

 if (VAR_10 & VAR_1) {




  VAR_11 = 0;
  if (VAR_10 & VAR_4)
   VAR_11 |= VAR_5;
  if (VAR_10 & VAR_0)
   VAR_11 |= VAR_8;
  if (VAR_10 & VAR_2)
   VAR_11 |= VAR_9;
  if (VAR_10 & VAR_3)
   VAR_11 |= VAR_6;
 } else {




  VAR_11 = VAR_6 | VAR_8;
 }
 FUNC_0((VAR_11 & VAR_7) == 0);

 return (VAR_11);
}
