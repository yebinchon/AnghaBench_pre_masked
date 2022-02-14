
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int argc; } ;
struct option {int* value; int long_name; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static enum parse_opt_result FUNC_4(
 struct parse_opt_ctx_t *VAR_3, const struct option *VAR_4,
 const char *VAR_5, int VAR_6)
{
 int *VAR_7 = VAR_4->value;

 FUNC_1(VAR_6);
 FUNC_0(VAR_5);

 if (VAR_3->argc != 1)
  return FUNC_2("option '%s' must be the last argument", VAR_4->long_name);
 VAR_0 = VAR_2 = VAR_1 = 1;
 FUNC_3(*VAR_7);
 return 0;
}
