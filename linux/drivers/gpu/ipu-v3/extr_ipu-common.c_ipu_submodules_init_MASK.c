
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ipu_soc {struct ipu_devtype* devtype; } ;
struct ipu_devtype {scalar_t__ cm_ofs; scalar_t__ srm_ofs; scalar_t__ dc_tmpl_ofs; scalar_t__ disp1_ofs; scalar_t__ disp0_ofs; scalar_t__ vdi_ofs; scalar_t__ tpm_ofs; scalar_t__ ic_ofs; scalar_t__ csi1_ofs; scalar_t__ csi0_ofs; scalar_t__ cpmem_ofs; } ;
struct clk {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,char*,int) ;
 int FUNC_1 (struct ipu_soc*) ;
 int FUNC_2 (struct ipu_soc*,struct device*,scalar_t__) ;
 int FUNC_3 (struct ipu_soc*,int) ;
 int FUNC_4 (struct ipu_soc*,struct device*,int,scalar_t__,int ,struct clk*) ;
 int FUNC_5 (struct ipu_soc*) ;
 int FUNC_6 (struct ipu_soc*,struct device*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct ipu_soc*,int) ;
 int FUNC_8 (struct ipu_soc*,struct device*,int,scalar_t__,int ,struct clk*) ;
 int FUNC_9 (struct ipu_soc*) ;
 int FUNC_10 (struct ipu_soc*,struct device*,scalar_t__,struct clk*) ;
 int FUNC_11 (struct ipu_soc*) ;
 int FUNC_12 (struct ipu_soc*,struct device*,scalar_t__) ;
 int FUNC_13 (struct ipu_soc*) ;
 int FUNC_14 (struct ipu_soc*,struct device*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct ipu_soc*) ;
 int FUNC_16 (struct ipu_soc*,struct device*) ;
 int FUNC_17 (struct ipu_soc*,struct device*,scalar_t__) ;
 int FUNC_18 (struct ipu_soc*) ;
 int FUNC_19 (struct ipu_soc*,struct device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_20(struct ipu_soc *VAR_10,
  struct platform_device *VAR_11, unsigned long VAR_12,
  struct clk *VAR_13)
{
 char *VAR_14;
 int VAR_15;
 struct device *VAR_16 = &VAR_11->dev;
 const struct ipu_devtype *VAR_17 = VAR_10->devtype;

 VAR_15 = FUNC_2(VAR_10, VAR_16, VAR_12 + VAR_17->cpmem_ofs);
 if (VAR_15) {
  VAR_14 = "cpmem";
  goto err_cpmem;
 }

 VAR_15 = FUNC_4(VAR_10, VAR_16, 0, VAR_12 + VAR_17->csi0_ofs,
      VAR_3, VAR_13);
 if (VAR_15) {
  VAR_14 = "csi0";
  goto err_csi_0;
 }

 VAR_15 = FUNC_4(VAR_10, VAR_16, 1, VAR_12 + VAR_17->csi1_ofs,
      VAR_4, VAR_13);
 if (VAR_15) {
  VAR_14 = "csi1";
  goto err_csi_1;
 }

 VAR_15 = FUNC_14(VAR_10, VAR_16,
     VAR_12 + VAR_17->ic_ofs,
     VAR_12 + VAR_17->tpm_ofs);
 if (VAR_15) {
  VAR_14 = "ic";
  goto err_ic;
 }

 VAR_15 = FUNC_19(VAR_10, VAR_16, VAR_12 + VAR_17->vdi_ofs,
      VAR_9 | VAR_8 |
      VAR_7);
 if (VAR_15) {
  VAR_14 = "vdi";
  goto err_vdi;
 }

 VAR_15 = FUNC_16(VAR_10, VAR_16);
 if (VAR_15) {
  VAR_14 = "image_convert";
  goto err_image_convert;
 }

 VAR_15 = FUNC_8(VAR_10, VAR_16, 0, VAR_12 + VAR_17->disp0_ofs,
     VAR_5, VAR_13);
 if (VAR_15) {
  VAR_14 = "di0";
  goto err_di_0;
 }

 VAR_15 = FUNC_8(VAR_10, VAR_16, 1, VAR_12 + VAR_17->disp1_ofs,
   VAR_6, VAR_13);
 if (VAR_15) {
  VAR_14 = "di1";
  goto err_di_1;
 }

 VAR_15 = FUNC_6(VAR_10, VAR_16, VAR_12 + VAR_17->cm_ofs +
   VAR_0, VAR_12 + VAR_17->dc_tmpl_ofs);
 if (VAR_15) {
  VAR_14 = "dc_template";
  goto err_dc;
 }

 VAR_15 = FUNC_10(VAR_10, VAR_16, VAR_12 +
   VAR_17->cm_ofs + VAR_1, VAR_13);
 if (VAR_15) {
  VAR_14 = "dmfc";
  goto err_dmfc;
 }

 VAR_15 = FUNC_12(VAR_10, VAR_16, VAR_12 + VAR_17->srm_ofs);
 if (VAR_15) {
  VAR_14 = "dp";
  goto err_dp;
 }

 VAR_15 = FUNC_17(VAR_10, VAR_16, VAR_12 +
   VAR_17->cm_ofs + VAR_2);
 if (VAR_15) {
  VAR_14 = "smfc";
  goto err_smfc;
 }

 return 0;

err_smfc:
 FUNC_11(VAR_10);
err_dp:
 FUNC_9(VAR_10);
err_dmfc:
 FUNC_5(VAR_10);
err_dc:
 FUNC_7(VAR_10, 1);
err_di_1:
 FUNC_7(VAR_10, 0);
err_di_0:
 FUNC_15(VAR_10);
err_image_convert:
 FUNC_18(VAR_10);
err_vdi:
 FUNC_13(VAR_10);
err_ic:
 FUNC_3(VAR_10, 1);
err_csi_1:
 FUNC_3(VAR_10, 0);
err_csi_0:
 FUNC_1(VAR_10);
err_cpmem:
 FUNC_0(&VAR_11->dev, "init %s failed with %d\n", VAR_14, VAR_15);
 return VAR_15;
}
