
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ch_eeprom {int* data; int len; int offset; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (char const*,int ,struct ch_eeprom*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_5)
{
 int VAR_6, VAR_7;
 uint8_t VAR_8[VAR_4];
 struct ch_eeprom VAR_9;
 uint8_t *VAR_10 = VAR_8;

 FUNC_0(VAR_8, sizeof(VAR_8));
 VAR_9.offset = VAR_1;
 VAR_9.data = VAR_10;
 VAR_9.len = sizeof(VAR_8);
 if (FUNC_1(VAR_5, VAR_0, &VAR_9))
  FUNC_2(1, "show protocol sram");

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--) {
   int VAR_11 = VAR_6 * VAR_3 + VAR_7;
   uint8_t VAR_12 = VAR_10[VAR_11 / 2];

   if (VAR_11 & 1)
    VAR_12 >>= 4;
   else
    VAR_12 &= 0xf;
   FUNC_3("%x", VAR_12);
  }
  FUNC_4('\n');
 }
 return 0;
}
