
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (char*) ;






__attribute__((used)) static int FUNC_1(const u8 *VAR_0, int VAR_1, int VAR_2)
{
 u16 VAR_3;


 for (VAR_1 = VAR_1 + 1; VAR_1 < VAR_2; VAR_1 += VAR_3) {
  u8 VAR_4 = *(VAR_0 + VAR_1);
  VAR_1++;

  switch (VAR_4) {
  case 131:
   return VAR_1;
  case 128:
   if (VAR_1 + 4 > VAR_2)
    return 0;

   VAR_3 = *((const u16 *)(VAR_0 + VAR_1 + 2)) + 4;
   break;
  case 132:
   VAR_3 = 4;
   break;
  case 130:
   VAR_3 = 2;
   break;
  case 129:
   if (VAR_1 + 7 > VAR_2)
    return 0;
   VAR_3 = *(VAR_0 + VAR_1 + 6) + 7;
   break;
  default:
   FUNC_0("Unknown operation byte\n");
   return 0;
  }
 }

 return 0;
}
