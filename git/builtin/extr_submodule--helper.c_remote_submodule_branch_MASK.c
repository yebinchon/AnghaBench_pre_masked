
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char const* name; char* branch; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,char*,char const**) ;
 char* FUNC_4 (char*,int ,int *,int *) ;
 int FUNC_5 (char const*,char*,char const**) ;
 int FUNC_6 (char const*,char*) ;
 struct submodule* FUNC_7 (int ,int *,char const*) ;
 int VAR_1 ;
 char* FUNC_8 (char*,char const*) ;

__attribute__((used)) static const char *FUNC_9(const char *VAR_2)
{
 const struct submodule *VAR_3;
 const char *VAR_4 = ((void*)0);
 char *VAR_5;

 VAR_3 = FUNC_7(VAR_1, &VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_5 = FUNC_8("submodule.%s.branch", VAR_3->name);
 if (FUNC_3(VAR_1, VAR_5, &VAR_4))
  VAR_4 = VAR_3->branch;
 FUNC_2(VAR_5);

 if (!VAR_4)
  return "master";

 if (!FUNC_6(VAR_4, ".")) {
  const char *VAR_6 = FUNC_4("HEAD", 0, ((void*)0), ((void*)0));

  if (!VAR_6)
   FUNC_1(FUNC_0("No such ref: %s"), "HEAD");


  if (!FUNC_6(VAR_6, "HEAD"))
   FUNC_1(FUNC_0("Submodule (%s) branch configured to inherit "
         "branch from superproject, but the superproject "
         "is not on any branch"), VAR_3->name);

  if (!FUNC_5(VAR_6, "refs/heads/", &VAR_6))
   FUNC_1(FUNC_0("Expecting a full ref name, got %s"), VAR_6);
  return VAR_6;
 }

 return VAR_4;
}
