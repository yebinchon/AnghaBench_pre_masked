
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char) ;
 int VAR_1 ;
 int FUNC_1 (char) ;

__attribute__((used)) static void
FUNC_2(char VAR_2, bool VAR_3)
{
 off_t VAR_4;

 switch (VAR_2) {
 case '\n':
  if (VAR_3) {

   VAR_1 = 0;
   VAR_0 = 0;
  } else {

   while (FUNC_0(1, ' ') || FUNC_0(1, '\t'))
    VAR_1--;

   if (FUNC_0(2, '\n') && FUNC_0(1, '\n'))
    return;
   FUNC_1('\n');
  }
  break;
 case ' ':
  FUNC_1(' ');
  break;
 case '\t':

  VAR_4 = (VAR_0 / 8 + 1) * 8;
  while (FUNC_0(1, ' ')) {
   VAR_1--;
   VAR_0--;
  }
  while (VAR_0 < VAR_4)
   FUNC_1('\t');
  break;
 }
}
