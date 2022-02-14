
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct md_cluster_info* cluster_info; } ;
struct md_rdev {int desc_nr; } ;
struct md_cluster_info {int dummy; } ;
struct cluster_msg {void* raid_slot; void* type; int member_0; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct md_cluster_info*,struct cluster_msg*,int) ;

__attribute__((used)) static int FUNC_2(struct mddev *VAR_1, struct md_rdev *VAR_2)
{
 struct cluster_msg VAR_3 = {0};
 struct md_cluster_info *VAR_4 = VAR_1->cluster_info;
 VAR_3.type = FUNC_0(VAR_0);
 VAR_3.raid_slot = FUNC_0(VAR_2->desc_nr);
 return FUNC_1(VAR_4, &VAR_3, 1);
}
