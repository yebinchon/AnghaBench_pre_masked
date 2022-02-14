
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvebu_gicp {unsigned int spi_cnt; int spi_lock; int spi_bitmap; int dev; } ;
struct irq_fwspec {int param_count; scalar_t__* param; int fwnode; } ;
struct irq_domain {TYPE_1__* parent; struct mvebu_gicp* host_data; } ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct mvebu_gicp*,unsigned int) ;
 int VAR_3 ;
 int FUNC_5 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 int FUNC_6 (struct irq_domain*,unsigned int,unsigned int) ;
 int FUNC_7 (struct irq_domain*,unsigned int,unsigned int,int *,struct mvebu_gicp*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct irq_domain *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6, void *VAR_7)
{
 struct mvebu_gicp *VAR_8 = VAR_4->host_data;
 struct irq_fwspec VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 FUNC_8(&VAR_8->spi_lock);
 VAR_10 = FUNC_3(VAR_8->spi_bitmap, VAR_8->spi_cnt);
 if (VAR_10 == VAR_8->spi_cnt) {
  FUNC_9(&VAR_8->spi_lock);
  return -VAR_0;
 }
 FUNC_1(VAR_10, VAR_8->spi_bitmap);
 FUNC_9(&VAR_8->spi_lock);

 VAR_9.fwnode = VAR_4->parent->fwnode;
 VAR_9.param_count = 3;
 VAR_9.param[0] = VAR_1;
 VAR_9.param[1] = FUNC_4(VAR_8, VAR_10) - 32;




 VAR_9.param[2] = VAR_2;

 VAR_11 = FUNC_5(VAR_4, VAR_5, 1, &VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_8->dev, "Cannot allocate parent IRQ\n");
  goto free_hwirq;
 }

 VAR_11 = FUNC_7(VAR_4, VAR_5, VAR_10,
         &VAR_3, VAR_8);
 if (VAR_11)
  goto free_irqs_parent;

 return 0;

free_irqs_parent:
 FUNC_6(VAR_4, VAR_5, VAR_6);
free_hwirq:
 FUNC_8(&VAR_8->spi_lock);
 FUNC_0(VAR_10, VAR_8->spi_bitmap);
 FUNC_9(&VAR_8->spi_lock);
 return VAR_11;
}
