
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; int mcmtr; int (* get_node_id ) (struct sbridge_pvt*) ;} ;
struct sbridge_pvt {int is_cur_addr_mirrored; int is_lockstep; int is_close_pg; TYPE_2__ info; int pci_ta; void* mirror_mode; int pci_ras; scalar_t__ is_chan_hash; int pci_ha; TYPE_1__* sbridge_dev; } ;
struct mem_ctl_info {struct sbridge_pvt* pvt_info; } ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_3__ {int source_id; int node_id; int mc; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct mem_ctl_info*,int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (struct sbridge_pvt*,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (struct sbridge_pvt*) ;

__attribute__((used)) static int FUNC_9(struct mem_ctl_info *VAR_14)
{
 struct sbridge_pvt *VAR_15 = VAR_14->pvt_info;
 u64 VAR_16[VAR_9];
 enum edac_type VAR_17;
 u32 VAR_18;

 VAR_15->sbridge_dev->node_id = VAR_15->info.get_node_id(VAR_15);
 FUNC_5(0, "mc#%d: Node ID: %d, source ID: %d\n",
   VAR_15->sbridge_dev->mc,
   VAR_15->sbridge_dev->node_id,
   VAR_15->sbridge_dev->source_id);




 if (VAR_15->info.type == VAR_8) {
  VAR_17 = VAR_2;
  VAR_15->mirror_mode = VAR_12;
  VAR_15->is_cur_addr_mirrored = 0;

  if (FUNC_6(VAR_15, VAR_16) != 0)
   return -1;
  if (FUNC_7(VAR_15->pci_ta, VAR_10, &VAR_15->info.mcmtr)) {
   FUNC_5(0, "Failed to read KNL_MCMTR register\n");
   return -VAR_4;
  }
 } else {
  if (VAR_15->info.type == VAR_6 || VAR_15->info.type == VAR_1) {
   if (FUNC_7(VAR_15->pci_ha, VAR_7, &VAR_18)) {
    FUNC_5(0, "Failed to read HASWELL_HASYSDEFEATURE2 register\n");
    return -VAR_4;
   }
   VAR_15->is_chan_hash = FUNC_0(VAR_18, 21, 21);
   if (FUNC_0(VAR_18, 28, 28)) {
    VAR_15->mirror_mode = VAR_0;
    FUNC_5(0, "Address range partial memory mirroring is enabled\n");
    goto next;
   }
  }
  if (FUNC_7(VAR_15->pci_ras, VAR_13, &VAR_18)) {
   FUNC_5(0, "Failed to read RASENABLES register\n");
   return -VAR_4;
  }
  if (FUNC_3(VAR_18)) {
   VAR_15->mirror_mode = VAR_5;
   FUNC_5(0, "Full memory mirroring is enabled\n");
  } else {
   VAR_15->mirror_mode = VAR_12;
   FUNC_5(0, "Memory mirroring is disabled\n");
  }

next:
  if (FUNC_7(VAR_15->pci_ta, VAR_11, &VAR_15->info.mcmtr)) {
   FUNC_5(0, "Failed to read MCMTR register\n");
   return -VAR_4;
  }
  if (FUNC_2(VAR_15->info.mcmtr)) {
   FUNC_5(0, "Lockstep is enabled\n");
   VAR_17 = VAR_3;
   VAR_15->is_lockstep = 1;
  } else {
   FUNC_5(0, "Lockstep is disabled\n");
   VAR_17 = VAR_2;
   VAR_15->is_lockstep = 0;
  }
  if (FUNC_1(VAR_15->info.mcmtr)) {
   FUNC_5(0, "address map is on closed page mode\n");
   VAR_15->is_close_pg = 1;
  } else {
   FUNC_5(0, "address map is on open page mode\n");
   VAR_15->is_close_pg = 0;
  }
 }

 return FUNC_4(VAR_14, VAR_16, VAR_17);
}
