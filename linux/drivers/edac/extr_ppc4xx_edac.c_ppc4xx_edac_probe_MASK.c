
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ppc4xx_edac_pdata {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mem_ctl_info {int pdev; } ;
struct edac_mc_layer {int is_virt_csrow; int size; int type; } ;
struct device_node {int dummy; } ;
typedef int dcr_host_t ;


 int FUNC_0 (struct edac_mc_layer*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_2 (int,int ,struct edac_mc_layer*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mem_ctl_info*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct device_node const*,char*) ;
 int FUNC_7 (struct device_node const*,int *) ;
 int FUNC_8 (struct mem_ctl_info*,struct platform_device*,int *,int) ;
 int FUNC_9 (int ,struct mem_ctl_info*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct platform_device*,struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_14)
{
 int VAR_15 = 0;
 u32 VAR_16, VAR_17;
 dcr_host_t VAR_18;
 const struct device_node *VAR_19 = VAR_14->dev.of_node;
 struct mem_ctl_info *VAR_20 = ((void*)0);
 struct edac_mc_layer VAR_21[2];
 static int VAR_22;






 if (!FUNC_6(VAR_19, "ibm,sdram-405ex") &&
     !FUNC_6(VAR_19, "ibm,sdram-405exr")) {
  FUNC_10(VAR_7,
       "Only the PPC405EX[r] is supported.\n");
  return -VAR_3;
 }






 VAR_15 = FUNC_7(VAR_19, &VAR_18);

 if (VAR_15)
  return VAR_15;







 VAR_16 = FUNC_5(&VAR_18, VAR_8);
 VAR_17 = (VAR_16 & VAR_9);

 if (VAR_17 == VAR_10) {
  FUNC_10(VAR_6, "%pOF: No ECC memory detected or "
       "ECC is disabled.\n", VAR_19);
  VAR_15 = -VAR_3;
  goto done;
 }






 VAR_21[0].type = VAR_1;
 VAR_21[0].size = VAR_13;
 VAR_21[0].is_virt_csrow = 1;
 VAR_21[1].type = VAR_0;
 VAR_21[1].size = VAR_12;
 VAR_21[1].is_virt_csrow = 0;
 VAR_20 = FUNC_2(VAR_22, FUNC_0(VAR_21), VAR_21,
       sizeof(struct ppc4xx_edac_pdata));
 if (VAR_20 == ((void*)0)) {
  FUNC_10(VAR_5, "%pOF: "
       "Failed to allocate EDAC MC instance!\n",
       VAR_19);
  VAR_15 = -VAR_4;
  goto done;
 }

 VAR_15 = FUNC_8(VAR_20, VAR_14, &VAR_18, VAR_16);

 if (VAR_15) {
  FUNC_9(VAR_5, VAR_20,
          "Failed to initialize instance!\n");
  goto fail;
 }







 if (FUNC_1(VAR_20)) {
  FUNC_9(VAR_5, VAR_20,
          "Failed to add instance!\n");
  VAR_15 = -VAR_3;
  goto fail;
 }

 if (VAR_11 == VAR_2) {
  VAR_15 = FUNC_11(VAR_14, VAR_20);

  if (VAR_15)
   goto fail1;
 }

 VAR_22++;

 return 0;

 fail1:
 FUNC_3(VAR_20->pdev);

 fail:
 FUNC_4(VAR_20);

 done:
 return VAR_15;
}
