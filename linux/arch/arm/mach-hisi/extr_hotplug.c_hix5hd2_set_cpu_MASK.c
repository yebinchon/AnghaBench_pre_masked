
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(int VAR_7, bool VAR_8)
{
 u32 VAR_9 = 0;

 if (!VAR_6)
  if (!FUNC_1())
   FUNC_0();

 if (VAR_8) {

  VAR_9 = FUNC_2(VAR_6 + VAR_2);
  VAR_9 &= ~(VAR_5 | VAR_4);
  VAR_9 |= VAR_3;
  FUNC_3(VAR_9, VAR_6 + VAR_2);

  VAR_9 = FUNC_2(VAR_6 + VAR_1);
  VAR_9 &= ~VAR_0;
  FUNC_3(VAR_9, VAR_6 + VAR_1);
 } else {

  VAR_9 = FUNC_2(VAR_6 + VAR_2);
  VAR_9 |= VAR_3 | VAR_4;
  VAR_9 &= ~VAR_5;
  FUNC_3(VAR_9, VAR_6 + VAR_2);


  VAR_9 = FUNC_2(VAR_6 + VAR_1);
  VAR_9 |= VAR_0;
  FUNC_3(VAR_9, VAR_6 + VAR_1);
 }
}
