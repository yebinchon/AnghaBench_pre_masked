
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_gicp {scalar_t__ spi_cnt; int spi_lock; int spi_bitmap; int dev; } ;
struct irq_domain {struct mvebu_gicp* host_data; } ;
struct irq_data {scalar_t__ hwirq; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 struct mvebu_gicp *VAR_3 = VAR_0->host_data;
 struct irq_data *VAR_4 = FUNC_3(VAR_0, VAR_1);

 if (VAR_4->hwirq >= VAR_3->spi_cnt) {
  FUNC_1(VAR_3->dev, "Invalid hwirq %lu\n", VAR_4->hwirq);
  return;
 }

 FUNC_2(VAR_0, VAR_1, VAR_2);

 FUNC_4(&VAR_3->spi_lock);
 FUNC_0(VAR_4->hwirq, VAR_3->spi_bitmap);
 FUNC_5(&VAR_3->spi_lock);
}
