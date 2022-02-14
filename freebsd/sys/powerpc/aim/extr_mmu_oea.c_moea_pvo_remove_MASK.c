
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int mdpg_pvoh; } ;
struct vm_page {TYPE_4__ md; } ;
struct TYPE_10__ {int pte_lo; } ;
struct TYPE_8__ {TYPE_5__ pte; } ;
struct pvo_entry {int pvo_vaddr; TYPE_3__ pvo_pte; TYPE_2__* pvo_pmap; } ;
struct pte {int dummy; } ;
struct TYPE_6__ {int wired_count; int resident_count; } ;
struct TYPE_7__ {int pmap_pvo; TYPE_1__ pm_stats; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct pvo_entry*,int ) ;
 int VAR_0 ;
 struct vm_page* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct pvo_entry*) ;
 int VAR_6 ;
 int FUNC_4 (int ,int *,struct pvo_entry*) ;
 int FUNC_5 (struct vm_page*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct pte*,TYPE_5__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 struct pte* FUNC_7 (struct pvo_entry*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ,struct pvo_entry*) ;
 int FUNC_10 (struct vm_page*,int ) ;

__attribute__((used)) static void
FUNC_11(struct pvo_entry *VAR_16, int VAR_17)
{
 struct pte *VAR_18;





 VAR_18 = FUNC_7(VAR_16, VAR_17);
 if (VAR_18 != ((void*)0)) {
  FUNC_6(VAR_18, &VAR_16->pvo_pte.pte, VAR_16->pvo_vaddr);
  FUNC_8(&VAR_11);
  FUNC_3(VAR_16);
 } else {
  VAR_8--;
 }




 VAR_16->pvo_pmap->pm_stats.resident_count--;
 if (VAR_16->pvo_vaddr & VAR_6)
  VAR_16->pvo_pmap->pm_stats.wired_count--;




 FUNC_1(VAR_16, VAR_15);
 FUNC_4(VAR_14, &VAR_16->pvo_pmap->pmap_pvo, VAR_16);





 if ((VAR_16->pvo_vaddr & VAR_5) == VAR_5) {
  struct vm_page *VAR_19;

  VAR_19 = FUNC_2(VAR_16->pvo_pte.pte.pte_lo & VAR_3);
  if (VAR_19 != ((void*)0)) {
   FUNC_5(VAR_19, VAR_16->pvo_pte.pte.pte_lo &
       (VAR_2 | VAR_1));
   if (FUNC_0(&VAR_19->md.mdpg_pvoh))
    FUNC_10(VAR_19, VAR_0);
  }
 }





 FUNC_1(VAR_16, VAR_13);
 if (!(VAR_16->pvo_vaddr & VAR_4))
  FUNC_9(VAR_16->pvo_vaddr & VAR_5 ? VAR_7 :
      VAR_12, VAR_16);
 VAR_9--;
 VAR_10++;
}
