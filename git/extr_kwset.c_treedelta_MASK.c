
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {size_t label; struct tree* rlink; struct tree* llink; } ;



__attribute__((used)) static void
FUNC_0 (register struct tree const *VAR_0,
    register unsigned int VAR_1,
    unsigned char VAR_2[])
{
  if (!VAR_0)
    return;
  FUNC_0(VAR_0->llink, VAR_1, VAR_2);
  FUNC_0(VAR_0->rlink, VAR_1, VAR_2);
  if (VAR_1 < VAR_2[VAR_0->label])
    VAR_2[VAR_0->label] = VAR_1;
}
