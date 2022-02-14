
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma {int err_irq; TYPE_1__* chan; void* csr_efuse; void* csr_ring_cmd; void* csr_ring; void* csr_dma; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int rx_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct platform_device*,int) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5,
       struct xgene_dma *VAR_6)
{
 struct resource *VAR_7;
 int VAR_8, VAR_9;


 VAR_7 = FUNC_3(VAR_5, VAR_2, 0);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "Failed to get csr region\n");
  return -VAR_1;
 }

 VAR_6->csr_dma = FUNC_1(&VAR_5->dev, VAR_7->start,
         FUNC_4(VAR_7));
 if (!VAR_6->csr_dma) {
  FUNC_0(&VAR_5->dev, "Failed to ioremap csr region");
  return -VAR_0;
 }


 VAR_7 = FUNC_3(VAR_5, VAR_2, 1);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "Failed to get ring csr region\n");
  return -VAR_1;
 }

 VAR_6->csr_ring = FUNC_1(&VAR_5->dev, VAR_7->start,
           FUNC_4(VAR_7));
 if (!VAR_6->csr_ring) {
  FUNC_0(&VAR_5->dev, "Failed to ioremap ring csr region");
  return -VAR_0;
 }


 VAR_7 = FUNC_3(VAR_5, VAR_2, 2);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "Failed to get ring cmd csr region\n");
  return -VAR_1;
 }

 VAR_6->csr_ring_cmd = FUNC_1(&VAR_5->dev, VAR_7->start,
       FUNC_4(VAR_7));
 if (!VAR_6->csr_ring_cmd) {
  FUNC_0(&VAR_5->dev, "Failed to ioremap ring cmd csr region");
  return -VAR_0;
 }

 VAR_6->csr_ring_cmd += VAR_4;


 VAR_7 = FUNC_3(VAR_5, VAR_2, 3);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev, "Failed to get efuse csr region\n");
  return -VAR_1;
 }

 VAR_6->csr_efuse = FUNC_1(&VAR_5->dev, VAR_7->start,
           FUNC_4(VAR_7));
 if (!VAR_6->csr_efuse) {
  FUNC_0(&VAR_5->dev, "Failed to ioremap efuse csr region");
  return -VAR_0;
 }


 VAR_8 = FUNC_2(VAR_5, 0);
 if (VAR_8 <= 0)
  return -VAR_1;

 VAR_6->err_irq = VAR_8;


 for (VAR_9 = 1; VAR_9 <= VAR_3; VAR_9++) {
  VAR_8 = FUNC_2(VAR_5, VAR_9);
  if (VAR_8 <= 0)
   return -VAR_1;

  VAR_6->chan[VAR_9 - 1].rx_irq = VAR_8;
 }

 return 0;
}
