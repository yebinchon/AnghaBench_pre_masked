
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mddev {scalar_t__ recovery_cp; TYPE_1__ bitmap_info; struct md_cluster_info* cluster_info; } ;
struct md_rdev {int desc_nr; struct mddev* mddev; } ;
struct md_cluster_info {int slot_number; } ;
struct cluster_msg {void* raid_slot; void* type; int member_0; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mddev*,int,scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct md_cluster_info*,struct cluster_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct md_rdev *VAR_1)
{
 int VAR_2, VAR_3;
 sector_t VAR_4, VAR_5;
 struct cluster_msg VAR_6 = {0};
 struct mddev *VAR_7 = VAR_1->mddev;
 struct md_cluster_info *VAR_8 = VAR_7->cluster_info;

 VAR_6.type = FUNC_0(VAR_0);
 VAR_6.raid_slot = FUNC_0(VAR_1->desc_nr);
 VAR_3 = FUNC_3(VAR_8, &VAR_6, 1);
 if (VAR_3)
  goto out;

 for (VAR_2 = 0; VAR_2 < VAR_7->bitmap_info.nodes; VAR_2++) {
  if (VAR_2 == (VAR_8->slot_number - 1))
   continue;
  VAR_3 = FUNC_1(VAR_7, VAR_2, &VAR_4, &VAR_5, 0);
  if (VAR_3) {
   FUNC_2("md-cluster: Could not gather bitmaps from slot %d", VAR_2);
   goto out;
  }
  if ((VAR_5 > 0) && (VAR_4 < VAR_7->recovery_cp))
   VAR_7->recovery_cp = VAR_4;
 }
out:
 return VAR_3;
}
