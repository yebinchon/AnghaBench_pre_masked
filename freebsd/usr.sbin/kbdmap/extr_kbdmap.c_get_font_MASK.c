
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int*,int*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 char* VAR_1 ;

__attribute__((used)) static char *
FUNC_8(void)
{
 char VAR_2[256], VAR_3[20];
 char *VAR_4 = ((void*)0);

 FILE *VAR_5 = FUNC_2(VAR_1, "r");
 if (VAR_5) {
  while (FUNC_1(VAR_2, sizeof(VAR_2), VAR_5)) {
   int VAR_6, VAR_7, VAR_8;

   if (VAR_2[0] == '#')
    continue;

   VAR_8 = FUNC_5(VAR_2,
       " font%dx%d = \"%20[-.0-9a-zA-Z_]",
       &VAR_6, &VAR_7, VAR_3);
   if (VAR_8==3) {
    if (FUNC_6(VAR_3, "NO")) {
     if (VAR_4)
      FUNC_4(VAR_4);
     VAR_4 = FUNC_7(VAR_3);
    }
   }
  }
  FUNC_0(VAR_5);
 } else
  FUNC_3(VAR_0, "Could not open %s for reading\n", VAR_1);

 return VAR_4;
}
