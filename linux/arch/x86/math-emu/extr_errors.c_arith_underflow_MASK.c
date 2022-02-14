
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(FPU_REG *VAR_11)
{
 int VAR_12 = VAR_7;

 if (VAR_9 & VAR_1) {

  if (FUNC_2(VAR_11) <= VAR_2 - 63) {
   FUNC_3(&VAR_0, VAR_11);
   VAR_10 &= ~VAR_6;
   VAR_12 = VAR_8;
  } else {
   FUNC_4(VAR_11);
  }
 } else {

  FUNC_1(VAR_11, (3 * (1 << 13)) + VAR_3);
 }

 FUNC_0(VAR_5);
 if (VAR_9 & VAR_1) {

  FUNC_0(VAR_4);
  return VAR_12;
 }

 return VAR_12;

}
