
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {char* name; struct ref* next; } ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0,
   struct ref *VAR_1,
   struct ref **VAR_2)
{
 int VAR_3 = FUNC_2(VAR_0);
 struct ref *VAR_4 = ((void*)0);
 struct ref *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;

 for (VAR_6 = VAR_7 = 0; VAR_1; VAR_1 = VAR_1->next) {
  char *VAR_8 = VAR_1->name;
  int VAR_9 = FUNC_2(VAR_8);

  if (!FUNC_0(VAR_0, VAR_8))
   continue;
  if (VAR_9 != VAR_3 &&
      VAR_3 != VAR_9 - 5 &&
      !FUNC_1(VAR_8, "refs/heads/") &&
      !FUNC_1(VAR_8, "refs/tags/")) {







   VAR_4 = VAR_1;
   VAR_6++;
  }
  else {
   VAR_5 = VAR_1;
   VAR_7++;
  }
 }
 if (!VAR_5) {
  if (VAR_2)
   *VAR_2 = VAR_4;
  return VAR_6;
 }
 else {
  if (VAR_2)
   *VAR_2 = VAR_5;
  return VAR_7;
 }
}
