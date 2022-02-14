
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ item; scalar_t__ module; } ;
typedef TYPE_1__ GColors ;



__attribute__((used)) static int
FUNC_0 (void *VAR_0, void *VAR_1)
{
  GColors *VAR_2 = VAR_1;
  GColors *VAR_3 = VAR_0;

  if (VAR_3->item != VAR_2->item)
    return 0;
  if (VAR_3->module != VAR_2->module)
    return 0;
  return 1;
}
