
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(int VAR_5)
{
 int VAR_6;
 FILE *VAR_7;

 if ((VAR_2 || (VAR_3 && VAR_5 == 1)) &&
     FUNC_3(VAR_1)) {
  if ((VAR_7 = FUNC_1("/dev/tty", "r")) != ((void*)0)) {
   (void)FUNC_4('\a', VAR_4);
   while ((VAR_6 = FUNC_2(VAR_7)) != '\n' && VAR_6 != VAR_0)
    ;
   (void)FUNC_0(VAR_7);
  }
 }
}
