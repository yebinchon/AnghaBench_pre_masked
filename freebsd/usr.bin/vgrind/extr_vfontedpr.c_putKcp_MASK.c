
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char) ;
 char* VAR_3 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_4, char *VAR_5, bool VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;

    while (VAR_4 <= VAR_5) {
 if (VAR_0) {
     if (*VAR_4 == ' ' || *VAR_4 == '\t') {
  if (VAR_8 == 0)
      FUNC_2("\001");
  FUNC_2("\t");
  VAR_8 = 1;
  while (*VAR_4 == ' ' || *VAR_4 == '\t')
      VAR_4++;
  continue;
     }
 }


 if (*VAR_4 == '\t') {
     while (*VAR_4 == '\t')
  VAR_4++;
     VAR_7 = FUNC_5(VAR_3, VAR_4) - VAR_1 / 8;
     FUNC_2("\\h'|%dn'", VAR_7 * 10 + 1 - VAR_1 % 8);
     continue;
 }

 if (!VAR_2 && !VAR_6)
     if ((*VAR_4 == '#' || FUNC_0(*VAR_4))
     && (VAR_4 == VAR_3 || !FUNC_0(VAR_4[-1]))) {
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 > 0) {
      FUNC_3("\\*(+K");
      do
   FUNC_4((unsigned char)*VAR_4++);
      while (--VAR_7 > 0);
      FUNC_3("\\*(-K");
      continue;
  }
     }

 FUNC_4((unsigned char)*VAR_4++);
    }
}
