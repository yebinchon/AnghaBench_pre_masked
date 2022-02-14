
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_offset_t ;
typedef int uint8_t ;
typedef scalar_t__ pte_t ;
typedef TYPE_4__* pmap_t ;
typedef int mmu_t ;
struct TYPE_14__ {int resident_count; int wired_count; } ;
struct TYPE_16__ {TYPE_2__ pm_stats; scalar_t__** pm_pdir; } ;
struct TYPE_13__ {int pv_tracked; int pv_list; } ;
struct TYPE_15__ {TYPE_1__ md; } ;


 int FUNC_0 (scalar_t__*,char*) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__*) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (int *) ;
 TYPE_4__* VAR_2 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,TYPE_4__*,unsigned int) ;
 int FUNC_14 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_3 ;
 int FUNC_18 (TYPE_3__*,int ) ;
 int FUNC_19 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_20(mmu_t VAR_4, pmap_t VAR_5, vm_offset_t VAR_6, uint8_t VAR_7)
{
 unsigned int VAR_8 = FUNC_1(VAR_6);
 unsigned int VAR_9 = FUNC_3(VAR_6);
 vm_page_t VAR_10;
 pte_t *VAR_11;
 pte_t *VAR_12;





 VAR_11 = VAR_5->pm_pdir[VAR_8];
 FUNC_0(VAR_11, ("pte_remove: null ptbl"));

 VAR_12 = &VAR_11[VAR_9];

 if (VAR_12 == ((void*)0) || !FUNC_7(VAR_12))
  return (0);

 if (FUNC_8(VAR_12))
  VAR_5->pm_stats.wired_count--;


 VAR_10 = FUNC_2(FUNC_9(VAR_12));


 if (FUNC_4(VAR_12)) {

  if (FUNC_5(VAR_12))
   FUNC_19(VAR_10);

  if (FUNC_6(VAR_12))
   FUNC_18(VAR_10, VAR_0);

  FUNC_14(VAR_5, VAR_6, VAR_10);
 } else if (VAR_5 == VAR_2 && VAR_10 && VAR_10->md.pv_tracked) {





  FUNC_14(VAR_5, VAR_6, VAR_10);
  if (FUNC_10(&VAR_10->md.pv_list))
   VAR_10->md.pv_tracked = 0;
 }

 FUNC_11(&VAR_3);
 FUNC_16();

 FUNC_15(VAR_6);
 *VAR_12 = 0;

 FUNC_17();
 FUNC_12(&VAR_3);

 VAR_5->pm_stats.resident_count--;

 if (VAR_7 & VAR_1) {

  return (FUNC_13(VAR_4, VAR_5, VAR_8));
 }


 return (0);
}
