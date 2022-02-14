
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
struct spglist {int dummy; } ;
struct md_page {int pv_list; int pv_gen; } ;
typedef TYPE_3__* pv_entry_t ;
typedef int pmap_t ;
struct TYPE_12__ {int pv_va; } ;
struct TYPE_10__ {int pv_list; int pv_gen; } ;
struct TYPE_11__ {int aflags; scalar_t__ valid; size_t ref_count; int phys_addr; TYPE_1__ md; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 scalar_t__ VAR_3 ;
 struct md_page* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,struct spglist*,int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_8(pmap_t VAR_5, vm_page_t VAR_6, pv_entry_t VAR_7,
    struct spglist *VAR_8, bool VAR_9)
{
 struct md_page *VAR_10;
 vm_page_t VAR_11, VAR_12;

 if (VAR_9) {
  FUNC_6(VAR_5, VAR_1);
  VAR_10 = FUNC_3(VAR_6->phys_addr);
  FUNC_2(&VAR_10->pv_list, VAR_7, VAR_4);
  VAR_10->pv_gen++;
  if (FUNC_1(&VAR_10->pv_list)) {
   for (VAR_12 = VAR_6; VAR_12 < &VAR_6[VAR_1]; VAR_12++)
    if (FUNC_1(&VAR_12->md.pv_list) &&
        (VAR_12->aflags & VAR_2) != 0)
     FUNC_7(VAR_12, VAR_2);
  }
  VAR_11 = FUNC_5(VAR_5, VAR_7->pv_va);
  if (VAR_11 != ((void*)0)) {
   FUNC_0(VAR_11->valid == VAR_3,
       ("pmap_remove_pages: pte page not promoted"));
   FUNC_6(VAR_5, 1);
   FUNC_0(VAR_11->ref_count == VAR_1,
       ("pmap_remove_pages: pte page ref count error"));
   VAR_11->ref_count = 0;
   FUNC_4(VAR_11, VAR_8, VAR_0);
  }
 } else {
  FUNC_6(VAR_5, 1);
  FUNC_2(&VAR_6->md.pv_list, VAR_7, VAR_4);
  VAR_6->md.pv_gen++;
  if (FUNC_1(&VAR_6->md.pv_list) &&
      (VAR_6->aflags & VAR_2) != 0) {
   VAR_10 = FUNC_3(VAR_6->phys_addr);
   if (FUNC_1(&VAR_10->pv_list))
    FUNC_7(VAR_6, VAR_2);
  }
 }
}
