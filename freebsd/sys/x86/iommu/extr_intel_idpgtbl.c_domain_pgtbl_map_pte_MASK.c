
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
struct sf_buf {int dummy; } ;
struct dmar_domain {int dmar; int pgtbl_obj; } ;
struct TYPE_10__ {int pte; } ;
typedef TYPE_2__ dmar_pte_t ;
typedef int dmar_gaddr_t ;
struct TYPE_11__ {int ref_count; } ;
struct TYPE_9__ {scalar_t__ pindex; int ref_count; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ,scalar_t__,int,struct sf_buf**) ;
 TYPE_1__* FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct sf_buf*) ;
 scalar_t__ FUNC_9 (struct dmar_domain*,int ,int) ;
 int FUNC_10 (struct dmar_domain*,int ,int) ;
 scalar_t__ FUNC_11 (struct sf_buf*) ;
 TYPE_3__* FUNC_12 (struct sf_buf*) ;

__attribute__((used)) static dmar_pte_t *
FUNC_13(struct dmar_domain *VAR_4, dmar_gaddr_t VAR_5, int VAR_6,
    int VAR_7, vm_pindex_t *VAR_8, struct sf_buf **VAR_9)
{
 vm_page_t VAR_10;
 struct sf_buf *VAR_11;
 dmar_pte_t *VAR_12, *VAR_13;
 vm_pindex_t VAR_14, VAR_15;

 FUNC_0(VAR_4);
 FUNC_1((VAR_7 & VAR_0) != 0, ("lost PGF_OBJL"));

 VAR_14 = FUNC_9(VAR_4, VAR_5, VAR_6);
 if (*VAR_9 != ((void*)0) && VAR_14 == *VAR_8) {
  VAR_12 = (dmar_pte_t *)FUNC_11(*VAR_9);
 } else {
  if (*VAR_9 != ((void*)0))
   FUNC_8(*VAR_9);
  *VAR_8 = VAR_14;
retry:
  VAR_12 = FUNC_4(VAR_4->pgtbl_obj, VAR_14, VAR_7, VAR_9);
  if (VAR_12 == ((void*)0)) {
   FUNC_1(VAR_6 > 0,
       ("lost root page table page %p", VAR_4));





   VAR_10 = FUNC_5(VAR_4->pgtbl_obj, VAR_14, VAR_7 |
       VAR_1);
   if (VAR_10 == ((void*)0))
    return (((void*)0));
   VAR_10->ref_count++;

   VAR_11 = ((void*)0);
   VAR_13 = FUNC_13(VAR_4, VAR_5, VAR_6 - 1,
       VAR_7, &VAR_15, &VAR_11);
   if (VAR_13 == ((void*)0)) {
    FUNC_1(VAR_10->pindex != 0,
        ("loosing root page %p", VAR_4));
    VAR_10->ref_count--;
    FUNC_6(VAR_4->pgtbl_obj, VAR_10->pindex,
        VAR_7);
    return (((void*)0));
   }
   FUNC_7(&VAR_13->pte, VAR_2 | VAR_3 |
       FUNC_2(VAR_10));
   FUNC_3(VAR_4->dmar, VAR_13);
   FUNC_12(VAR_11)->ref_count += 1;
   VAR_10->ref_count--;
   FUNC_8(VAR_11);

   goto retry;
  }
 }
 VAR_12 += FUNC_10(VAR_4, VAR_5, VAR_6);
 return (VAR_12);
}
