
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int dummy; } ;
struct page {int dummy; } ;
struct grant_page {scalar_t__ handle; struct page* page; int * persistent_gnt; } ;
struct gnttab_unmap_grant_ref {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gnttab_unmap_grant_ref*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct xen_blkif_ring*,int *) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static unsigned int FUNC_3(
 struct xen_blkif_ring *VAR_2,
 struct grant_page **VAR_3,
 unsigned int VAR_4,
 struct gnttab_unmap_grant_ref *VAR_5,
 struct page **VAR_6)
{
 unsigned int VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7]->persistent_gnt != ((void*)0)) {
   FUNC_1(VAR_2, VAR_3[VAR_7]->persistent_gnt);
   continue;
  }
  if (VAR_3[VAR_7]->handle == VAR_0)
   continue;
  VAR_6[VAR_8] = VAR_3[VAR_7]->page;
  FUNC_0(&VAR_5[VAR_8], FUNC_2(VAR_3[VAR_7]->page),
        VAR_1, VAR_3[VAR_7]->handle);
  VAR_3[VAR_7]->handle = VAR_0;
  VAR_8++;
 }

 return VAR_8;
}
