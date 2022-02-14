
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp_superblock_1 {char* device_uuid; } ;
struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_rdev {int desc_nr; int sb_page; } ;
struct md_cluster_info {int wait; int state; TYPE_1__* no_new_dev_lockres; } ;
struct cluster_msg {void* raid_slot; int uuid; void* type; } ;
typedef int cmsg ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct md_cluster_info*,struct cluster_msg*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct md_cluster_info*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct cluster_msg*,int ,int) ;
 struct mdp_superblock_1* FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct md_cluster_info*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 struct md_cluster_info *VAR_9 = VAR_7->cluster_info;
 struct cluster_msg VAR_10;
 int VAR_11 = 0;
 struct mdp_superblock_1 *VAR_12 = FUNC_6(VAR_8->sb_page);
 char *VAR_13 = VAR_12->device_uuid;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.type = FUNC_1(VAR_6);
 FUNC_4(VAR_10.uuid, VAR_13, 16);
 VAR_10.raid_slot = FUNC_1(VAR_8->desc_nr);
 FUNC_3(VAR_9, 1);
 VAR_11 = FUNC_0(VAR_9, &VAR_10);
 if (VAR_11) {
  FUNC_8(VAR_9);
  return VAR_11;
 }
 VAR_9->no_new_dev_lockres->flags |= VAR_0;
 VAR_11 = FUNC_2(VAR_9->no_new_dev_lockres, VAR_2);
 VAR_9->no_new_dev_lockres->flags &= ~VAR_0;

 if (VAR_11 == -VAR_3)
  VAR_11 = -VAR_4;
 if (VAR_11)
  FUNC_8(VAR_9);
 else {
  FUNC_2(VAR_9->no_new_dev_lockres, VAR_1);
  FUNC_7(VAR_5, &VAR_9->state);
  FUNC_9(&VAR_9->wait);
 }
 return VAR_11;
}
