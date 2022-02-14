
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mvebu_gicp_spi_range {int dummy; } ;
struct mvebu_gicp {int spi_ranges_cnt; int spi_cnt; void* spi_bitmap; TYPE_1__* spi_ranges; int res; int spi_lock; TYPE_2__* dev; } ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {scalar_t__ count; scalar_t__ start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 void* FUNC_2 (TYPE_2__*,int,int,int ) ;
 struct mvebu_gicp* FUNC_3 (TYPE_2__*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct irq_domain* FUNC_4 (struct irq_domain*,int ,int ,int ,int *,struct mvebu_gicp*) ;
 int FUNC_5 (struct irq_domain*) ;
 struct irq_domain* FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,int,scalar_t__*) ;
 int FUNC_11 (struct platform_device*,int ,int ) ;
 struct irq_domain* FUNC_12 (int ,int *,struct irq_domain*) ;
 int FUNC_13 (struct platform_device*,struct mvebu_gicp*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct mvebu_gicp *VAR_7;
 struct irq_domain *VAR_8, *VAR_9, *VAR_10;
 struct device_node *VAR_11 = VAR_6->dev.of_node;
 struct device_node *VAR_12;
 int VAR_13, VAR_14;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_6->dev;
 FUNC_14(&VAR_7->spi_lock);

 VAR_7->res = FUNC_11(VAR_6, VAR_3, 0);
 if (!VAR_7->res)
  return -VAR_0;

 VAR_13 = FUNC_9(VAR_11, "marvell,spi-ranges");
 if (VAR_13 < 0)
  return VAR_13;

 VAR_7->spi_ranges_cnt = VAR_13 / 2;

 VAR_7->spi_ranges =
  FUNC_2(&VAR_6->dev,
        VAR_7->spi_ranges_cnt,
        sizeof(struct mvebu_gicp_spi_range),
        VAR_2);
 if (!VAR_7->spi_ranges)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_7->spi_ranges_cnt; VAR_14++) {
  FUNC_10(VAR_11, "marvell,spi-ranges",
        VAR_14 * 2,
        &VAR_7->spi_ranges[VAR_14].start);

  FUNC_10(VAR_11, "marvell,spi-ranges",
        VAR_14 * 2 + 1,
        &VAR_7->spi_ranges[VAR_14].count);

  VAR_7->spi_cnt += VAR_7->spi_ranges[VAR_14].count;
 }

 VAR_7->spi_bitmap = FUNC_2(&VAR_6->dev,
    FUNC_0(VAR_7->spi_cnt), sizeof(long),
    VAR_2);
 if (!VAR_7->spi_bitmap)
  return -VAR_1;

 VAR_12 = FUNC_7(VAR_11);
 if (!VAR_12) {
  FUNC_1(&VAR_6->dev, "failed to find parent IRQ node\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_12);
 if (!VAR_10) {
  FUNC_1(&VAR_6->dev, "failed to find parent IRQ domain\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_10, 0,
         VAR_7->spi_cnt,
         FUNC_8(VAR_11),
         &VAR_4, VAR_7);
 if (!VAR_8)
  return -VAR_1;


 VAR_9 = FUNC_12(FUNC_8(VAR_11),
           &VAR_5,
           VAR_8);
 if (!VAR_9) {
  FUNC_5(VAR_8);
  return -VAR_1;
 }

 FUNC_13(VAR_6, VAR_7);

 return 0;
}
