
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mem_ctl_info {int mtype_cap; char* ctl_name; int edac_check; int dev_name; int mod_name; int edac_ctl_cap; struct device* pdev; struct bluefield_edac_priv* pvt_info; } ;
struct edac_mc_layer {unsigned int size; int is_virt_csrow; int type; } ;
struct bluefield_edac_priv {unsigned int dimm_per_mc; int emi_base; } ;


 int FUNC_0 (struct edac_mc_layer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (struct mem_ctl_info*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,char*) ;
 scalar_t__ FUNC_7 (struct device*,char*,unsigned int*) ;
 int FUNC_8 (struct device*,struct resource*) ;
 int FUNC_9 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_10 (unsigned int,int ,struct edac_mc_layer*,int) ;
 int FUNC_11 (struct mem_ctl_info*) ;
 int VAR_13 ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 struct bluefield_edac_priv *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct edac_mc_layer VAR_17[1];
 struct mem_ctl_info *VAR_18;
 struct resource *VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22, VAR_23;


 if (FUNC_7(VAR_16, "mss_number", &VAR_20)) {
  FUNC_6(VAR_16, "bf_edac: MSS number unknown\n");
  return -VAR_4;
 }


 if (FUNC_7(VAR_16, "dimm_per_mc", &VAR_21)) {
  FUNC_6(VAR_16, "bf_edac: DIMMs per MC unknown\n");
  return -VAR_4;
 }

 if (VAR_21 > VAR_11) {
  FUNC_6(VAR_16, "bf_edac: DIMMs per MC not valid\n");
  return -VAR_4;
 }

 VAR_19 = FUNC_12(VAR_14, VAR_6, 0);
 if (!VAR_19)
  return -VAR_4;

 VAR_17[0].type = VAR_2;
 VAR_17[0].size = VAR_21;
 VAR_17[0].is_virt_csrow = 1;

 VAR_18 = FUNC_10(VAR_20, FUNC_0(VAR_17), VAR_17, sizeof(*VAR_15));
 if (!VAR_18)
  return -VAR_5;

 VAR_15 = VAR_18->pvt_info;

 VAR_15->dimm_per_mc = VAR_21;
 VAR_15->emi_base = FUNC_8(VAR_16, VAR_19);
 if (FUNC_1(VAR_15->emi_base)) {
  FUNC_4(VAR_16, "failed to map EMI IO resource\n");
  VAR_23 = FUNC_2(VAR_15->emi_base);
  goto err;
 }

 VAR_18->pdev = VAR_16;
 VAR_18->mtype_cap = VAR_7 | VAR_10 |
    VAR_8 | VAR_9;
 VAR_18->edac_ctl_cap = VAR_1;

 VAR_18->mod_name = VAR_0;
 VAR_18->ctl_name = "BlueField_Memory_Controller";
 VAR_18->dev_name = FUNC_5(VAR_16);
 VAR_18->edac_check = VAR_12;


 FUNC_3(VAR_18);

 FUNC_13(VAR_14, VAR_18);


 VAR_22 = FUNC_9(VAR_18);
 if (VAR_22) {
  FUNC_4(VAR_16, "failed to register with EDAC core\n");
  VAR_23 = VAR_22;
  goto err;
 }


 VAR_13 = VAR_3;

 return 0;

err:
 FUNC_11(VAR_18);

 return VAR_23;

}
