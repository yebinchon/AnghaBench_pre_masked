
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {char const** argv; int argc; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int,struct object_id*,char const*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct object_id*) ;
 int FUNC_6 (char const*,unsigned int*,struct object_id*,char const**) ;
 scalar_t__ FUNC_7 (char const*,int,unsigned int*) ;

__attribute__((used)) static enum parse_opt_result FUNC_8(
 struct parse_opt_ctx_t *VAR_0, const struct option *VAR_1,
 const char *VAR_2, int VAR_3)
{
 struct object_id VAR_4;
 unsigned int VAR_5;
 const char *VAR_6;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 if (!FUNC_6(VAR_0->argv[1], &VAR_5, &VAR_4, &VAR_6)) {
  if (FUNC_2(VAR_5, &VAR_4, VAR_6, 0))
   FUNC_3("git update-index: --cacheinfo cannot add %s", VAR_6);
  VAR_0->argv++;
  VAR_0->argc--;
  return 0;
 }
 if (VAR_0->argc <= 3)
  return FUNC_4("option 'cacheinfo' expects <mode>,<sha1>,<path>");
 if (FUNC_7(*++VAR_0->argv, 8, &VAR_5) ||
     FUNC_5(*++VAR_0->argv, &VAR_4) ||
     FUNC_2(VAR_5, &VAR_4, *++VAR_0->argv, 0))
  FUNC_3("git update-index: --cacheinfo cannot add %s", *VAR_0->argv);
 VAR_0->argc -= 3;
 return 0;
}
