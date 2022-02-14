
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {scalar_t__ argc; scalar_t__ argn; scalar_t__ prompt; int cx; int argv; int bundle; } ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_2)
{
  if (VAR_2->argc > VAR_2->argn)
    FUNC_0(VAR_2->bundle, VAR_1, VAR_2->argc, VAR_2->argn, VAR_2->argv,
             VAR_2->prompt, VAR_2->cx);
  else if (VAR_2->prompt)
    FUNC_2(VAR_2->prompt, "Use `set ?' to get a list or `set ? <var>' for"
           " syntax help.\n");
  else
    FUNC_1(VAR_0, "set command must have arguments\n");

  return 0;
}
