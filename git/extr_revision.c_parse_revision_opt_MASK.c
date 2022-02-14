
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct parse_opt_ctx_t {int argc; int * argv; int out; int cpidx; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct rev_info*,int,int *,int *,int ,int *) ;
 int FUNC_2 (char const* const*,struct option const*) ;

void FUNC_3(struct rev_info *VAR_0, struct parse_opt_ctx_t *VAR_1,
   const struct option *VAR_2,
   const char * const VAR_3[])
{
 int VAR_4 = FUNC_1(VAR_0, VAR_1->argc, VAR_1->argv,
        &VAR_1->cpidx, VAR_1->out, ((void*)0));
 if (VAR_4 <= 0) {
  FUNC_0("unknown option `%s'", VAR_1->argv[0]);
  FUNC_2(VAR_3, VAR_2);
 }
 VAR_1->argv += VAR_4;
 VAR_1->argc -= VAR_4;
}
