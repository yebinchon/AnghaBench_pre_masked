
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nregs; int regs; int base; } ;
struct TYPE_4__ {int base; } ;
struct vc4_txp {TYPE_1__ regset; TYPE_2__ connector; int regs; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_txp* txp; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct drm_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct vc4_txp*) ;
 struct vc4_txp* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,int ,struct vc4_txp*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct drm_device*,TYPE_2__*,int *,int *,int ,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct platform_device* FUNC_11 (struct device*) ;
 struct vc4_dev* FUNC_12 (struct drm_device*) ;
 int VAR_3 ;
 int FUNC_13 (struct drm_device*,char*,TYPE_1__*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct device *VAR_8, struct device *VAR_9, void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_11(VAR_8);
 struct drm_device *VAR_12 = FUNC_3(VAR_9);
 struct vc4_dev *VAR_13 = FUNC_12(VAR_12);
 struct vc4_txp *VAR_14;
 int VAR_15, VAR_16;

 VAR_16 = FUNC_10(VAR_11, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = FUNC_6(VAR_8, sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->pdev = VAR_11;

 VAR_14->regs = FUNC_14(VAR_11, 0);
 if (FUNC_1(VAR_14->regs))
  return FUNC_2(VAR_14->regs);
 VAR_14->regset.base = VAR_14->regs;
 VAR_14->regset.regs = VAR_3;
 VAR_14->regset.nregs = FUNC_0(VAR_3);

 FUNC_8(&VAR_14->connector.base,
     &VAR_5);
 VAR_15 = FUNC_9(VAR_12, &VAR_14->connector,
        &VAR_4,
        &VAR_6,
        VAR_2, FUNC_0(VAR_2));
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_7(VAR_8, VAR_16, VAR_7, 0,
          FUNC_4(VAR_8), VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_5(VAR_8, VAR_14);
 VAR_13->txp = VAR_14;

 FUNC_13(VAR_12, "txp_regs", &VAR_14->regset);

 return 0;
}
