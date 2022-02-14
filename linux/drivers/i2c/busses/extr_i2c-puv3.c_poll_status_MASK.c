
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static short FUNC_3(unsigned long VAR_5)
{
 int VAR_6 = 1000;

 if (VAR_5 & VAR_2) {
  do {
   FUNC_2(10);
  } while (!(FUNC_1(VAR_1) & VAR_5) && (--VAR_6 > 0));
 } else {

  do {
   if (FUNC_1(VAR_3) == VAR_4)
    FUNC_0(20);
   else
    FUNC_2(10);
  } while (!(FUNC_1(VAR_0) & 0xf) && (--VAR_6 > 0));
 }

 return (VAR_6 > 0);
}
