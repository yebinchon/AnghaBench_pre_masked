
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vlpi_lock; int vlpi_maps; int * vm; int nr_vlpis; } ;
struct its_device {TYPE_1__ event_map; int its; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct its_device* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct its_device*,int ) ;
 int FUNC_5 (struct its_device*,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct irq_data*,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct irq_data *VAR_4)
{
 struct its_device *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;

 FUNC_9(&VAR_5->event_map.vlpi_lock);

 if (!VAR_5->event_map.vm || !FUNC_2(VAR_4)) {
  VAR_7 = -VAR_0;
  goto out;
 }


 FUNC_4(VAR_5, VAR_6);


 FUNC_1(VAR_4);
 FUNC_5(VAR_5, VAR_4->hwirq, VAR_6);
 FUNC_8(VAR_4, 0xff, (VAR_1 |
        VAR_2 |
        VAR_3));


 FUNC_6(VAR_5->its, VAR_5->event_map.vm);





 if (!--VAR_5->event_map.nr_vlpis) {
  VAR_5->event_map.vm = ((void*)0);
  FUNC_7(VAR_5->event_map.vlpi_maps);
 }

out:
 FUNC_10(&VAR_5->event_map.vlpi_lock);
 return VAR_7;
}
