
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct its_node {int dev_alloc_lock; } ;
struct TYPE_2__ {int col_map; int nr_lpis; int lpi_base; int lpi_map; } ;
struct its_device {TYPE_1__ event_map; int shared; struct its_node* its; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 struct its_device* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_5 (struct irq_domain*,unsigned int) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (struct its_device*) ;
 int FUNC_8 (struct irq_data*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct its_device*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct irq_domain *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_5(VAR_0, VAR_1);
 struct its_device *VAR_4 = FUNC_3(VAR_3);
 struct its_node *VAR_5 = VAR_4->its;
 int VAR_6;

 FUNC_1(VAR_4->event_map.lpi_map,
         FUNC_8(FUNC_5(VAR_0, VAR_1)),
         FUNC_2(VAR_2));

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct irq_data *VAR_7 = FUNC_5(VAR_0,
        VAR_1 + VAR_6);

  FUNC_6(VAR_7);
 }

 FUNC_12(&VAR_5->dev_alloc_lock);





 if (!VAR_4->shared &&
     FUNC_0(VAR_4->event_map.lpi_map,
    VAR_4->event_map.nr_lpis)) {
  FUNC_9(VAR_4->event_map.lpi_map,
        VAR_4->event_map.lpi_base,
        VAR_4->event_map.nr_lpis);
  FUNC_11(VAR_4->event_map.col_map);


  FUNC_10(VAR_4, 0);
  FUNC_7(VAR_4);
 }

 FUNC_13(&VAR_5->dev_alloc_lock);

 FUNC_4(VAR_0, VAR_1, VAR_2);
}
