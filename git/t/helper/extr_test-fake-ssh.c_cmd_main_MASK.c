
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
typedef int FILE ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char const**,int ) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;

int FUNC_7(int VAR_2, const char **VAR_3)
{
 const char *VAR_4 = FUNC_4("TRASH_DIRECTORY");
 struct strbuf VAR_5 = VAR_1;
 FILE *VAR_6;
 int VAR_7;
 const char *VAR_8[] = { ((void*)0), ((void*)0) };


 if (!VAR_4)
  FUNC_0("Need a TRASH_DIRECTORY!");
 FUNC_6(&VAR_5, "%s/ssh-output", VAR_4);
 VAR_6 = FUNC_2(VAR_5.buf, "w");
 if (!VAR_6)
  FUNC_0("Could not write to %s", VAR_5.buf);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_3(VAR_6, "%s%s", VAR_7 > 0 ? " " : "", VAR_7 > 0 ? VAR_3[VAR_7] : "ssh:");
 FUNC_3(VAR_6, "\n");
 FUNC_1(VAR_6);


 if (VAR_2 < 2)
  return 0;
 VAR_8[0] = VAR_3[VAR_2 - 1];
 return FUNC_5(VAR_8, VAR_0);
}
