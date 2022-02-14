
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct biosmemcon_ebda {scalar_t__ signature; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct biosmemcon_ebda*) ;
 int FUNC_1 (struct biosmemcon_ebda*) ;
 unsigned int FUNC_2 () ;
 struct biosmemcon_ebda* FUNC_3 (unsigned int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool FUNC_5(void)
{
 unsigned int VAR_2;
 size_t VAR_3, VAR_4;

 VAR_2 = FUNC_2();
 if (!VAR_2) {
  FUNC_4("memconsole: BIOS EBDA non-existent.\n");
  return 0;
 }


 VAR_3 = *(u8 *)FUNC_3(VAR_2);
 VAR_3 <<= 10;





 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct biosmemcon_ebda *VAR_5 = FUNC_3(VAR_2 + VAR_4);


  if (VAR_5->signature == VAR_0) {
   FUNC_0(VAR_5);
   return 1;
  }


  if (VAR_5->signature == VAR_1) {
   FUNC_1(VAR_5);
   return 1;
  }
 }

 FUNC_4("memconsole: BIOS console EBDA structure not found!\n");
 return 0;
}
