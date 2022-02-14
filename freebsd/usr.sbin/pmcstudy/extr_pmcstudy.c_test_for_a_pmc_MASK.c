
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int line ;
typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*,char*,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,char const*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_0, int VAR_1)
{
 FILE *VAR_2;
 pid_t VAR_3=0;
 char VAR_4[1024];
 char VAR_5[1024];
 char VAR_6[1024];
 int VAR_7, VAR_8, VAR_9;

 if (VAR_1 < 50) {
  VAR_7 = 50 - VAR_1;
  for(VAR_9=0; VAR_9<VAR_7; VAR_9++) {
   FUNC_3(" ");
  }
 }
 FUNC_4(VAR_4, "/usr/sbin/pmcstat -w .25 -c 0 -s %s", VAR_0);
 VAR_2 = FUNC_2(VAR_4, "r", &VAR_3);
 if (VAR_2 == ((void*)0)) {
  FUNC_3("Failed -- popen fails\n");
  return;
 }

 VAR_7 = FUNC_4(VAR_6, "%s", VAR_0);
 if (FUNC_0(VAR_5, sizeof(VAR_5), VAR_2) == ((void*)0)) {
  FUNC_3("Failed -- no output from pmstat\n");
  goto out;
 }
 VAR_8 = FUNC_5(VAR_5);
 if (VAR_5[(VAR_8-1)] == '\n') {
  VAR_5[(VAR_8-1)] = 0;
  VAR_8--;
 }
 for(VAR_9=2; VAR_9<(VAR_8-VAR_7); VAR_9++) {
  if (FUNC_6(&VAR_5[VAR_9], "ERROR", 5) == 0) {
   FUNC_3("Failed %s\n", VAR_5);
   goto out;
  } else if (FUNC_6(&VAR_5[VAR_9], VAR_6, VAR_7) == 0) {
   int VAR_10, VAR_11;

   if (FUNC_0(VAR_5, sizeof(VAR_5), VAR_2) == ((void*)0)) {
    FUNC_3("Failed -- no second output from pmstat\n");
    goto out;
   }
   VAR_7 = FUNC_5(VAR_5);
   for (VAR_10=0; VAR_10<VAR_7; VAR_10++) {
    if (VAR_5[VAR_10] == ' ') {
     VAR_10++;
    } else {
     break;
    }
   }
   FUNC_3("Pass");
   VAR_7 = FUNC_5(&VAR_5[VAR_10]);
   if (VAR_7 < 20) {
    for(VAR_11=0; VAR_11<(20-VAR_7); VAR_11++) {
     FUNC_3(" ");
    }
   }
   if (VAR_7) {
    FUNC_3("%s", &VAR_5[VAR_10]);
   } else {
    FUNC_3("\n");
   }
   goto out;
  }
 }
 FUNC_3("Failed -- '%s' not '%s'\n", VAR_5, VAR_6);
out:
 FUNC_1(VAR_2, VAR_3);

}
