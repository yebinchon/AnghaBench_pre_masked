
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (int,char**) ;
 int FUNC_5 (char*,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int,char*,char*) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(char *VAR_0)
{
 FILE *VAR_1;
 int VAR_2, VAR_3;
 char VAR_4[100], VAR_5[5][50], *VAR_6[5], *VAR_7;

 if ((VAR_1 = FUNC_2(VAR_0, "r")) == ((void*)0))
  FUNC_7(1, "cannot open %s", VAR_0);
 VAR_6[0] = &VAR_5[0][0];
 VAR_6[1] = &VAR_5[1][0];
 VAR_6[2] = &VAR_5[2][0];
 VAR_6[3] = &VAR_5[3][0];
 VAR_6[4] = &VAR_5[4][0];
 VAR_3 = 0;
 while(FUNC_1(VAR_4, sizeof(VAR_4), VAR_1) != ((void*)0)) {
  if ((VAR_7 = FUNC_6(VAR_4, '#')) != ((void*)0))
   *VAR_7 = '\0';
  for (VAR_7 = VAR_4; FUNC_3(*VAR_7); VAR_7++);
  if (*VAR_7 == '\n' || *VAR_7 == '\0')
   continue;
  VAR_2 = FUNC_5(VAR_7, "%49s %49s %49s %49s %49s", VAR_5[0], VAR_5[1],
      VAR_5[2], VAR_5[3], VAR_5[4]);
  if (VAR_2 < 2) {
   FUNC_8("bad line: %s", VAR_4);
   VAR_3 = 1;
   continue;
  }
  if (FUNC_4(VAR_2, VAR_6))
   VAR_3 = 1;
 }
 FUNC_0(VAR_1);
 return (VAR_3);
}
