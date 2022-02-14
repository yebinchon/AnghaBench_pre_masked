
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_console_data {char (* getc ) () ;int (* putc ) (char) ;scalar_t__ (* tstc ) () ;} ;
struct TYPE_2__ {struct serial_console_data* data; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 char FUNC_3 () ;
 int FUNC_4 (char) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(char *VAR_1, int VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0, VAR_5;
 char VAR_6, *VAR_7;
 struct serial_console_data *VAR_8 = VAR_0.data;

 VAR_7 = VAR_1;
 VAR_5 = FUNC_1(VAR_1);
 VAR_7 = &VAR_1[VAR_5];
 VAR_5++;

 do {
  if (VAR_8->tstc()) {
   while (((VAR_6 = VAR_8->getc()) != '\n') && (VAR_6 != '\r')) {

    if ((VAR_6 == '\b') || (VAR_6 == '\177')) {
     if (VAR_7 != VAR_1) {
      VAR_7--;
      VAR_5--;
      FUNC_0("\b \b");
     }

    } else if ((VAR_6 == '\030') || (VAR_6 == '\025')) {
     while (VAR_7 != VAR_1) {
      VAR_7--;
      VAR_5--;
      FUNC_0("\b \b");
     }
    } else if (VAR_5 < VAR_2) {
      *VAR_7++ = VAR_6;
      VAR_5++;
      VAR_8->putc(VAR_6);
    }
   }
   break;
  }
  FUNC_5(1000);
 } while (VAR_4++ < VAR_3);
 *VAR_7 = 0;
}
