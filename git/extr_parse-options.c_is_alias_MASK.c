
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char** alias_groups; } ;
struct option {int long_name; } ;


 scalar_t__ FUNC_0 (int ,char const**) ;

__attribute__((used)) static int FUNC_1(struct parse_opt_ctx_t *VAR_0,
      const struct option *VAR_1,
      const struct option *VAR_2)
{
 const char **VAR_3;

 if (!VAR_0->alias_groups)
  return 0;

 if (!VAR_1->long_name || !VAR_2->long_name)
  return 0;

 for (VAR_3 = VAR_0->alias_groups; *VAR_3; VAR_3 += 3) {

  if (FUNC_0(VAR_1->long_name, VAR_3) &&
      FUNC_0(VAR_2->long_name, VAR_3))
   return 1;
 }
 return 0;
}
