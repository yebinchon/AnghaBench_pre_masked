
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct morsetab {char inchar; char* morse; } ;


 scalar_t__ VAR_0 ;
 struct morsetab* VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ VAR_2 ;
 struct morsetab* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char FUNC_4 (unsigned char) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char VAR_5)
{
 const struct morsetab *VAR_6;

 if (FUNC_0((unsigned char)VAR_5))
  VAR_5 = FUNC_4((unsigned char)VAR_5);
 if ((VAR_5 == '\r') || (VAR_5 == '\n'))
  VAR_5 = ' ';
 if (VAR_5 == ' ') {
  if (VAR_4)
   FUNC_1(" ");
  else if (VAR_0)
   FUNC_5(" ");
  else if (VAR_2)
   FUNC_2("\n");
  else
   FUNC_3("");
  return;
 }
 for (VAR_6 = ((unsigned char)VAR_5 < 0x80? VAR_3: VAR_1);
      VAR_6 != ((void*)0) && VAR_6->inchar != '\0';
      VAR_6++) {
  if (VAR_6->inchar == VAR_5) {
   if (VAR_4) {
    FUNC_1(VAR_6->morse);
   } else if (VAR_0) {
    FUNC_5(VAR_6->morse);
   } else
    FUNC_3(VAR_6->morse);
  }
 }
}
