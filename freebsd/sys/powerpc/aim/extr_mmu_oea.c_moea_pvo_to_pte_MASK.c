
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int pte_hi; int pte_lo; } ;
struct TYPE_7__ {TYPE_2__ pte; } ;
struct pvo_entry {TYPE_3__ pvo_pte; int pvo_vaddr; TYPE_1__* pvo_pmap; } ;
struct pte {int pte_hi; int pte_lo; } ;
struct TYPE_8__ {struct pte* pt; } ;
struct TYPE_5__ {int pm_sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pvo_entry const*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (struct pvo_entry const*,int) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,struct pvo_entry const*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static struct pte *
FUNC_8(const struct pvo_entry *VAR_6, int VAR_7)
{
 struct pte *VAR_8;




 if (VAR_7 == -1) {
  int VAR_9;
  u_int VAR_10;

  VAR_10 = FUNC_7(VAR_6->pvo_pmap->pm_sr, VAR_6->pvo_vaddr);
  VAR_9 = FUNC_6(VAR_10, VAR_6->pvo_vaddr);
  VAR_7 = FUNC_1(VAR_6, VAR_9);
 }

 VAR_8 = &VAR_4[VAR_7 >> 3].pt[VAR_7 & 7];
 FUNC_3(&VAR_5);

 if ((VAR_6->pvo_pte.pte.pte_hi & VAR_3) && !FUNC_0(VAR_6)) {
  FUNC_5("moea_pvo_to_pte: pvo %p has valid pte in pvo but no "
      "valid pte index", VAR_6);
 }

 if ((VAR_6->pvo_pte.pte.pte_hi & VAR_3) == 0 && FUNC_0(VAR_6)) {
  FUNC_5("moea_pvo_to_pte: pvo %p has valid pte index in pvo "
      "pvo but no valid pte", VAR_6);
 }

 if ((VAR_8->pte_hi ^ (VAR_6->pvo_pte.pte.pte_hi & ~VAR_3)) == VAR_3) {
  if ((VAR_6->pvo_pte.pte.pte_hi & VAR_3) == 0) {
   FUNC_5("moea_pvo_to_pte: pvo %p has valid pte in "
       "moea_pteg_table %p but invalid in pvo", VAR_6, VAR_8);
  }

  if (((VAR_8->pte_lo ^ VAR_6->pvo_pte.pte.pte_lo) & ~(VAR_1|VAR_2))
      != 0) {
   FUNC_5("moea_pvo_to_pte: pvo %p pte does not match "
       "pte %p in moea_pteg_table", VAR_6, VAR_8);
  }

  FUNC_2(&VAR_5, VAR_0);
  return (VAR_8);
 }

 if (VAR_6->pvo_pte.pte.pte_hi & VAR_3) {
  FUNC_5("moea_pvo_to_pte: pvo %p has invalid pte %p in "
      "moea_pteg_table but valid in pvo: %8x, %8x", VAR_6, VAR_8, VAR_6->pvo_pte.pte.pte_hi, VAR_8->pte_hi);
 }

 FUNC_4(&VAR_5);
 return (((void*)0));
}
