
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; int name; } ;
struct TYPE_2__ {int read; int init; int name; } ;
struct imx_rngc {int clk; TYPE_1__ rng; int * dev; int rng_op_done; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 struct imx_rngc* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (int *,int,int ,int ,int ,void*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct imx_rngc*) ;
 int VAR_4 ;
 int FUNC_12 (struct imx_rngc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (struct platform_device*,struct imx_rngc*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct imx_rngc *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->base = FUNC_8(VAR_6, 0);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_6(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_4(&VAR_6->dev, "Can not get rng_clk\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_9 = FUNC_14(VAR_6, 0);
 if (VAR_9 <= 0) {
  FUNC_4(&VAR_6->dev, "Couldn't get irq %d\n", VAR_9);
  return VAR_9;
 }

 VAR_8 = FUNC_3(VAR_7->clk);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_9(&VAR_6->dev,
   VAR_9, VAR_3, 0, VAR_6->name, (void *)VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_7->dev, "Can't get interrupt working.\n");
  goto err;
 }

 FUNC_13(&VAR_7->rng_op_done);

 VAR_7->rng.name = VAR_6->name;
 VAR_7->rng.init = VAR_2;
 VAR_7->rng.read = VAR_4;

 VAR_7->dev = &VAR_6->dev;
 FUNC_15(VAR_6, VAR_7);

 FUNC_11(VAR_7);

 if (VAR_5) {
  VAR_8 = FUNC_12(VAR_7);
  if (VAR_8) {
   FUNC_4(VAR_7->dev, "FSL RNGC self test failed.\n");
   goto err;
  }
 }

 VAR_8 = FUNC_10(&VAR_7->rng);
 if (VAR_8) {
  FUNC_4(&VAR_6->dev, "FSL RNGC registering failed (%d)\n", VAR_8);
  goto err;
 }

 FUNC_5(&VAR_6->dev, "Freescale RNGC registered.\n");
 return 0;

err:
 FUNC_2(VAR_7->clk);

 return VAR_8;
}
