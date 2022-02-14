
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char const** alias_groups; } ;
struct option {scalar_t__ type; int short_name; char* long_name; char* value; } ;


 int FUNC_0 (struct option*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const**,int) ;
 int FUNC_3 (struct option*,struct option const*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct option*,struct option const*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static struct option *FUNC_6(struct parse_opt_ctx_t *VAR_2,
      const struct option *VAR_3)
{
 struct option *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_3[VAR_6].type != VAR_1; VAR_6++) {
  if (VAR_3[VAR_6].type == VAR_0)
   VAR_8++;
 }

 if (!VAR_8)
  return ((void*)0);

 FUNC_0(VAR_4, VAR_6 + 1);
 FUNC_3(VAR_4, VAR_3, VAR_6 + 1);


 FUNC_2(VAR_2->alias_groups, 3 * (VAR_8 + 1));

 for (VAR_7 = 0, VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  int VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  int VAR_12;

  if (VAR_4[VAR_5].type != VAR_0)
   continue;

  VAR_9 = VAR_4[VAR_5].short_name;
  VAR_10 = VAR_4[VAR_5].long_name;
  VAR_11 = VAR_4[VAR_5].value;

  if (!VAR_10)
   FUNC_1("An alias must have long option name");

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   const char *VAR_13 = VAR_3[VAR_12].long_name;

   if (!VAR_13 || FUNC_5(VAR_13, VAR_11))
    continue;

   if (VAR_3[VAR_12].type == VAR_0)
    FUNC_1("No please. Nested aliases are not supported.");







   FUNC_4(VAR_4 + VAR_5, VAR_3 + VAR_12, sizeof(*VAR_4));
   VAR_4[VAR_5].short_name = VAR_9;
   VAR_4[VAR_5].long_name = VAR_10;
   break;
  }

  if (VAR_12 == VAR_6)
   FUNC_1("could not find source option '%s' of alias '%s'",
       VAR_11, VAR_4[VAR_5].long_name);
  VAR_2->alias_groups[VAR_7 * 3 + 0] = VAR_4[VAR_5].long_name;
  VAR_2->alias_groups[VAR_7 * 3 + 1] = VAR_3[VAR_12].long_name;
  VAR_2->alias_groups[VAR_7 * 3 + 2] = ((void*)0);
  VAR_7++;
 }

 return VAR_4;
}
