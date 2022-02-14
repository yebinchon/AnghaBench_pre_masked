
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int const,int const) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int) ;

int FUNC_5(uint32_t VAR_4, uint32_t VAR_5)
{
    uint32_t VAR_6, VAR_7;
    uint16_t VAR_8;

 const uint16_t VAR_9[][2] =
 {
  {0xBE5B,0x3500},
  {0xBE5C,0xB975},
  {0xBE5D,0xB9B9},
  {0xBE77,0xA500},
  {0xBE78,0x5A78},
  {0xBE79,0x6478}
 };

    if (FUNC_1(VAR_0, &VAR_8))
        return -1;

 switch (VAR_8)
 {
  case 0x0000:
   for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
    if (FUNC_2(VAR_1, VAR_2))
     return -1;
    if (FUNC_2(VAR_9[VAR_7][0], VAR_9[VAR_7][1]))
     return -1;
   }
   break;

  case 128:
   if (FUNC_2(VAR_1, VAR_2))
    return -1;
   if (FUNC_2(VAR_9[0][0], VAR_9[0][1]))
    return -1;
   break;

  default:
   FUNC_0("rtl8366s_initChip: unsupported chip found!\n");
   return -1;
 }

    if (FUNC_3(VAR_4, VAR_5))
        return -1;

    for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
        if (FUNC_4(VAR_6, VAR_5))
            return -1;
    }

    return 0;
}
