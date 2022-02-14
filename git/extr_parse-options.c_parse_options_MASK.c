
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char** argv; char** opt; struct option* alias_groups; } ;
struct option {int dummy; } ;
typedef int ctx ;







 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct option*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct parse_opt_ctx_t*,int ,int) ;
 int FUNC_7 (struct parse_opt_ctx_t*) ;
 int FUNC_8 (struct parse_opt_ctx_t*,int,char const**,char const*,struct option const*,int) ;
 int FUNC_9 (struct parse_opt_ctx_t*,struct option const*,char const* const*) ;
 int FUNC_10 (int,char const**) ;
 struct option* FUNC_11 (struct parse_opt_ctx_t*,struct option const*) ;
 int FUNC_12 (char const* const*,struct option const*) ;

int FUNC_13(int VAR_1, const char **VAR_2, const char *VAR_3,
    const struct option *VAR_4, const char * const VAR_5[],
    int VAR_6)
{
 struct parse_opt_ctx_t VAR_7;
 struct option *VAR_8;

 VAR_0 =
  FUNC_4("GIT_TEST_DISALLOW_ABBREVIATED_OPTIONS", 0);

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_8 = FUNC_11(&VAR_7, VAR_4);
 if (VAR_8)
  VAR_4 = VAR_8;
 FUNC_8(&VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
 switch (FUNC_9(&VAR_7, VAR_4, VAR_5)) {
 case 129:
 case 130:
  FUNC_2(129);
 case 132:
  FUNC_2(0);
 case 128:
 case 131:
  break;
 default:
  if (VAR_7.argv[0][1] == '-') {
   FUNC_1(FUNC_0("unknown option `%s'"), VAR_7.argv[0] + 2);
  } else if (FUNC_5(*VAR_7.opt)) {
   FUNC_1(FUNC_0("unknown switch `%c'"), *VAR_7.opt);
  } else {
   FUNC_1(FUNC_0("unknown non-ascii option in string: `%s'"),
         VAR_7.argv[0]);
  }
  FUNC_12(VAR_5, VAR_4);
 }

 FUNC_10(VAR_1, VAR_2);
 FUNC_3(VAR_8);
 FUNC_3(VAR_7.alias_groups);
 return FUNC_7(&VAR_7);
}
