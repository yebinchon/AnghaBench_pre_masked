
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct console *VAR_1, char *VAR_2)
{
 char VAR_3[32];


 if (FUNC_0("BOOT_CONSOLE", VAR_3, 32) >= 0) {
   return -VAR_0;
 }
 return 0;
}
