
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int argc; char const** argv; int total; char const** out; char const* prefix; int cpidx; int flags; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct option const*) ;

__attribute__((used)) static void FUNC_2(struct parse_opt_ctx_t *VAR_4,
      int VAR_5, const char **VAR_6, const char *VAR_7,
      const struct option *VAR_8, int VAR_9)
{
 VAR_4->argc = VAR_5;
 VAR_4->argv = VAR_6;
 if (!(VAR_9 & VAR_2)) {
  VAR_4->argc--;
  VAR_4->argv++;
 }
 VAR_4->total = VAR_4->argc;
 VAR_4->out = VAR_6;
 VAR_4->prefix = VAR_7;
 VAR_4->cpidx = ((VAR_9 & VAR_0) != 0);
 VAR_4->flags = VAR_9;
 if ((VAR_9 & VAR_1) &&
     (VAR_9 & VAR_3) &&
     !(VAR_9 & VAR_2))
  FUNC_0("STOP_AT_NON_OPTION and KEEP_UNKNOWN don't go together");
 if ((VAR_9 & VAR_2) &&
     (VAR_9 & VAR_0))
  FUNC_0("Can't keep argv0 if you don't have it");
 FUNC_1(VAR_8);
}
