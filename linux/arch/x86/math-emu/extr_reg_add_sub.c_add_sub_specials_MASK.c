
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_10__ {int sigh; } ;
typedef TYPE_1__ FPU_REG ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__ const*,scalar_t__,int) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static
int FUNC_8(FPU_REG const *VAR_12, u_char VAR_13, u_char VAR_14,
       FPU_REG const *VAR_15, u_char VAR_16, u_char VAR_17,
       FPU_REG * VAR_18, int VAR_19, int VAR_20)
{
 if (((VAR_13 == VAR_10) || (VAR_16 == VAR_10))
     && (FUNC_5() < 0))
  return VAR_2;

 if (VAR_13 == VAR_9) {
  if (VAR_16 == VAR_9) {

   u_char VAR_21 = VAR_14 ^ VAR_17;

   FUNC_1(VAR_12, VAR_9, VAR_19);
   if (VAR_21) {


    FUNC_7(VAR_18, ((VAR_20 & VAR_0) != VAR_3)
     ? VAR_5 : VAR_4);
   } else
    FUNC_7(VAR_18, VAR_14);
   return VAR_9;
  } else {
   FUNC_6(VAR_15, VAR_18);
   if ((VAR_16 == VAR_10) && (VAR_15->sigh & 0x80000000)) {

    FUNC_3(VAR_18, 1);
    VAR_16 = VAR_8;
   } else if (VAR_16 > VAR_6)
    VAR_16 = VAR_7;
   FUNC_7(VAR_18, VAR_17);
   FUNC_2(VAR_19, VAR_16);
   return VAR_16;
  }
 } else if (VAR_16 == VAR_9) {
  FUNC_6(VAR_12, VAR_18);
  if ((VAR_13 == VAR_10) && (VAR_12->sigh & 0x80000000)) {

   FUNC_3(VAR_18, 1);
   VAR_13 = VAR_8;
  } else if (VAR_13 > VAR_6)
   VAR_13 = VAR_7;
  FUNC_7(VAR_18, VAR_14);
  FUNC_2(VAR_19, VAR_13);
  return VAR_13;
 } else if (VAR_13 == VAR_11) {
  if ((VAR_16 != VAR_11) || (VAR_14 == VAR_17)) {
   FUNC_1(VAR_12, VAR_7, VAR_19);
   FUNC_7(VAR_18, VAR_14);
   return VAR_13;
  }

  return FUNC_4(VAR_19);
 } else if (VAR_16 == VAR_11) {
  FUNC_1(VAR_15, VAR_7, VAR_19);
  FUNC_7(VAR_18, VAR_17);
  return VAR_16;
 }




 return VAR_2;
}
