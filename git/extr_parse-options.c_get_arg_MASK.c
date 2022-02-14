
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char* opt; int argc; char** argv; } ;
struct option {int flags; scalar_t__ defval; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct option const*,int) ;

__attribute__((used)) static enum parse_opt_result FUNC_3(struct parse_opt_ctx_t *VAR_1,
         const struct option *VAR_2,
         int VAR_3, const char **VAR_4)
{
 if (VAR_1->opt) {
  *VAR_4 = VAR_1->opt;
  VAR_1->opt = ((void*)0);
 } else if (VAR_1->argc == 1 && (VAR_2->flags & VAR_0)) {
  *VAR_4 = (const char *)VAR_2->defval;
 } else if (VAR_1->argc > 1) {
  VAR_1->argc--;
  *VAR_4 = *++VAR_1->argv;
 } else
  return FUNC_1(FUNC_0("%s requires a value"), FUNC_2(VAR_2, VAR_3));
 return 0;
}
