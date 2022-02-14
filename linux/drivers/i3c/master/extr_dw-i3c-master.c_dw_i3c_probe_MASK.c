
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int datafifodepth; int cmdfifodepth; } ;
struct TYPE_3__ {int list; int lock; } ;
struct dw_i3c_master {int datstartaddr; int maxdevs; scalar_t__ core_clk; scalar_t__ core_rst; int base; int free_pos; scalar_t__ regs; TYPE_2__ caps; TYPE_1__ xferqueue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,struct resource*) ;
 struct dw_i3c_master* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,int ,int ,int ,struct dw_i3c_master*) ;
 scalar_t__ FUNC_13 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int *,int *,int *,int) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct dw_i3c_master*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_10)
{
 struct dw_i3c_master *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_11(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_16(VAR_10, VAR_6, 0);
 VAR_11->regs = FUNC_10(&VAR_10->dev, VAR_12);
 if (FUNC_3(VAR_11->regs))
  return FUNC_4(VAR_11->regs);

 VAR_11->core_clk = FUNC_9(&VAR_10->dev, ((void*)0));
 if (FUNC_3(VAR_11->core_clk))
  return FUNC_4(VAR_11->core_clk);

 VAR_11->core_rst = FUNC_13(&VAR_10->dev,
            "core_rst");
 if (FUNC_3(VAR_11->core_rst))
  return FUNC_4(VAR_11->core_rst);

 VAR_13 = FUNC_7(VAR_11->core_clk);
 if (VAR_13)
  goto err_disable_core_clk;

 FUNC_20(VAR_11->core_rst);

 FUNC_21(&VAR_11->xferqueue.lock);
 FUNC_2(&VAR_11->xferqueue.list);

 FUNC_22(VAR_4, VAR_11->regs + VAR_5);
 VAR_14 = FUNC_15(VAR_10, 0);
 VAR_13 = FUNC_12(&VAR_10->dev, VAR_14,
          VAR_8, 0,
          FUNC_8(&VAR_10->dev), VAR_11);
 if (VAR_13)
  goto err_assert_rst;

 FUNC_17(VAR_10, VAR_11);


 VAR_13 = FUNC_18(VAR_11->regs + VAR_7);
 VAR_11->caps.cmdfifodepth = FUNC_5(VAR_13);

 VAR_13 = FUNC_18(VAR_11->regs + VAR_0);
 VAR_11->caps.datafifodepth = FUNC_0(VAR_13);

 VAR_13 = FUNC_18(VAR_11->regs + VAR_1);
 VAR_11->datstartaddr = VAR_13;
 VAR_11->maxdevs = VAR_13 >> 16;
 VAR_11->free_pos = FUNC_1(VAR_11->maxdevs - 1, 0);

 VAR_13 = FUNC_14(&VAR_11->base, &VAR_10->dev,
      &VAR_9, 0);
 if (VAR_13)
  goto err_assert_rst;

 return 0;

err_assert_rst:
 FUNC_19(VAR_11->core_rst);

err_disable_core_clk:
 FUNC_6(VAR_11->core_clk);

 return VAR_13;
}
