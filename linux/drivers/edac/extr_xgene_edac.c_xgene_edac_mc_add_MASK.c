
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_ctx ;
struct xgene_edac_mc_ctx {char* name; int next; struct mem_ctl_info* mci; int mcu_id; int mcu_csr; struct xgene_edac* edac; } ;
struct xgene_edac {int dev; int mcus; } ;
struct resource {int dummy; } ;
struct mem_ctl_info {char* ctl_name; char* dev_name; int mtype_cap; int edac_check; int scrub_mode; int scrub_cap; int * ctl_page_to_phys; int mod_name; void* edac_cap; void* edac_ctl_cap; int dev; int * pdev; struct xgene_edac_mc_ctx* pvt_info; } ;
struct edac_mc_layer {int size; int is_virt_csrow; int type; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct edac_mc_layer*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct resource*) ;
 int FUNC_6 (int ,int (*) (struct xgene_edac*,struct device_node*),int ) ;
 int FUNC_7 (int ,int (*) (struct xgene_edac*,struct device_node*)) ;
 int FUNC_8 (int ,int (*) (struct xgene_edac*,struct device_node*)) ;
 scalar_t__ FUNC_9 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_10 (int ,int ,struct edac_mc_layer*,int) ;
 int FUNC_11 (struct mem_ctl_info*) ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct xgene_edac_mc_ctx*,int ,int) ;
 int FUNC_14 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_15 (struct device_node*,char*,int *) ;
 int VAR_18 ;
 int FUNC_16 (struct mem_ctl_info*) ;
 int FUNC_17 (struct mem_ctl_info*,int) ;
 int FUNC_18 (struct xgene_edac_mc_ctx*,int ) ;

__attribute__((used)) static int FUNC_19(struct xgene_edac *VAR_19, struct device_node *VAR_20)
{
 struct mem_ctl_info *VAR_21;
 struct edac_mc_layer VAR_22[2];
 struct xgene_edac_mc_ctx VAR_23;
 struct xgene_edac_mc_ctx *VAR_24;
 struct resource VAR_25;
 int VAR_26;

 FUNC_13(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.edac = VAR_19;

 if (!FUNC_6(VAR_19->dev, FUNC_19, VAR_8))
  return -VAR_7;

 VAR_26 = FUNC_14(VAR_20, 0, &VAR_25);
 if (VAR_26 < 0) {
  FUNC_3(VAR_19->dev, "no MCU resource address\n");
  goto err_group;
 }
 VAR_23.mcu_csr = FUNC_5(VAR_19->dev, &VAR_25);
 if (FUNC_1(VAR_23.mcu_csr)) {
  FUNC_3(VAR_19->dev, "unable to map MCU resource\n");
  VAR_26 = FUNC_2(VAR_23.mcu_csr);
  goto err_group;
 }


 if (FUNC_15(VAR_20, "memory-controller", &VAR_23.mcu_id)) {
  FUNC_3(VAR_19->dev, "no memory-controller property\n");
  VAR_26 = -VAR_6;
  goto err_group;
 }
 if (!FUNC_18(&VAR_23, VAR_23.mcu_id)) {
  VAR_26 = -VAR_6;
  goto err_group;
 }

 VAR_22[0].type = VAR_2;
 VAR_22[0].size = 4;
 VAR_22[0].is_virt_csrow = 1;
 VAR_22[1].type = VAR_1;
 VAR_22[1].size = 2;
 VAR_22[1].is_virt_csrow = 0;
 VAR_21 = FUNC_10(VAR_23.mcu_id, FUNC_0(VAR_22), VAR_22,
       sizeof(*VAR_24));
 if (!VAR_21) {
  VAR_26 = -VAR_7;
  goto err_group;
 }

 VAR_24 = VAR_21->pvt_info;
 *VAR_24 = VAR_23;
 VAR_24->name = "xgene_edac_mc_err";
 VAR_24->mci = VAR_21;
 VAR_21->pdev = &VAR_21->dev;
 VAR_21->ctl_name = VAR_24->name;
 VAR_21->dev_name = VAR_24->name;

 VAR_21->mtype_cap = VAR_12 | VAR_13 | VAR_14 |
    VAR_9 | VAR_10 | VAR_11;
 VAR_21->edac_ctl_cap = VAR_0;
 VAR_21->edac_cap = VAR_0;
 VAR_21->mod_name = VAR_3;
 VAR_21->ctl_page_to_phys = ((void*)0);
 VAR_21->scrub_cap = VAR_15;
 VAR_21->scrub_mode = VAR_16;

 if (VAR_17 == VAR_4)
  VAR_21->edac_check = VAR_18;

 if (FUNC_9(VAR_21)) {
  FUNC_3(VAR_19->dev, "edac_mc_add_mc failed\n");
  VAR_26 = -VAR_5;
  goto err_free;
 }

 FUNC_16(VAR_21);

 FUNC_12(&VAR_24->next, &VAR_19->mcus);

 FUNC_17(VAR_21, 1);

 FUNC_8(VAR_19->dev, FUNC_19);

 FUNC_4(VAR_19->dev, "X-Gene EDAC MC registered\n");
 return 0;

err_free:
 FUNC_11(VAR_21);
err_group:
 FUNC_7(VAR_19->dev, FUNC_19);
 return VAR_26;
}
