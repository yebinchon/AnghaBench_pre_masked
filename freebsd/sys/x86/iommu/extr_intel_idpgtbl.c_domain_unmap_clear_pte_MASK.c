
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int uintmax_t ;
struct sf_buf {int dummy; } ;
struct dmar_domain {int pgtbl_obj; int dmar; } ;
struct TYPE_7__ {int pte; } ;
typedef TYPE_2__ dmar_pte_t ;
typedef scalar_t__ dmar_gaddr_t ;
struct TYPE_6__ {scalar_t__ ref_count; scalar_t__ pindex; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sf_buf*) ;
 int FUNC_5 (struct dmar_domain*,scalar_t__,int,int) ;
 TYPE_1__* FUNC_6 (struct sf_buf*) ;

__attribute__((used)) static void
FUNC_7(struct dmar_domain *VAR_0, dmar_gaddr_t VAR_1, int VAR_2,
    int VAR_3, dmar_pte_t *VAR_4, struct sf_buf **VAR_5, bool VAR_6)
{
 vm_page_t VAR_7;

 FUNC_3(&VAR_4->pte);
 FUNC_1(VAR_0->dmar, VAR_4);
 VAR_7 = FUNC_6(*VAR_5);
 if (VAR_6) {
  FUNC_4(*VAR_5);
  *VAR_5 = ((void*)0);
 }
 VAR_7->ref_count--;
 if (VAR_7->ref_count != 0)
  return;
 FUNC_0(VAR_2 != 0,
     ("lost reference (lvl) on root pg domain %p base %jx lvl %d",
     VAR_0, (uintmax_t)VAR_1, VAR_2));
 FUNC_0(VAR_7->pindex != 0,
     ("lost reference (idx) on root pg domain %p base %jx lvl %d",
     VAR_0, (uintmax_t)VAR_1, VAR_2));
 FUNC_2(VAR_0->pgtbl_obj, VAR_7->pindex, VAR_3);
 FUNC_5(VAR_0, VAR_1, VAR_2 - 1, VAR_3);
}
