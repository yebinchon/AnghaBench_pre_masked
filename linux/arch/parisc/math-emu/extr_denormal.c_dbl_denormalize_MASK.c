
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ VAR_1 ;




void
FUNC_6(unsigned int *VAR_2,
 unsigned int * VAR_3,
 boolean *VAR_4,
 int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 boolean VAR_10 = VAR_1, VAR_11, VAR_12;

 VAR_6 = *VAR_2;
 VAR_7 = *VAR_3;
 VAR_11 = *VAR_4;
 VAR_9 = FUNC_1(VAR_6) - VAR_0;
 VAR_8 = FUNC_5(VAR_6);
 FUNC_0(VAR_6,VAR_7,VAR_9,VAR_10,VAR_11,VAR_12);
 if (VAR_12) {
     switch (VAR_5) {
       case 128:
  if (VAR_8 == 0) {
   FUNC_2(VAR_6,VAR_7);
  }
  break;
       case 130:
  if (VAR_8 != 0) {
   FUNC_2(VAR_6,VAR_7);
  }
  break;
       case 129:
  if (VAR_10 && (VAR_11 ||
         FUNC_3(VAR_7))) {
      FUNC_2(VAR_6,VAR_7);
  }
  break;
     }
 }
 FUNC_4(VAR_6,VAR_8);
 *VAR_2 = VAR_6;
 *VAR_3 = VAR_7;
 *VAR_4 = VAR_12;
 return;
}
