
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_pmd_ctx {char* name; int pmd; int version; int next; int pmd_csr; int ddev; struct edac_device_ctl_info* edac_dev; struct xgene_edac* edac; } ;
struct xgene_edac {int * dev; int pmds; int efuse_map; } ;
struct resource {int dummy; } ;
struct edac_device_ctl_info {char* ctl_name; char* dev_name; int op_state; int edac_check; int mod_name; int * dev; struct xgene_edac_pmd_ctx* pvt_info; } ;
struct device_node {int dummy; } ;
typedef int edac_name ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,struct resource*) ;
 int FUNC_5 (int *,int (*) (struct xgene_edac*,struct device_node*,int),int ) ;
 int FUNC_6 (int *,int (*) (struct xgene_edac*,struct device_node*,int)) ;
 int FUNC_7 (int *,int (*) (struct xgene_edac*,struct device_node*,int)) ;
 int FUNC_8 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_9 (int,char*,int,char*,int,int,int *,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (struct edac_device_ctl_info*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct device_node*,int ,struct resource*) ;
 scalar_t__ FUNC_14 (struct device_node*,char*,int*) ;
 int FUNC_15 (int ,int ,int*) ;
 int FUNC_16 (char*,int,char*,int) ;
 int FUNC_17 (int,int) ;
 int VAR_8 ;
 int FUNC_18 (struct edac_device_ctl_info*) ;
 int FUNC_19 (struct edac_device_ctl_info*,int) ;

__attribute__((used)) static int FUNC_20(struct xgene_edac *VAR_9, struct device_node *VAR_10,
         int VAR_11)
{
 struct edac_device_ctl_info *VAR_12;
 struct xgene_edac_pmd_ctx *VAR_13;
 struct resource VAR_14;
 char VAR_15[10];
 u32 VAR_16;
 int VAR_17;
 u32 VAR_18;

 if (!FUNC_5(VAR_9->dev, FUNC_20, VAR_5))
  return -VAR_4;


 if (FUNC_14(VAR_10, "pmd-controller", &VAR_16)) {
  FUNC_2(VAR_9->dev, "no pmd-controller property\n");
  VAR_17 = -VAR_3;
  goto err_group;
 }
 VAR_17 = FUNC_15(VAR_9->efuse_map, 0, &VAR_18);
 if (VAR_17)
  goto err_group;
 if (!FUNC_17(VAR_18, VAR_16)) {
  VAR_17 = -VAR_3;
  goto err_group;
 }

 FUNC_16(VAR_15, sizeof(VAR_15), "l2c%d", VAR_16);
 VAR_12 = FUNC_9(sizeof(*VAR_13),
           VAR_15, 1, "l2c", 1, 2, ((void*)0),
           0, FUNC_10());
 if (!VAR_12) {
  VAR_17 = -VAR_4;
  goto err_group;
 }

 VAR_13 = VAR_12->pvt_info;
 VAR_13->name = "xgene_pmd_err";
 VAR_13->pmd = VAR_16;
 VAR_13->edac = VAR_9;
 VAR_13->edac_dev = VAR_12;
 VAR_13->ddev = *VAR_9->dev;
 VAR_13->version = VAR_11;
 VAR_12->dev = &VAR_13->ddev;
 VAR_12->ctl_name = VAR_13->name;
 VAR_12->dev_name = VAR_13->name;
 VAR_12->mod_name = VAR_0;

 VAR_17 = FUNC_13(VAR_10, 0, &VAR_14);
 if (VAR_17 < 0) {
  FUNC_2(VAR_9->dev, "no PMD resource address\n");
  goto err_free;
 }
 VAR_13->pmd_csr = FUNC_4(VAR_9->dev, &VAR_14);
 if (FUNC_0(VAR_13->pmd_csr)) {
  FUNC_2(VAR_9->dev,
   "devm_ioremap_resource failed for PMD resource address\n");
  VAR_17 = FUNC_1(VAR_13->pmd_csr);
  goto err_free;
 }

 if (VAR_7 == VAR_2)
  VAR_12->edac_check = VAR_8;

 FUNC_18(VAR_12);

 VAR_17 = FUNC_8(VAR_12);
 if (VAR_17 > 0) {
  FUNC_2(VAR_9->dev, "edac_device_add_device failed\n");
  VAR_17 = -VAR_4;
  goto err_free;
 }

 if (VAR_7 == VAR_1)
  VAR_12->op_state = VAR_6;

 FUNC_12(&VAR_13->next, &VAR_9->pmds);

 FUNC_19(VAR_12, 1);

 FUNC_7(VAR_9->dev, FUNC_20);

 FUNC_3(VAR_9->dev, "X-Gene EDAC PMD%d registered\n", VAR_13->pmd);
 return 0;

err_free:
 FUNC_11(VAR_12);
err_group:
 FUNC_6(VAR_9->dev, FUNC_20);
 return VAR_17;
}
