
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {char const* path; char const* name; } ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct submodule*,int ,int) ;
 struct submodule* FUNC_2 (int) ;

__attribute__((used)) static const struct submodule *FUNC_3(const char *VAR_0)
{
 struct submodule *VAR_1 = ((void*)0);
 const char *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_1 = FUNC_2(sizeof(*VAR_1));
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->path = VAR_2;
 VAR_1->name = VAR_2;

 return (const struct submodule *) VAR_1;
}
