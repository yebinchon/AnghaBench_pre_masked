
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fg; scalar_t__ bg; } ;
typedef TYPE_1__ GColorPair ;



__attribute__((used)) static int
FUNC_0 (void *VAR_0, void *VAR_1)
{
  GColorPair *VAR_2 = VAR_1;
  GColorPair *VAR_3 = VAR_0;

  if (VAR_3->fg != VAR_2->fg)
    return 0;
  if (VAR_3->bg != VAR_2->bg)
    return 0;
  return 1;
}
