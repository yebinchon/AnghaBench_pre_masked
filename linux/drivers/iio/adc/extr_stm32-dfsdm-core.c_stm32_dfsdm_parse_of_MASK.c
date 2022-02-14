
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_6__ {unsigned long spi_master_freq; int * base; int phys_base; } ;
struct dfsdm_priv {unsigned long spi_clk_out_div; TYPE_1__ dfsdm; int * clk; int * aclk; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 void* FUNC_5 (TYPE_2__*,char*) ;
 int * FUNC_6 (TYPE_2__*,struct resource*) ;
 unsigned long FUNC_7 (unsigned long,unsigned int,unsigned int*) ;
 int FUNC_8 (struct device_node*,char*,unsigned int*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4,
    struct dfsdm_priv *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct resource *VAR_7;
 unsigned long VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_9(VAR_4, VAR_3, 0);
 if (!VAR_7) {
  FUNC_3(&VAR_4->dev, "Failed to get memory resource\n");
  return -VAR_1;
 }
 VAR_5->dfsdm.phys_base = VAR_7->start;
 VAR_5->dfsdm.base = FUNC_6(&VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_5->dfsdm.base))
  return FUNC_1(VAR_5->dfsdm.base);







 VAR_5->clk = FUNC_5(&VAR_4->dev, "dfsdm");
 if (FUNC_0(VAR_5->clk)) {
  VAR_12 = FUNC_1(VAR_5->clk);
  if (VAR_12 != -VAR_2)
   FUNC_3(&VAR_4->dev, "Failed to get clock (%d)\n", VAR_12);
  return VAR_12;
 }

 VAR_5->aclk = FUNC_5(&VAR_4->dev, "audio");
 if (FUNC_0(VAR_5->aclk))
  VAR_5->aclk = ((void*)0);

 if (VAR_5->aclk)
  VAR_8 = FUNC_2(VAR_5->aclk);
 else
  VAR_8 = FUNC_2(VAR_5->clk);


 VAR_12 = FUNC_8(VAR_4->dev.of_node, "spi-max-frequency",
       &VAR_10);
 if (VAR_12 < 0) {

  return 0;
 }

 VAR_9 = FUNC_7(VAR_8, VAR_10, &VAR_11);

 if (VAR_11)
  VAR_9++;


 if (VAR_9 < 2 || VAR_9 > 256) {
  FUNC_3(&VAR_4->dev, "spi-max-frequency not achievable\n");
  return -VAR_0;
 }


 VAR_5->spi_clk_out_div = VAR_9 - 1;
 VAR_5->dfsdm.spi_master_freq = VAR_8 / (VAR_5->spi_clk_out_div + 1);

 if (VAR_11) {
  FUNC_4(&VAR_4->dev, "SPI clock not accurate\n");
  FUNC_4(&VAR_4->dev, "%ld = %d * %d + %d\n",
    VAR_8, VAR_10, VAR_5->spi_clk_out_div + 1, VAR_11);
 }

 return 0;
}
