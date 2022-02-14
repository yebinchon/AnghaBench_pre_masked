
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_gpio_irq_controller {int dummy; } ;
struct irq_fwspec {int dummy; } ;
struct irq_domain {struct meson_gpio_irq_controller* host_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_domain*,unsigned int,unsigned long,int *,int *) ;
 int FUNC_2 (struct irq_domain*,unsigned int,int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct irq_domain*,struct irq_fwspec*,unsigned long*,unsigned int*) ;
 int FUNC_4 (struct meson_gpio_irq_controller*,int *) ;
 int FUNC_5 (struct meson_gpio_irq_controller*,unsigned long,int **) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static int FUNC_7(struct irq_domain *VAR_2,
           unsigned int VAR_3,
           unsigned int VAR_4,
           void *VAR_5)
{
 struct irq_fwspec *VAR_6 = VAR_5;
 struct meson_gpio_irq_controller *VAR_7 = VAR_2->host_data;
 unsigned long VAR_8;
 u32 *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_4 != 1))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_2, VAR_6, &VAR_8, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_5(VAR_7, VAR_8, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_2, VAR_3,
           *VAR_9, VAR_10);
 if (VAR_11 < 0) {
  FUNC_6("failed to allocate gic irq %u\n", *VAR_9);
  FUNC_4(VAR_7, VAR_9);
  return VAR_11;
 }

 FUNC_1(VAR_2, VAR_3, VAR_8,
          &VAR_1, VAR_9);

 return 0;
}
