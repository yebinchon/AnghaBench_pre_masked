
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref {char* name; int old_oid; } ;
typedef int FILE ;


 int FUNC_0 (char*,char const*) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char*) ;
 int * FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1,
    struct ref **VAR_2, int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;
 FILE *VAR_6;
 int VAR_7;

 FUNC_4(&VAR_4, VAR_1);
 VAR_5 = FUNC_6(&VAR_4, ".keep");
 if (!VAR_5)
  FUNC_0("name of pack lockfile should end with .keep (was '%s')",
      VAR_1);
 FUNC_4(&VAR_4, ".promisor");

 VAR_6 = FUNC_7(VAR_4.buf, "w");
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_2(VAR_6, "%s %s\n", FUNC_3(&VAR_2[VAR_7]->old_oid),
   VAR_2[VAR_7]->name);
 FUNC_1(VAR_6);

 FUNC_5(&VAR_4);
}
