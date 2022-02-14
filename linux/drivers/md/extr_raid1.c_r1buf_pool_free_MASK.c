
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resync_pages {int dummy; } ;
struct r1bio {int * bios; } ;
struct pool_info {int raid_disks; } ;


 int FUNC_0 (int ) ;
 struct resync_pages* FUNC_1 (int ) ;
 int FUNC_2 (struct resync_pages*) ;
 int FUNC_3 (struct r1bio*,void*) ;
 int FUNC_4 (struct resync_pages*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, void *VAR_1)
{
 struct pool_info *VAR_2 = VAR_1;
 int VAR_3;
 struct r1bio *VAR_4 = VAR_0;
 struct resync_pages *VAR_5 = ((void*)0);

 for (VAR_3 = VAR_2->raid_disks; VAR_3--; ) {
  VAR_5 = FUNC_1(VAR_4->bios[VAR_3]);
  FUNC_4(VAR_5);
  FUNC_0(VAR_4->bios[VAR_3]);
 }


 FUNC_2(VAR_5);

 FUNC_3(VAR_4, VAR_1);
}
