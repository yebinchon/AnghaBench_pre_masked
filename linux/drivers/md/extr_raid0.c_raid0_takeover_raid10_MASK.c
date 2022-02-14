
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void r0conf ;
struct mddev {int layout; int raid_disks; int degraded; int delta_disks; int recovery_cp; int chunk_sectors; int new_chunk_sectors; scalar_t__ new_layout; scalar_t__ new_level; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mddev*,void**) ;
 int FUNC_2 (struct mddev*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static void *FUNC_5(struct mddev *VAR_3)
{
 struct r0conf *VAR_4;







 if (VAR_3->layout != ((1 << 8) + 2)) {
  FUNC_4("md/raid0:%s:: Raid0 cannot takeover layout: 0x%x\n",
   FUNC_3(VAR_3),
   VAR_3->layout);
  return FUNC_0(-VAR_0);
 }
 if (VAR_3->raid_disks & 1) {
  FUNC_4("md/raid0:%s: Raid0 cannot takeover Raid10 with odd disk number.\n",
   FUNC_3(VAR_3));
  return FUNC_0(-VAR_0);
 }
 if (VAR_3->degraded != (VAR_3->raid_disks>>1)) {
  FUNC_4("md/raid0:%s: All mirrors must be already degraded!\n",
   FUNC_3(VAR_3));
  return FUNC_0(-VAR_0);
 }


 VAR_3->new_level = 0;
 VAR_3->new_layout = 0;
 VAR_3->new_chunk_sectors = VAR_3->chunk_sectors;
 VAR_3->delta_disks = - VAR_3->raid_disks / 2;
 VAR_3->raid_disks += VAR_3->delta_disks;
 VAR_3->degraded = 0;

 VAR_3->recovery_cp = VAR_1;
 FUNC_2(VAR_3, VAR_2);

 FUNC_1(VAR_3, &VAR_4);
 return VAR_4;
}
