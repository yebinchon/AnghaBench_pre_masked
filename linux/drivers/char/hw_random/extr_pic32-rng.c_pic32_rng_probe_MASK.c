
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int name; int dev; } ;
struct TYPE_2__ {int read; int name; } ;
struct pic32_rng {scalar_t__ clk; TYPE_1__ rng; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,struct resource*) ;
 struct pic32_rng* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct pic32_rng*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct pic32_rng *VAR_8;
 struct resource *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_8(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_5(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_4(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_11 = FUNC_3(VAR_8->clk);
 if (VAR_11)
  return VAR_11;


 VAR_10 = VAR_4 | VAR_5;
 FUNC_10(VAR_10, VAR_8->base + VAR_3);

 VAR_8->rng.name = VAR_7->name;
 VAR_8->rng.read = VAR_6;

 VAR_11 = FUNC_7(&VAR_8->rng);
 if (VAR_11)
  goto err_register;

 FUNC_9(VAR_7, VAR_8);

 return 0;

err_register:
 FUNC_2(VAR_8->clk);
 return VAR_11;
}
