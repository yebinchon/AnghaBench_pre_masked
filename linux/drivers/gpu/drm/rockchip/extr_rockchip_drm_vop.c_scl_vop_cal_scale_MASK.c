
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef enum scale_mode { ____Placeholder_scale_mode } scale_mode ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static uint16_t FUNC_5(enum scale_mode VAR_4, uint32_t VAR_5,
      uint32_t VAR_6, bool VAR_7,
      int VAR_8, int *VAR_9)
{
 uint16_t VAR_10 = 1 << VAR_3;

 if (VAR_9)
  *VAR_9 = 0;

 if (VAR_7) {
  if (VAR_4 == VAR_1)
   VAR_10 = FUNC_0(VAR_5, VAR_6);
  else if (VAR_4 == VAR_0)
   VAR_10 = FUNC_1(VAR_5, VAR_6);
 } else {
  if (VAR_4 == VAR_1) {
   if (VAR_8 == VAR_2)
    VAR_10 = FUNC_2(VAR_5, VAR_6);
   else
    VAR_10 = FUNC_0(VAR_5, VAR_6);
  } else if (VAR_4 == VAR_0) {
   if (VAR_9) {
    *VAR_9 = FUNC_4(VAR_5, VAR_6);
    VAR_10 = FUNC_3(VAR_5, VAR_6,
           *VAR_9);
   } else {
    VAR_10 = FUNC_1(VAR_5, VAR_6);
   }
  }
 }

 return VAR_10;
}
