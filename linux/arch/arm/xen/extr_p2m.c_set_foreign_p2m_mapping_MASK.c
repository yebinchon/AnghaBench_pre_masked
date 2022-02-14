
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gnttab_map_grant_ref {int host_addr; int dev_bus_addr; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

int FUNC_1(struct gnttab_map_grant_ref *VAR_1,
       struct gnttab_map_grant_ref *VAR_2,
       struct page **VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_1[VAR_5].status)
   continue;
  FUNC_0(VAR_1[VAR_5].host_addr >> VAR_0,
        VAR_1[VAR_5].dev_bus_addr >> VAR_0);
 }

 return 0;
}
