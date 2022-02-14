
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int argc; } ;
struct option {int* value; int long_name; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static enum parse_opt_result FUNC_3(
 struct parse_opt_ctx_t *VAR_0, const struct option *VAR_1,
 const char *VAR_2, int VAR_3)
{
 int *VAR_4 = VAR_1->value;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 if (VAR_0->argc != 1)
  return FUNC_2("option '%s' must be the last argument", VAR_1->long_name);
 *VAR_4 = 1;
 return 0;
}
