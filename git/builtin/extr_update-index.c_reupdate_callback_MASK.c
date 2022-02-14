
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_opt_ctx_t {int argc; int argv; } ;
struct option {int* value; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;
struct TYPE_2__ {char* prefix; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int ,char const*) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static enum parse_opt_result FUNC_4(
 struct parse_opt_ctx_t *VAR_2, const struct option *VAR_3,
 const char *VAR_4, int VAR_5)
{
 int *VAR_6 = VAR_3->value;
 const char *VAR_7 = VAR_1->prefix;

 FUNC_1(VAR_5);
 FUNC_0(VAR_4);


 FUNC_3();
 *VAR_6 = FUNC_2(VAR_2->argc, VAR_2->argv, VAR_7);
 if (*VAR_6)
  VAR_0 = 0;

 VAR_2->argv += VAR_2->argc - 1;
 VAR_2->argc = 1;
 return 0;
}
