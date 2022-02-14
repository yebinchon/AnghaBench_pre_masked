
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_2__ {int read; int name; } ;
struct atmel_trng {int clk; TYPE_1__ rng; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_trng*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,struct resource*) ;
 struct atmel_trng* FUNC_8 (int *,int,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct atmel_trng*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_4)
{
 struct atmel_trng *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_8(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_9(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_7(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);

 VAR_7 = FUNC_4(VAR_5->clk);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_5);
 VAR_5->rng.name = VAR_4->name;
 VAR_5->rng.read = VAR_3;

 VAR_7 = FUNC_6(&VAR_4->dev, &VAR_5->rng);
 if (VAR_7)
  goto err_register;

 FUNC_10(VAR_4, VAR_5);

 return 0;

err_register:
 FUNC_3(VAR_5->clk);
 return VAR_7;
}
