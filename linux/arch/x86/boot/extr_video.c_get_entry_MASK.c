
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entry_buf ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 char VAR_1[4];
 int VAR_2, VAR_3 = 0;
 int VAR_4;
 unsigned int VAR_5;

 do {
  VAR_4 = FUNC_0();

  if (VAR_4 == '\b') {
   if (VAR_3 > 0) {
    FUNC_2("\b \b");
    VAR_3--;
   }
  } else if ((VAR_4 >= '0' && VAR_4 <= '9') ||
      (VAR_4 >= 'A' && VAR_4 <= 'Z') ||
      (VAR_4 >= 'a' && VAR_4 <= 'z')) {
   if (VAR_3 < sizeof(VAR_1)) {
    VAR_1[VAR_3++] = VAR_4;
    FUNC_1(VAR_4);
   }
  }
 } while (VAR_4 != '\r');
 FUNC_1('\n');

 if (VAR_3 == 0)
  return VAR_0;

 VAR_5 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_5 <<= 4;
  VAR_4 = VAR_1[VAR_2] | 0x20;
  VAR_5 += (VAR_4 > '9') ? VAR_4-'a'+10 : VAR_4-'0';
 }

 return VAR_5;
}
