
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int * b; } ;
typedef TYPE_1__ int128_t ;
 int FUNC_0 (TYPE_1__*,int const*) ;
 int FUNC_1 (int,int const*) ;
 int FUNC_2 (int,int const*) ;
 int FUNC_3 (int,int const*) ;
 int FUNC_4 (int,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_10(uint8_t const *VAR_2, uint8_t const *VAR_3)
{
 union {
  uint8_t uint8;
  uint16_t uint16;
  uint32_t uint32;
  uint64_t uint64;
  int128_t int128;
 } VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;


 FUNC_4(VAR_5, VAR_2);
 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_4.uint16, VAR_2);
  FUNC_6(VAR_1, "\t%s (%#4.4x)\n", FUNC_9(VAR_4.uint16),
    VAR_4.uint16);
  break;

 case 128:
  FUNC_2(VAR_4.uint32, VAR_2);
  FUNC_6(VAR_1, "\t%#8.8x\n", VAR_4.uint32);
  break;

 case 130:
  FUNC_5(&VAR_4.int128, VAR_2);
  FUNC_6(VAR_1, "\t%#8.8x-%4.4x-%4.4x-%4.4x-%4.4x%8.8x\n",
    FUNC_7(*(uint32_t *)&VAR_4.int128.b[0]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[4]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[6]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[8]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[10]),
    FUNC_7(*(uint32_t *)&VAR_4.int128.b[12]));
  break;

 default:
  FUNC_6(VAR_0, "Invalid Protocol Descriptor. " "Not a UUID, type=%#x\n", VAR_5);

  return;

 }


 for (VAR_7 = 1; VAR_2 < VAR_3; VAR_7 ++) {
  FUNC_6(VAR_1, "\t\tProtocol specific parameter #%d: ", VAR_7);

  FUNC_4(VAR_5, VAR_2);
  switch (VAR_5) {
  case 145:
   FUNC_6(VAR_1, "nil\n");
   break;

  case 134:
  case 146:
  case 151:
   FUNC_4(VAR_4.uint8, VAR_2);
   FUNC_6(VAR_1, "u/int8/bool %u\n", VAR_4.uint8);
   break;

  case 137:
  case 149:
  case 129:
   FUNC_1(VAR_4.uint16, VAR_2);
   FUNC_6(VAR_1, "u/int/uuid16 %u\n", VAR_4.uint16);
   break;

  case 136:
  case 148:
  case 128:
   FUNC_2(VAR_4.uint32, VAR_2);
   FUNC_6(VAR_1, "u/int/uuid32 %u\n", VAR_4.uint32);
   break;

  case 135:
  case 147:
   FUNC_3(VAR_4.uint64, VAR_2);
   FUNC_6(VAR_1, "u/int64 %d\n", VAR_4.uint64);
   break;

  case 138:
  case 150:
   FUNC_0(&VAR_4.int128, VAR_2);
   FUNC_6(VAR_1, "u/int128 %#8.8x%8.8x%8.8x%8.8x\n",
    *(uint32_t *)&VAR_4.int128.b[0],
    *(uint32_t *)&VAR_4.int128.b[4],
    *(uint32_t *)&VAR_4.int128.b[8],
    *(uint32_t *)&VAR_4.int128.b[12]);
   break;

  case 130:
   FUNC_5(&VAR_4.int128, VAR_2);
   FUNC_6(VAR_1, "uuid128 %#8.8x-%4.4x-%4.4x-%4.4x-%4.4x%8.8x\n",
    FUNC_7(*(uint32_t *)&VAR_4.int128.b[0]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[4]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[6]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[8]),
    FUNC_8(*(uint16_t *)&VAR_4.int128.b[10]),
    FUNC_7(*(uint32_t *)&VAR_4.int128.b[12]));
   break;

  case 139:
  case 131:
   FUNC_4(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%c", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  case 141:
  case 133:
   FUNC_1(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%c", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  case 140:
  case 132:
   FUNC_2(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%c", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  case 142:
  case 152:
   FUNC_4(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%#2.2x ", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  case 144:
  case 154:
   FUNC_1(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%#2.2x ", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  case 143:
  case 153:
   FUNC_2(VAR_6, VAR_2);
   for (; VAR_2 < VAR_3 && VAR_6 > 0; VAR_2 ++, VAR_6 --)
    FUNC_6(VAR_1, "%#2.2x ", *VAR_2);
   FUNC_6(VAR_1, "\n");
   break;

  default:
   FUNC_6(VAR_0, "Invalid Protocol Descriptor. " "Unknown data type: %#02x\n", VAR_5);

   return;

  }
 }
}
