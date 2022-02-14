
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int vlpi_lock; TYPE_1__* vlpi_maps; int vm; } ;
struct its_device {TYPE_2__ event_map; } ;
struct its_cmd_info {TYPE_1__* map; } ;
struct irq_data {int dummy; } ;
struct TYPE_3__ {int vm; } ;


 int VAR_0 ;
 struct its_device* FUNC_0 (struct irq_data*) ;
 size_t FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1, struct its_cmd_info *VAR_2)
{
 struct its_device *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = 0;

 FUNC_2(&VAR_3->event_map.vlpi_lock);

 if (!VAR_3->event_map.vm ||
     !VAR_3->event_map.vlpi_maps[VAR_4].vm) {
  VAR_5 = -VAR_0;
  goto out;
 }


 *VAR_2->map = VAR_3->event_map.vlpi_maps[VAR_4];

out:
 FUNC_3(&VAR_3->event_map.vlpi_lock);
 return VAR_5;
}
