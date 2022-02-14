
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {int route_free; TYPE_2__* dev; } ;
struct lpc18xx_dmamux_data {TYPE_1__ dmarouter; int lock; int muxes; int dma_master_requests; int dma_mux_requests; int reg; } ;
struct lpc18xx_dmamux {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,int ,int,int ) ;
 struct lpc18xx_dmamux_data* FUNC_4 (TYPE_2__*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct device_node*,int ,TYPE_1__*) ;
 int FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*,char*,int ) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct platform_device*,struct lpc18xx_dmamux_data*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device_node *VAR_6, *VAR_7 = VAR_5->dev.of_node;
 struct lpc18xx_dmamux_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->reg = FUNC_11("nxp,lpc1850-creg");
 if (FUNC_0(VAR_8->reg)) {
  FUNC_2(&VAR_5->dev, "syscon lookup failed\n");
  return FUNC_1(VAR_8->reg);
 }

 VAR_9 = FUNC_8(VAR_7, "dma-requests",
       &VAR_8->dma_mux_requests);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "missing dma-requests property\n");
  return VAR_9;
 }

 VAR_6 = FUNC_7(VAR_7, "dma-masters", 0);
 if (!VAR_6) {
  FUNC_2(&VAR_5->dev, "can't get dma master\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_6, "dma-requests",
       &VAR_8->dma_master_requests);
 FUNC_6(VAR_6);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "missing master dma-requests property\n");
  return VAR_9;
 }

 VAR_8->muxes = FUNC_3(&VAR_5->dev, VAR_8->dma_master_requests,
         sizeof(struct lpc18xx_dmamux),
         VAR_2);
 if (!VAR_8->muxes)
  return -VAR_1;

 FUNC_10(&VAR_8->lock);
 FUNC_9(VAR_5, VAR_8);
 VAR_8->dmarouter.dev = &VAR_5->dev;
 VAR_8->dmarouter.route_free = VAR_3;

 return FUNC_5(VAR_7, VAR_4,
          &VAR_8->dmarouter);
}
