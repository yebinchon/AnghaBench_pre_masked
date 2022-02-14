
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct fixed31_32 {int dummy; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (struct fixed31_32) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct fixed31_32,int ) ;
 int FUNC_4 (struct fixed31_32,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static uint16_t FUNC_7(
 struct fixed31_32 VAR_1,
 uint8_t VAR_2,
 uint8_t VAR_3)
{
 int32_t VAR_4;
 int32_t VAR_5 = 1 << VAR_3;

 uint16_t VAR_6;

 uint16_t VAR_7 = (uint16_t)FUNC_1(
  FUNC_0(
   VAR_1));

 if (VAR_7 <= (uint16_t)(1 << VAR_2) - (1 / (uint16_t)VAR_5))
  VAR_4 = (uint16_t)FUNC_1(
   FUNC_4(
    VAR_1,
    VAR_5));
 else {
  VAR_4 = FUNC_1(
   FUNC_6(
    FUNC_2(
     1LL << VAR_2),
    FUNC_5(
     FUNC_2(
      VAR_5))));
 }

 if (VAR_4 >= 0)
  VAR_6 = (uint16_t)VAR_4;
 else
  VAR_6 = (uint16_t)(
  (1 << (VAR_2 + VAR_3 + 1)) + VAR_4);

 if ((VAR_6 != 0) && FUNC_3(
  VAR_1, VAR_0))
  VAR_6 |= 1 << (VAR_2 + VAR_3);

 return VAR_6;
}
