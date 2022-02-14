
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_opt_ctx_t {int flags; int total; size_t argc; int cpidx; int ** out; int argv; } ;


 int FUNC_0 (int **,int ,size_t) ;
 int VAR_0 ;

int FUNC_1(struct parse_opt_ctx_t *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1->total - VAR_1->argc;

 FUNC_0(VAR_1->out + VAR_1->cpidx, VAR_1->argv, VAR_1->argc);
 VAR_1->out[VAR_1->cpidx + VAR_1->argc] = ((void*)0);
 return VAR_1->cpidx + VAR_1->argc;
}
