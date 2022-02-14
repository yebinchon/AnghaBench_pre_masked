
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*,char*,char*) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char**,char*) ;

__attribute__((used)) static void
FUNC_10(void)
{
 FILE *VAR_2;
 char VAR_3[256];
 char *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8;

 VAR_2 = FUNC_2(VAR_0, "r");
 if (!VAR_2)
  return;

 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_2)) {
  if (*VAR_3 == '#')
   continue;
  VAR_4 = VAR_3;
  VAR_5 = FUNC_9(&VAR_4, "\t\n ");
  if (VAR_4) while (FUNC_5(*VAR_4)) VAR_4++;
  VAR_6 = FUNC_9(&VAR_4, "\t\n ");
  if (VAR_4) while (FUNC_5(*VAR_4)) VAR_4++;
  VAR_7 = FUNC_9(&VAR_4, "\t\n ");
  if (VAR_4) while (FUNC_5(*VAR_4)) VAR_4++;
  VAR_8 = FUNC_9(&VAR_4, "\t\n ");
  if (!VAR_5 || !VAR_6 || !VAR_7 || !VAR_8)
   continue;

  if (FUNC_8(VAR_8, "-")) {




   if (FUNC_7(VAR_8) < 0) {
    if (FUNC_6(VAR_8) < 0) {
     FUNC_3(VAR_1,
   "%s: can't find or load kernel module %s for %s\n",
         FUNC_4(), VAR_8, VAR_5);
    }
   }
  }
 }
 FUNC_0(VAR_2);
}
