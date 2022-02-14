
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_device {void* core; void* iface; void* bus; int dma; int async_req_done; int async_req_enqueue; int queue; int done_tasklet; int lock; struct device* dev; void* base; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ) ;
 void* FUNC_6 (struct device*,char*) ;
 struct qce_device* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (struct platform_device*,struct qce_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct qce_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct device*,int *) ;
 int FUNC_14 (struct qce_device*) ;
 int VAR_5 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct qce_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_7(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->dev = VAR_7;
 FUNC_10(VAR_6, VAR_8);

 VAR_8->base = FUNC_8(VAR_6, 0);
 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 VAR_9 = FUNC_9(VAR_7, FUNC_0(32));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->core = FUNC_6(VAR_8->dev, "core");
 if (FUNC_1(VAR_8->core))
  return FUNC_2(VAR_8->core);

 VAR_8->iface = FUNC_6(VAR_8->dev, "iface");
 if (FUNC_1(VAR_8->iface))
  return FUNC_2(VAR_8->iface);

 VAR_8->bus = FUNC_6(VAR_8->dev, "bus");
 if (FUNC_1(VAR_8->bus))
  return FUNC_2(VAR_8->bus);

 VAR_9 = FUNC_4(VAR_8->core);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_8->iface);
 if (VAR_9)
  goto err_clks_core;

 VAR_9 = FUNC_4(VAR_8->bus);
 if (VAR_9)
  goto err_clks_iface;

 VAR_9 = FUNC_13(VAR_8->dev, &VAR_8->dma);
 if (VAR_9)
  goto err_clks;

 VAR_9 = FUNC_11(VAR_8);
 if (VAR_9)
  goto err_clks;

 FUNC_15(&VAR_8->lock);
 FUNC_16(&VAR_8->done_tasklet, VAR_5,
       (unsigned long)VAR_8);
 FUNC_5(&VAR_8->queue, VAR_2);

 VAR_8->async_req_enqueue = VAR_4;
 VAR_8->async_req_done = VAR_3;

 VAR_9 = FUNC_14(VAR_8);
 if (VAR_9)
  goto err_dma;

 return 0;

err_dma:
 FUNC_12(&VAR_8->dma);
err_clks:
 FUNC_3(VAR_8->bus);
err_clks_iface:
 FUNC_3(VAR_8->iface);
err_clks_core:
 FUNC_3(VAR_8->core);
 return VAR_9;
}
