
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvo_head {int dummy; } ;
struct pvo_entry {int pvo_vaddr; TYPE_2__* pvo_pmap; } ;
typedef int mmu_t ;
struct TYPE_4__ {int resident_count; int wired_count; } ;
struct TYPE_5__ {TYPE_1__ pm_stats; int pmap_pvo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct pvo_head*) ;
 int FUNC_1 (struct pvo_head*,struct pvo_entry*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct pvo_entry*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct pvo_entry*) ;
 int VAR_4 ;
 struct pvo_entry* FUNC_5 (int ,int *,struct pvo_entry*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_8 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_10(mmu_t VAR_11, struct pvo_entry *VAR_12, struct pvo_head *VAR_13,
    struct pvo_entry **VAR_14)
{
 int VAR_15, VAR_16;
 struct pvo_entry *VAR_17;

 FUNC_3(VAR_12->pvo_pmap, VAR_2);

 FUNC_6(VAR_6++);




 VAR_17 = FUNC_5(VAR_9, &VAR_12->pvo_pmap->pmap_pvo, VAR_12);

 if (VAR_17 != ((void*)0)) {
  if (VAR_14 != ((void*)0))
   *VAR_14 = VAR_17;
  return (VAR_0);
 }





 if (VAR_13 != ((void*)0)) {
  if (FUNC_0(VAR_13) == ((void*)0))
   VAR_15 = 1;
  FUNC_1(VAR_13, VAR_12, VAR_10);
 }

 if (VAR_12->pvo_vaddr & VAR_4)
  VAR_12->pvo_pmap->pm_stats.wired_count++;
 VAR_12->pvo_pmap->pm_stats.resident_count++;




 VAR_16 = FUNC_2(VAR_11, VAR_12);
 if (VAR_16 != 0) {
  FUNC_9("moea64_pvo_enter: overflow");
 }

 FUNC_6(VAR_7++);

 if (VAR_12->pvo_pmap == VAR_5)
  FUNC_7();
 return (VAR_15 ? VAR_1 : 0);
}
