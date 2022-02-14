
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mdpg_attrs; } ;
struct vm_page {TYPE_3__ md; } ;
struct TYPE_6__ {int prot; int pa; } ;
struct pvo_entry {int pvo_vaddr; TYPE_2__ pvo_pte; TYPE_4__* pvo_pmap; } ;
typedef int mmu_t ;
typedef int int32_t ;
struct TYPE_5__ {int wired_count; int resident_count; } ;
struct TYPE_8__ {int pmap_pvo; TYPE_1__ pm_stats; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct pvo_entry*) ;
 int VAR_4 ;
 struct vm_page* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,struct pvo_entry*) ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (struct vm_page*,int ) ;
 int FUNC_7 (struct vm_page*) ;

__attribute__((used)) static void
FUNC_8(mmu_t VAR_10, struct pvo_entry *VAR_11)
{
 struct vm_page *VAR_12;
 int32_t VAR_13;

 FUNC_0(VAR_11->pvo_pmap != ((void*)0), ("Trying to remove PVO with no pmap"));
 FUNC_3(VAR_11->pvo_pmap, VAR_3);
 FUNC_0(!(VAR_11->pvo_vaddr & VAR_5), ("Trying to remove dead PVO"));




 VAR_13 = FUNC_1(VAR_10, VAR_11);
 if (VAR_13 < 0) {




  if (VAR_11->pvo_pte.prot & VAR_8)
   VAR_13 = VAR_0;
  else
   VAR_13 = 0;
 }




 VAR_11->pvo_pmap->pm_stats.resident_count--;
 if (VAR_11->pvo_vaddr & VAR_7)
  VAR_11->pvo_pmap->pm_stats.wired_count--;




 FUNC_4(VAR_9, &VAR_11->pvo_pmap->pmap_pvo, VAR_11);




 VAR_11->pvo_vaddr |= VAR_5;


 if ((VAR_11->pvo_vaddr & VAR_6) &&
     (VAR_11->pvo_pte.prot & VAR_8)) {
  VAR_12 = FUNC_2(VAR_11->pvo_pte.pa & VAR_2);
  if (VAR_12 != ((void*)0)) {
   VAR_13 |= FUNC_5(&VAR_12->md.mdpg_attrs);
   if (VAR_13 & VAR_0)
    FUNC_7(VAR_12);
   if (VAR_13 & VAR_1)
    FUNC_6(VAR_12, VAR_4);
  }
 }
}
