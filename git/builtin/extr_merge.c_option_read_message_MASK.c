
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct parse_opt_ctx_t {char* opt; int argc; char** argv; scalar_t__ prefix; } ;
struct option {char const* long_name; struct strbuf* value; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (scalar_t__,char const*) ;
 int FUNC_6 (struct strbuf*,char) ;
 scalar_t__ FUNC_7 (struct strbuf*,char const*,int ) ;

__attribute__((used)) static enum parse_opt_result FUNC_8(struct parse_opt_ctx_t *VAR_1,
       const struct option *VAR_2,
       const char *VAR_3,
       int VAR_4)
{
 struct strbuf *VAR_5 = VAR_2->value;
 const char *VAR_6;

 FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_0("-F cannot be negated");

 if (VAR_1->opt) {
  VAR_6 = VAR_1->opt;
  VAR_1->opt = ((void*)0);
 } else if (VAR_1->argc > 1) {
  VAR_1->argc--;
  VAR_6 = *++VAR_1->argv;
 } else
  return FUNC_3(FUNC_2("option `%s' requires a value"), VAR_2->long_name);

 if (VAR_5->len)
  FUNC_6(VAR_5, '\n');
 if (VAR_1->prefix && !FUNC_4(VAR_6))
  VAR_6 = FUNC_5(VAR_1->prefix, VAR_6);
 if (FUNC_7(VAR_5, VAR_6, 0) < 0)
  return FUNC_3(FUNC_2("could not read file '%s'"), VAR_6);
 VAR_0 = 1;

 return 0;
}
