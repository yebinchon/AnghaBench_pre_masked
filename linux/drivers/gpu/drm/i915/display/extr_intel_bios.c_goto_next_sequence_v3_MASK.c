
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (char*,...) ;

 int VAR_0 ;






__attribute__((used)) static int FUNC_1(const u8 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 u32 VAR_6;





 if (VAR_3 < 5) {
  FUNC_0("Too small sequence size\n");
  return 0;
 }


 VAR_2++;






 VAR_6 = *((const u32 *)(VAR_1 + VAR_2));
 VAR_2 += 4;

 VAR_4 = VAR_2 + VAR_6;
 if (VAR_4 > VAR_3) {
  FUNC_0("Invalid sequence size\n");
  return 0;
 }

 for (; VAR_2 < VAR_3; VAR_2 += VAR_5) {
  u8 VAR_7 = *(VAR_1 + VAR_2);
  VAR_2++;

  if (VAR_7 == VAR_0) {
   if (VAR_2 != VAR_4) {
    FUNC_0("Invalid element structure\n");
    return 0;
   }
   return VAR_2;
  }

  VAR_5 = *(VAR_1 + VAR_2);
  VAR_2++;





  switch (VAR_7) {
  case 129:
  case 133:
  case 132:
  case 131:
  case 128:
  case 130:
   break;
  default:
   FUNC_0("Unknown operation byte %u\n",
      VAR_7);
   break;
  }
 }

 return 0;
}
