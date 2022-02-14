
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vop_win_data {int dummy; } ;
struct vop_win {struct vop_win_data* data; } ;
struct vop {int len; int is_enabled; int dev; struct reset_control* dclk; struct reset_control* hclk; struct reset_control* aclk; struct reset_control* dclk_rst; struct vop_win* win; TYPE_1__* data; scalar_t__ regs; int * regsbak; } ;
struct reset_control {int dummy; } ;
struct TYPE_2__ {int win_size; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct vop*,int ,int ,int) ;
 int FUNC_4 (struct vop*,int ,int ,int) ;
 int FUNC_5 (struct vop*,struct vop_win_data const*,int,int) ;
 int VAR_1 ;
 int FUNC_6 (struct reset_control*) ;
 int FUNC_7 (struct reset_control*) ;
 int FUNC_8 (struct reset_control*) ;
 int FUNC_9 (struct reset_control*) ;
 int FUNC_10 (struct reset_control*) ;
 int VAR_2 ;
 void* FUNC_11 (int ,char*) ;
 void* FUNC_12 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (struct reset_control*) ;
 int FUNC_17 (struct reset_control*) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (struct vop*) ;
 int FUNC_20 (struct vop*,struct vop_win*) ;

__attribute__((used)) static int FUNC_21(struct vop *VAR_8)
{
 struct reset_control *VAR_9;
 int VAR_10, VAR_11;

 VAR_8->hclk = FUNC_11(VAR_8->dev, "hclk_vop");
 if (FUNC_1(VAR_8->hclk)) {
  FUNC_0(VAR_8->dev, "failed to get hclk source\n");
  return FUNC_2(VAR_8->hclk);
 }
 VAR_8->aclk = FUNC_11(VAR_8->dev, "aclk_vop");
 if (FUNC_1(VAR_8->aclk)) {
  FUNC_0(VAR_8->dev, "failed to get aclk source\n");
  return FUNC_2(VAR_8->aclk);
 }
 VAR_8->dclk = FUNC_11(VAR_8->dev, "dclk_vop");
 if (FUNC_1(VAR_8->dclk)) {
  FUNC_0(VAR_8->dev, "failed to get dclk source\n");
  return FUNC_2(VAR_8->dclk);
 }

 VAR_11 = FUNC_13(VAR_8->dev);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->dev, "failed to get pm runtime: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_8(VAR_8->dclk);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->dev, "failed to prepare dclk\n");
  goto err_put_pm_runtime;
 }


 VAR_11 = FUNC_9(VAR_8->hclk);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->dev, "failed to prepare/enable hclk\n");
  goto err_unprepare_dclk;
 }

 VAR_11 = FUNC_9(VAR_8->aclk);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->dev, "failed to prepare/enable aclk\n");
  goto err_disable_hclk;
 }




 VAR_9 = FUNC_12(VAR_8->dev, "ahb");
 if (FUNC_1(VAR_9)) {
  FUNC_0(VAR_8->dev, "failed to get ahb reset\n");
  VAR_11 = FUNC_2(VAR_9);
  goto err_disable_aclk;
 }
 FUNC_16(VAR_9);
 FUNC_18(10, 20);
 FUNC_17(VAR_9);

 FUNC_3(VAR_8, VAR_1, VAR_0, 1);
 FUNC_3(VAR_8, VAR_4, VAR_0, 0);

 for (VAR_10 = 0; VAR_10 < VAR_8->len; VAR_10 += sizeof(u32))
  VAR_8->regsbak[VAR_10 / 4] = FUNC_15(VAR_8->regs + VAR_10);

 FUNC_4(VAR_8, VAR_7, VAR_6, 1);
 FUNC_4(VAR_8, VAR_2, VAR_3, 0);

 for (VAR_10 = 0; VAR_10 < VAR_8->data->win_size; VAR_10++) {
  struct vop_win *VAR_12 = &VAR_8->win[VAR_10];
  const struct vop_win_data *VAR_13 = VAR_12->data;
  int VAR_14 = VAR_10 * 2 + 1;

  FUNC_5(VAR_8, VAR_13, VAR_14, (VAR_14 + 1) << 4 | VAR_14);
  FUNC_20(VAR_8, VAR_12);
  FUNC_5(VAR_8, VAR_13, VAR_5, 1);
 }

 FUNC_19(VAR_8);




 VAR_8->dclk_rst = FUNC_12(VAR_8->dev, "dclk");
 if (FUNC_1(VAR_8->dclk_rst)) {
  FUNC_0(VAR_8->dev, "failed to get dclk reset\n");
  VAR_11 = FUNC_2(VAR_8->dclk_rst);
  goto err_disable_aclk;
 }
 FUNC_16(VAR_8->dclk_rst);
 FUNC_18(10, 20);
 FUNC_17(VAR_8->dclk_rst);

 FUNC_6(VAR_8->hclk);
 FUNC_6(VAR_8->aclk);

 VAR_8->is_enabled = 0;

 FUNC_14(VAR_8->dev);

 return 0;

err_disable_aclk:
 FUNC_7(VAR_8->aclk);
err_disable_hclk:
 FUNC_7(VAR_8->hclk);
err_unprepare_dclk:
 FUNC_10(VAR_8->dclk);
err_put_pm_runtime:
 FUNC_14(VAR_8->dev);
 return VAR_11;
}
