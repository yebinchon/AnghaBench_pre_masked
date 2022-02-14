
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_offset_t ;
struct tte {int dummy; } ;
typedef TYPE_3__* pmap_t ;
struct TYPE_9__ {int* pm_context; int pm_stats; struct tte* pm_tsb; int * pm_tsb_obj; int pm_active; } ;
struct TYPE_7__ {TYPE_3__* pmap; } ;
struct TYPE_8__ {TYPE_1__ md; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__**,int) ;
 int * FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ,int,TYPE_2__**,int) ;

int
FUNC_8(pmap_t VAR_8)
{
 vm_page_t VAR_9[VAR_3];
 int VAR_10;




 if (VAR_8->pm_tsb == ((void*)0)) {
  VAR_8->pm_tsb = (struct tte *)FUNC_4(VAR_2);
  if (VAR_8->pm_tsb == ((void*)0))
   return (0);
  }




 if (VAR_8->pm_tsb_obj == ((void*)0))
  VAR_8->pm_tsb_obj = FUNC_6(VAR_1, VAR_3);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_8->pm_context[VAR_10] = -1;
 FUNC_0(&VAR_8->pm_active);

 FUNC_1(VAR_8->pm_tsb_obj);
 (void)FUNC_7(VAR_8->pm_tsb_obj, 0, VAR_5 |
     VAR_4 | VAR_6 | VAR_7, VAR_9, VAR_3);
 FUNC_2(VAR_8->pm_tsb_obj);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_9[VAR_10]->md.pmap = VAR_8;
 FUNC_5((vm_offset_t)VAR_8->pm_tsb, VAR_9, VAR_3);

 FUNC_3(&VAR_8->pm_stats, sizeof(VAR_8->pm_stats));
 return (1);
}
