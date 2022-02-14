
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int * b; } ;
typedef TYPE_1__ int128_t ;
 int FUNC_0 (int,int const*) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int,int const*) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(uint8_t const *VAR_2, uint8_t const *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;

 if (VAR_3 - VAR_2 < 2) {
  FUNC_4(VAR_0, "Invalid Service Class ID List. " "Too short, len=%zd\n", VAR_3 - VAR_2);

  return;
 }

 FUNC_2(VAR_4, VAR_2);
 switch (VAR_4) {
 case 131:
  FUNC_2(VAR_5, VAR_2);
  break;

 case 133:
  FUNC_0(VAR_5, VAR_2);
  break;

 case 132:
  FUNC_1(VAR_5, VAR_2);
  break;

 default:
  FUNC_4(VAR_0, "Invalid Service Class ID List. " "Not a sequence, type=%#x\n", VAR_4);

  return;

 }

 if (VAR_5 > (VAR_3 - VAR_2)) {
  FUNC_4(VAR_0, "Invalid Service Class ID List. " "Too long len=%d\n", VAR_5);

  return;
 }

 while (VAR_2 < VAR_3) {
  FUNC_2(VAR_4, VAR_2);
  switch (VAR_4) {
  case 129:
   FUNC_0(VAR_6, VAR_2);
   FUNC_4(VAR_1, "\t%s (%#4.4x)\n",
     FUNC_7(VAR_6), VAR_6);
   break;

  case 128:
   FUNC_1(VAR_6, VAR_2);
   FUNC_4(VAR_1, "\t%#8.8x\n", VAR_6);
   break;

  case 130: {
   int128_t VAR_7;

   FUNC_3(&VAR_7, VAR_2);
   FUNC_4(VAR_1, "\t%#8.8x-%4.4x-%4.4x-%4.4x-%4.4x%8.8x\n",
     FUNC_5(*(uint32_t *)&VAR_7.b[0]),
     FUNC_6(*(uint16_t *)&VAR_7.b[4]),
     FUNC_6(*(uint16_t *)&VAR_7.b[6]),
     FUNC_6(*(uint16_t *)&VAR_7.b[8]),
     FUNC_6(*(uint16_t *)&VAR_7.b[10]),
     FUNC_5(*(uint32_t *)&VAR_7.b[12]));
   } break;

  default:
   FUNC_4(VAR_0, "Invalid Service Class ID List. " "Not a UUID, type=%#x\n", VAR_4);

   return;

  }
 }
}
