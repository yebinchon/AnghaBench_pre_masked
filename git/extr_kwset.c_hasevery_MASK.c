
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ label; struct tree* rlink; struct tree* llink; } ;



__attribute__((used)) static int
FUNC_0 (register struct tree const *VAR_0, register struct tree const *VAR_1)
{
  if (!VAR_1)
    return 1;
  if (!FUNC_0(VAR_0, VAR_1->llink))
    return 0;
  if (!FUNC_0(VAR_0, VAR_1->rlink))
    return 0;
  while (VAR_0 && VAR_1->label != VAR_0->label)
    if (VAR_1->label < VAR_0->label)
      VAR_0 = VAR_0->llink;
    else
      VAR_0 = VAR_0->rlink;
  return !!VAR_0;
}
