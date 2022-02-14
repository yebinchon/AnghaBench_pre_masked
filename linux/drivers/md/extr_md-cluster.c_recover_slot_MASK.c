
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cluster_name; } ;
struct mddev {TYPE_1__ bitmap_info; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int slot_number; } ;
struct dlm_slot {scalar_t__ slot; int nodeid; } ;


 int FUNC_0 (struct mddev*,scalar_t__) ;
 int FUNC_1 (char*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct dlm_slot *VAR_1)
{
 struct mddev *VAR_2 = VAR_0;
 struct md_cluster_info *VAR_3 = VAR_2->cluster_info;

 FUNC_1("md-cluster: %s Node %d/%d down. My slot: %d. Initiating recovery.\n",
   VAR_2->bitmap_info.cluster_name,
   VAR_1->nodeid, VAR_1->slot,
   VAR_3->slot_number);


 FUNC_0(VAR_2, VAR_1->slot - 1);
}
