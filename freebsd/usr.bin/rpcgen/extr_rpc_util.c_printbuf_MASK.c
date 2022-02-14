
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 char VAR_3;
 int VAR_4;
 int VAR_5;



 for (VAR_4 = 0; (VAR_3 = VAR_1[VAR_4]); VAR_4++) {
  if (VAR_3 == '\t') {
   VAR_5 = 8 - (VAR_4 % 4);
   VAR_3 = ' ';
  } else {
   VAR_5 = 1;
  }
  while (VAR_5--) {
   (void) FUNC_0(VAR_3, VAR_2);
  }
 }
}
