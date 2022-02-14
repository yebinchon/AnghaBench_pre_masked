
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_blkif_ring {int dummy; } ;
struct page {int dummy; } ;
struct grant_page {int dummy; } ;
struct gnttab_unmap_grant_ref {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gnttab_unmap_grant_ref*,int *,struct page**,unsigned int) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (struct xen_blkif_ring*,struct page**,unsigned int) ;
 unsigned int FUNC_4 (struct xen_blkif_ring*,struct grant_page**,unsigned int,struct gnttab_unmap_grant_ref*,struct page**) ;

__attribute__((used)) static void FUNC_5(struct xen_blkif_ring *VAR_1,
                            struct grant_page *VAR_2[],
                            int VAR_3)
{
 struct gnttab_unmap_grant_ref VAR_4[VAR_0];
 struct page *VAR_5[VAR_0];
 unsigned int VAR_6 = 0;
 int VAR_7;

 while (VAR_3) {
  unsigned int VAR_8 = FUNC_2(VAR_3, VAR_0);

  VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_8,
         VAR_4, VAR_5);
  if (VAR_6) {
   VAR_7 = FUNC_1(VAR_4, ((void*)0), VAR_5, VAR_6);
   FUNC_0(VAR_7);
   FUNC_3(VAR_1, VAR_5, VAR_6);
  }
  VAR_2 += VAR_8;
  VAR_3 -= VAR_8;
 }
}
