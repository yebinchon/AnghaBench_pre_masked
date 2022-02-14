
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct printer {char* printer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct printer*,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (struct printer*,int ,int) ;

void
FUNC_4(struct printer *VAR_3)
{
 struct stat VAR_4;
 int VAR_5;
 char VAR_6[VAR_1];

 FUNC_0(VAR_3, VAR_6, sizeof VAR_6);
 FUNC_1("%s:\n", VAR_3->printer);

 FUNC_3(VAR_3, VAR_2, 1);






 VAR_5 = 1;
 if (FUNC_2(VAR_6, &VAR_4) >= 0) {
  if (VAR_4.st_mode & VAR_0)
   VAR_5 = 0;
 }
 if (VAR_5) {
  FUNC_1("\tnote: This queue currently has printing enabled,\n");
  FUNC_1("\t    so this -msg will only be shown by 'lpq' if\n");
  FUNC_1("\t    a job is actively printing on it.\n");
 }
}
