
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static unsigned int FUNC_7(void)
{
 int VAR_2;
 unsigned int VAR_3;

 FUNC_6("Press <ENTER> to see video modes available, "
      "<SPACE> to continue, or wait 30 sec\n");

 FUNC_3();
 while (1) {
  VAR_2 = FUNC_2();
  if (VAR_2 == ' ' || VAR_2 == 0)
   return VAR_1;
  if (VAR_2 == '\r')
   break;
  FUNC_5('\a');
 }


 for (;;) {
  FUNC_0();

  FUNC_6("Enter a video mode or \"scan\" to scan for "
       "additional modes: ");
  VAR_3 = FUNC_1();
  if (VAR_3 != VAR_0)
   return VAR_3;

  FUNC_4(1);
 }
}
