
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct of_device_id {struct bcm2835_rng_of_data* data; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int cleanup; int read; int init; int name; } ;
struct bcm2835_rng_priv {TYPE_1__ rng; int mask_interrupts; int clk; int base; } ;
struct bcm2835_rng_of_data {int mask_interrupts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (struct device*,TYPE_1__*) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct bcm2835_rng_priv* FUNC_8 (struct device*,int,int ) ;
 struct of_device_id* FUNC_9 (int ,struct device_node*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct bcm2835_rng_priv*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 const struct bcm2835_rng_of_data *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 const struct of_device_id *VAR_13;
 struct bcm2835_rng_priv *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(VAR_11, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 FUNC_11(VAR_9, VAR_14);

 VAR_15 = FUNC_10(VAR_9, VAR_4, 0);


 VAR_14->base = FUNC_7(VAR_11, VAR_15);
 if (FUNC_0(VAR_14->base))
  return FUNC_1(VAR_14->base);


 VAR_14->clk = FUNC_5(VAR_11, ((void*)0));
 if (FUNC_0(VAR_14->clk) && FUNC_1(VAR_14->clk) == -VAR_2)
  return -VAR_2;

 VAR_14->rng.name = VAR_9->name;
 VAR_14->rng.init = VAR_6;
 VAR_14->rng.read = VAR_8;
 VAR_14->rng.cleanup = VAR_5;

 if (FUNC_4(VAR_11)) {
  VAR_13 = FUNC_9(VAR_7, VAR_12);
  if (!VAR_13)
   return -VAR_0;


  VAR_10 = VAR_13->data;
  if (VAR_10)
   VAR_14->mask_interrupts = VAR_10->mask_interrupts;
 }


 VAR_16 = FUNC_6(VAR_11, &VAR_14->rng);
 if (VAR_16)
  FUNC_2(VAR_11, "hwrng registration failed\n");
 else
  FUNC_3(VAR_11, "hwrng registered\n");

 return VAR_16;
}
