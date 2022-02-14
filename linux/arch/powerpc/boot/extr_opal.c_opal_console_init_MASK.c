
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct serial_console_data {int close; int putc; int open; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*,char*,scalar_t__*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;

int FUNC_3(void *VAR_4, struct serial_console_data *VAR_5)
{
 FUNC_2();

 if (VAR_4) {
  int VAR_6 = FUNC_1(VAR_4, "reg", &VAR_1, sizeof(u32));
  if (VAR_6 != sizeof(u32))
   return -1;
  VAR_1 = FUNC_0(VAR_1);
 } else
  VAR_1 = 0;

 VAR_5->open = VAR_2;
 VAR_5->putc = VAR_3;
 VAR_5->close = VAR_0;

 return 0;
}
