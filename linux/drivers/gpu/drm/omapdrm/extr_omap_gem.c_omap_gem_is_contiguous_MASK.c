
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_gem_object {int flags; TYPE_1__* sgt; } ;
struct TYPE_2__ {int nents; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct omap_gem_object *VAR_2)
{
 if (VAR_2->flags & VAR_1)
  return 1;

 if ((VAR_2->flags & VAR_0) && VAR_2->sgt->nents == 1)
  return 1;

 return 0;
}
