
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; void* get_width; void* interleave_pkg; void* interleave_list; void* max_sad; void* dram_attr; void* interleave_mode; void* sad_limit; int * rir_limit; void* get_ha; void* get_node_id; void* get_memory_type; struct edac_mc_layer* dram_rule; void* get_tohm; void* get_tolm; int rankcfgr; } ;
struct sbridge_pvt {struct sbridge_dev* sbridge_dev; TYPE_1__ info; } ;
struct sbridge_dev {struct mem_ctl_info* mci; int dom; int source_id; int mc; struct pci_dev** pdev; } ;
struct pci_dev {int dev; } ;
struct mem_ctl_info {void* ctl_name; int * pdev; int * ctl_page_to_phys; int dev_name; int mod_name; void* edac_cap; void* edac_ctl_cap; int mtype_cap; struct sbridge_pvt* pvt_info; } ;
struct edac_mc_layer {int size; int is_virt_csrow; int type; } ;
typedef enum type { ____Placeholder_type } type ;


 void* FUNC_0 (struct edac_mc_layer*) ;

 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 (struct mem_ctl_info*,struct sbridge_dev*) ;
 void* VAR_15 ;
 void* VAR_16 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_4 (int ,void*,struct edac_mc_layer*,int) ;
 int FUNC_5 (struct mem_ctl_info*) ;
 int FUNC_6 (struct mem_ctl_info*) ;
 int FUNC_7 (struct mem_ctl_info*) ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_8 (struct mem_ctl_info*) ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int FUNC_9 (struct mem_ctl_info*,struct sbridge_dev*) ;
 void* VAR_23 ;
 struct edac_mc_layer* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int FUNC_10 (struct mem_ctl_info*,struct sbridge_dev*) ;
 void* VAR_31 ;
 void* FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (void*) ;
 struct edac_mc_layer* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 int FUNC_13 (struct mem_ctl_info*,struct sbridge_dev*) ;
 void* VAR_41 ;
 int FUNC_14 (struct sbridge_pvt*,int ,int) ;
 int FUNC_15 (struct pci_dev*) ;
 void* VAR_42 ;
 void* VAR_43 ;
 struct edac_mc_layer* VAR_44 ;
 void* VAR_45 ;
 void* VAR_46 ;
 void* VAR_47 ;
 void* VAR_48 ;
 void* VAR_49 ;
 void* VAR_50 ;
 int FUNC_16 (struct mem_ctl_info*,struct sbridge_dev*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct sbridge_dev *VAR_51, enum type VAR_52)
{
 struct mem_ctl_info *VAR_53;
 struct edac_mc_layer VAR_54[2];
 struct sbridge_pvt *VAR_55;
 struct pci_dev *VAR_56 = VAR_51->pdev[0];
 int VAR_57;


 VAR_54[0].type = VAR_1;
 VAR_54[0].size = VAR_52 == 129 ?
  VAR_8 : VAR_12;
 VAR_54[0].is_virt_csrow = 0;
 VAR_54[1].type = VAR_2;
 VAR_54[1].size = VAR_52 == 129 ? 1 : VAR_9;
 VAR_54[1].is_virt_csrow = 1;
 VAR_53 = FUNC_4(VAR_51->mc, FUNC_0(VAR_54), VAR_54,
       sizeof(*VAR_55));

 if (FUNC_17(!VAR_53))
  return -VAR_5;

 FUNC_2(0, "MC: mci = %p, dev = %p\n",
   VAR_53, &VAR_56->dev);

 VAR_55 = VAR_53->pvt_info;
 FUNC_14(VAR_55, 0, sizeof(*VAR_55));


 VAR_55->sbridge_dev = VAR_51;
 VAR_51->mci = VAR_53;

 VAR_53->mtype_cap = VAR_52 == 129 ?
  VAR_11 : VAR_10;
 VAR_53->edac_ctl_cap = VAR_0;
 VAR_53->edac_cap = VAR_0;
 VAR_53->mod_name = VAR_3;
 VAR_53->dev_name = FUNC_15(VAR_56);
 VAR_53->ctl_page_to_phys = ((void*)0);

 VAR_55->info.type = VAR_52;
 switch (VAR_52) {
 case 130:
  VAR_55->info.rankcfgr = VAR_7;
  VAR_55->info.get_tolm = VAR_27;
  VAR_55->info.get_tohm = VAR_26;
  VAR_55->info.dram_rule = VAR_24;
  VAR_55->info.get_memory_type = VAR_17;
  VAR_55->info.get_node_id = VAR_18;
  VAR_55->info.get_ha = VAR_25;
  VAR_55->info.rir_limit = VAR_42;
  VAR_55->info.sad_limit = VAR_43;
  VAR_55->info.interleave_mode = VAR_31;
  VAR_55->info.dram_attr = VAR_15;
  VAR_55->info.max_sad = FUNC_0(VAR_24);
  VAR_55->info.interleave_list = VAR_29;
  VAR_55->info.interleave_pkg = VAR_30;
  VAR_55->info.get_width = VAR_28;


  VAR_57 = FUNC_10(VAR_53, VAR_51);
  if (FUNC_17(VAR_57 < 0))
   goto fail0;
  FUNC_8(VAR_53);
  VAR_53->ctl_name = FUNC_11(VAR_6, "Ivy Bridge SrcID#%d_Ha#%d",
   VAR_55->sbridge_dev->source_id, VAR_55->sbridge_dev->dom);
  break;
 case 128:
  VAR_55->info.rankcfgr = VAR_13;
  VAR_55->info.get_tolm = VAR_47;
  VAR_55->info.get_tohm = VAR_46;
  VAR_55->info.dram_rule = VAR_44;
  VAR_55->info.get_memory_type = VAR_17;
  VAR_55->info.get_node_id = VAR_18;
  VAR_55->info.get_ha = VAR_45;
  VAR_55->info.rir_limit = VAR_42;
  VAR_55->info.sad_limit = VAR_43;
  VAR_55->info.interleave_mode = VAR_31;
  VAR_55->info.dram_attr = VAR_15;
  VAR_55->info.max_sad = FUNC_0(VAR_44);
  VAR_55->info.interleave_list = VAR_49;
  VAR_55->info.interleave_pkg = VAR_50;
  VAR_55->info.get_width = VAR_48;


  VAR_57 = FUNC_16(VAR_53, VAR_51);
  if (FUNC_17(VAR_57 < 0))
   goto fail0;
  FUNC_8(VAR_53);
  VAR_53->ctl_name = FUNC_11(VAR_6, "Sandy Bridge SrcID#%d_Ha#%d",
   VAR_55->sbridge_dev->source_id, VAR_55->sbridge_dev->dom);
  break;
 case 131:

  VAR_55->info.get_tolm = VAR_22;
  VAR_55->info.get_tohm = VAR_21;
  VAR_55->info.dram_rule = VAR_24;
  VAR_55->info.get_memory_type = VAR_19;
  VAR_55->info.get_node_id = VAR_20;
  VAR_55->info.get_ha = VAR_25;
  VAR_55->info.rir_limit = VAR_23;
  VAR_55->info.sad_limit = VAR_43;
  VAR_55->info.interleave_mode = VAR_31;
  VAR_55->info.dram_attr = VAR_15;
  VAR_55->info.max_sad = FUNC_0(VAR_24);
  VAR_55->info.interleave_list = VAR_29;
  VAR_55->info.interleave_pkg = VAR_30;
  VAR_55->info.get_width = VAR_28;


  VAR_57 = FUNC_9(VAR_53, VAR_51);
  if (FUNC_17(VAR_57 < 0))
   goto fail0;
  FUNC_8(VAR_53);
  VAR_53->ctl_name = FUNC_11(VAR_6, "Haswell SrcID#%d_Ha#%d",
   VAR_55->sbridge_dev->source_id, VAR_55->sbridge_dev->dom);
  break;
 case 132:

  VAR_55->info.get_tolm = VAR_22;
  VAR_55->info.get_tohm = VAR_21;
  VAR_55->info.dram_rule = VAR_24;
  VAR_55->info.get_memory_type = VAR_19;
  VAR_55->info.get_node_id = VAR_20;
  VAR_55->info.get_ha = VAR_25;
  VAR_55->info.rir_limit = VAR_23;
  VAR_55->info.sad_limit = VAR_43;
  VAR_55->info.interleave_mode = VAR_31;
  VAR_55->info.dram_attr = VAR_15;
  VAR_55->info.max_sad = FUNC_0(VAR_24);
  VAR_55->info.interleave_list = VAR_29;
  VAR_55->info.interleave_pkg = VAR_30;
  VAR_55->info.get_width = VAR_14;


  VAR_57 = FUNC_1(VAR_53, VAR_51);
  if (FUNC_17(VAR_57 < 0))
   goto fail0;
  FUNC_8(VAR_53);
  VAR_53->ctl_name = FUNC_11(VAR_6, "Broadwell SrcID#%d_Ha#%d",
   VAR_55->sbridge_dev->source_id, VAR_55->sbridge_dev->dom);
  break;
 case 129:

  VAR_55->info.get_tolm = VAR_37;
  VAR_55->info.get_tohm = VAR_36;
  VAR_55->info.dram_rule = VAR_32;
  VAR_55->info.get_memory_type = VAR_34;
  VAR_55->info.get_node_id = VAR_35;
  VAR_55->info.get_ha = VAR_33;
  VAR_55->info.rir_limit = ((void*)0);
  VAR_55->info.sad_limit = VAR_41;
  VAR_55->info.interleave_mode = VAR_40;
  VAR_55->info.dram_attr = VAR_16;
  VAR_55->info.max_sad = FUNC_0(VAR_32);
  VAR_55->info.interleave_list = VAR_39;
  VAR_55->info.interleave_pkg = VAR_30;
  VAR_55->info.get_width = VAR_38;

  VAR_57 = FUNC_13(VAR_53, VAR_51);
  if (FUNC_17(VAR_57 < 0))
   goto fail0;
  FUNC_8(VAR_53);
  VAR_53->ctl_name = FUNC_11(VAR_6, "Knights Landing SrcID#%d_Ha#%d",
   VAR_55->sbridge_dev->source_id, VAR_55->sbridge_dev->dom);
  break;
 }

 if (!VAR_53->ctl_name) {
  VAR_57 = -VAR_5;
  goto fail0;
 }


 VAR_57 = FUNC_6(VAR_53);
 if (VAR_57 < 0) {
  FUNC_2(0, "MC: failed to get_dimm_config()\n");
  goto fail;
 }
 FUNC_7(VAR_53);


 VAR_53->pdev = &VAR_56->dev;


 if (FUNC_17(FUNC_3(VAR_53))) {
  FUNC_2(0, "MC: failed edac_mc_add_mc()\n");
  VAR_57 = -VAR_4;
  goto fail;
 }

 return 0;

fail:
 FUNC_12(VAR_53->ctl_name);
fail0:
 FUNC_5(VAR_53);
 VAR_51->mci = ((void*)0);
 return VAR_57;
}
