
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ verbose; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_3)
{
    int VAR_4, VAR_5;
    char *VAR_6;
    char VAR_7[VAR_0];

    while (1) {
 VAR_6 = VAR_7;
 VAR_4 = 0;
 while ((VAR_5 = FUNC_0(VAR_3)) != VAR_1) {
     if (VAR_5 == '*' && !VAR_4 && VAR_6 > VAR_7 && VAR_6[-1] == '/') {
  VAR_4 = VAR_6 - VAR_7;
  *VAR_6++ = VAR_5;
     } else if (VAR_5 == '/' && VAR_4 && VAR_6 > VAR_7 && VAR_6[-1] == '*') {
  VAR_6 = VAR_7 + VAR_4 - 1;
  VAR_4 = 0;
     } else if (FUNC_1((unsigned char)VAR_5)) {
  if (VAR_6 > VAR_7 && !VAR_4)
      break;
     } else {
  *VAR_6++ = VAR_5;
     }
 }
 if (VAR_6 != VAR_7) {
     *VAR_6++ = 0;
     if (VAR_2.verbose)
  FUNC_2("profile: %s\n", VAR_7);
     FUNC_3(VAR_7);
 }
 else if (VAR_5 == VAR_1)
     return;
    }
}
