
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int efi_char16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,unsigned long) ;
 int FUNC_3 (int*,int,int*,int) ;

__attribute__((used)) static bool
FUNC_4(efi_char16_t *VAR_1, int VAR_2, u8 *VAR_3,
       unsigned long VAR_4)
{
 u16 VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_0);


 for (VAR_6 = VAR_2; VAR_6 < VAR_2+4; VAR_6++) {
  if (VAR_1[VAR_6] > 127 ||
      FUNC_0(VAR_1[VAR_6] & 0xff) < 0)
   return 1;
 }


 if (VAR_8 > VAR_2 + 4)
  return 0;


 if (VAR_4 < 8)
  return 0;

 VAR_5 = VAR_3[4] | VAR_3[5] << 8;





 VAR_7 = FUNC_2((efi_char16_t *)(VAR_3 + 6), VAR_4 - 6) + 2;


 if (!VAR_7)
  return 0;






 if ((VAR_7 + VAR_5 + 6) > VAR_4)
  return 0;




 return FUNC_3(VAR_1, VAR_2, VAR_3 + VAR_7 + 6,
        VAR_5);
}
