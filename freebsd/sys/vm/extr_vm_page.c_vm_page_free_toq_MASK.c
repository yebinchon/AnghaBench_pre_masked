
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int * uma_zone_t ;
struct vm_domain {TYPE_1__* vmd_pgcache; } ;
struct TYPE_9__ {size_t pool; int flags; } ;
struct TYPE_8__ {int * zone; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (struct vm_domain*) ;
 int FUNC_2 (struct vm_domain*) ;
 int FUNC_3 (struct vm_domain*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 struct vm_domain* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;

void
FUNC_7(vm_page_t VAR_1)
{
 struct vm_domain *VAR_2;
 uma_zone_t VAR_3;

 if (!FUNC_4(VAR_1))
  return;

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = VAR_2->vmd_pgcache[VAR_1->pool].zone;
 if ((VAR_1->flags & VAR_0) != 0 && VAR_3 != ((void*)0)) {
  FUNC_0(VAR_3, VAR_1);
  return;
 }
 FUNC_1(VAR_2);
 FUNC_6(VAR_1, 0);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2, 1);
}
