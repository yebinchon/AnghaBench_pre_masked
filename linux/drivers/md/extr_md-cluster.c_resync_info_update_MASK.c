
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resync_info {int hi; } ;
struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {TYPE_2__* bitmap_lockres; } ;
struct cluster_msg {void* high; void* low; int type; int member_0; } ;
typedef int sector_t ;
struct TYPE_4__ {int sb_lvbptr; } ;
struct TYPE_5__ {TYPE_1__ lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct resync_info*,int ,int) ;
 int FUNC_6 (struct md_cluster_info*,struct cluster_msg*,int) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_2, sector_t VAR_3, sector_t VAR_4)
{
 struct md_cluster_info *VAR_5 = VAR_2->cluster_info;
 struct resync_info VAR_6;
 struct cluster_msg VAR_7 = {0};


 if (VAR_4 == 0) {
  FUNC_5(&VAR_6, VAR_5->bitmap_lockres->lksb.sb_lvbptr, sizeof(struct resync_info));
  if (FUNC_4(VAR_6.hi) == 0)
   return 0;
 }

 FUNC_0(VAR_5->bitmap_lockres, VAR_3, VAR_4);

 FUNC_3(VAR_5->bitmap_lockres, VAR_0);
 VAR_7.type = FUNC_1(VAR_1);
 VAR_7.low = FUNC_2(VAR_3);
 VAR_7.high = FUNC_2(VAR_4);





 if (VAR_3 == 0 && VAR_4 == 0)
  return FUNC_6(VAR_5, &VAR_7, 1);
 else
  return FUNC_6(VAR_5, &VAR_7, 0);
}
