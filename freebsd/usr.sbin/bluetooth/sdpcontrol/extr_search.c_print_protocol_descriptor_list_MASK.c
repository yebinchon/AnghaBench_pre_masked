
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;





 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int,int const*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int const*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(uint8_t const *VAR_1, uint8_t const *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 if (VAR_2 - VAR_1 < 2) {
  FUNC_3(VAR_0, "Invalid Protocol Descriptor List. " "Too short, len=%d\n", VAR_2 - VAR_1);

  return;
 }

 FUNC_2(VAR_3, VAR_1);
 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_4, VAR_1);
  break;

 case 130:
  FUNC_0(VAR_4, VAR_1);
  break;

 case 129:
  FUNC_1(VAR_4, VAR_1);
  break;

 default:
  FUNC_3(VAR_0, "Invalid Protocol Descriptor List. " "Not a sequence, type=%#x\n", VAR_3);

  return;

 }

 if (VAR_4 > (VAR_2 - VAR_1)) {
  FUNC_3(VAR_0, "Invalid Protocol Descriptor List. " "Too long, len=%d\n", VAR_4);

  return;
 }

 while (VAR_1 < VAR_2) {
  FUNC_2(VAR_3, VAR_1);
  switch (VAR_3) {
  case 128:
   FUNC_2(VAR_4, VAR_1);
   break;

  case 130:
   FUNC_0(VAR_4, VAR_1);
   break;

  case 129:
   FUNC_1(VAR_4, VAR_1);
   break;

  default:
   FUNC_3(VAR_0, "Invalid Protocol Descriptor List. " "Not a sequence, type=%#x\n", VAR_3);

   return;

  }

  if (VAR_4 > (VAR_2 - VAR_1)) {
   FUNC_3(VAR_0, "Invalid Protocol Descriptor List. " "Too long, len=%d\n", VAR_4);

   return;
  }

  FUNC_4(VAR_1, VAR_1 + VAR_4);
  VAR_1 += VAR_4;
 }
}
