
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct odmi_data {int spi_base; } ;
struct irq_fwspec {int param_count; int* param; int fwnode; } ;
struct irq_domain {TYPE_2__* parent; } ;
struct irq_data {TYPE_1__* chip; } ;
struct TYPE_4__ {int fwnode; } ;
struct TYPE_3__ {int (* irq_set_type ) (struct irq_data*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct irq_domain*,unsigned int,int,struct irq_fwspec*) ;
 struct irq_data* FUNC_4 (TYPE_2__*,unsigned int) ;
 int FUNC_5 (struct irq_domain*,unsigned int,unsigned int,int *,int *) ;
 int VAR_6 ;
 struct odmi_data* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct irq_data*,int) ;

__attribute__((used)) static int FUNC_10(struct irq_domain *VAR_11, unsigned int VAR_12,
     unsigned int VAR_13, void *VAR_14)
{
 struct odmi_data *VAR_15 = ((void*)0);
 struct irq_fwspec VAR_16;
 struct irq_data *VAR_17;
 unsigned int VAR_18, VAR_19;
 int VAR_20;

 FUNC_7(&VAR_9);
 VAR_18 = FUNC_2(VAR_8, VAR_4 * VAR_10);
 if (VAR_18 >= VAR_4 * VAR_10) {
  FUNC_8(&VAR_9);
  return -VAR_0;
 }

 FUNC_1(VAR_18, VAR_8);
 FUNC_8(&VAR_9);

 VAR_15 = &VAR_7[VAR_18 >> VAR_5];
 VAR_19 = VAR_18 & VAR_3;

 VAR_16.fwnode = VAR_11->parent->fwnode;
 VAR_16.param_count = 3;
 VAR_16.param[0] = VAR_1;
 VAR_16.param[1] = VAR_15->spi_base - 32 + VAR_19;
 VAR_16.param[2] = VAR_2;

 VAR_20 = FUNC_3(VAR_11, VAR_12, 1, &VAR_16);
 if (VAR_20) {
  FUNC_6("Cannot allocate parent IRQ\n");
  FUNC_7(&VAR_9);
  FUNC_0(VAR_19, VAR_8);
  FUNC_8(&VAR_9);
  return VAR_20;
 }


 VAR_17 = FUNC_4(VAR_11->parent, VAR_12);
 VAR_17->chip->irq_set_type(VAR_17, VAR_2);

 FUNC_5(VAR_11, VAR_12, VAR_18,
          &VAR_6, ((void*)0));

 return 0;
}
