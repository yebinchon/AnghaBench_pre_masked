
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_10__ {int pm_l1; } ;
struct TYPE_9__ {int pm_satp; int pm_root; int * pm_l1; int pm_active; int pm_stats; } ;
struct TYPE_8__ {int flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int) ;
 TYPE_5__* VAR_10 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 TYPE_1__* FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(pmap_t VAR_12)
{
 vm_paddr_t VAR_13;
 vm_page_t VAR_14;




 while ((VAR_14 = FUNC_9(((void*)0), 0xdeadbeef, VAR_5 |
     VAR_4 | VAR_6 | VAR_7)) == ((void*)0))
  FUNC_11(((void*)0));

 VAR_13 = FUNC_3(VAR_14);
 VAR_12->pm_l1 = (pd_entry_t *)FUNC_2(VAR_13);
 VAR_12->pm_satp = VAR_3 | (VAR_13 >> VAR_0);

 if ((VAR_14->flags & VAR_2) == 0)
  FUNC_8(VAR_12->pm_l1);

 FUNC_4(&VAR_12->pm_stats, sizeof(VAR_12->pm_stats));

 FUNC_0(&VAR_12->pm_active);


 FUNC_5(VAR_12->pm_l1, VAR_10->pm_l1, VAR_1);


 FUNC_6(&VAR_9);
 FUNC_1(&VAR_8, VAR_12, VAR_11);
 FUNC_7(&VAR_9);

 FUNC_10(&VAR_12->pm_root);

 return (1);
}
