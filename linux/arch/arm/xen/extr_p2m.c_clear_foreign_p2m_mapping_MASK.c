
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gnttab_unmap_grant_ref {int host_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

int FUNC_1(struct gnttab_unmap_grant_ref *VAR_2,
         struct gnttab_unmap_grant_ref *VAR_3,
         struct page **VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_0(VAR_2[VAR_6].host_addr >> VAR_1,
        VAR_0);
 }

 return 0;
}
