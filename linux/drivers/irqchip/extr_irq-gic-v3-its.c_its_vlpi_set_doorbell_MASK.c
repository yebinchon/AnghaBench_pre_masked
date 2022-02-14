
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {TYPE_1__* vlpi_maps; } ;
struct its_device {TYPE_2__ event_map; } ;
struct irq_data {int dummy; } ;
struct TYPE_3__ {int db_enabled; } ;


 struct its_device* FUNC_0 (struct irq_data*) ;
 size_t FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct its_device*,size_t) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0, bool VAR_1)
{
 struct its_device *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_0);

 if (VAR_2->event_map.vlpi_maps[VAR_3].db_enabled == VAR_1)
  return;

 VAR_2->event_map.vlpi_maps[VAR_3].db_enabled = VAR_1;
 FUNC_2(VAR_2, VAR_3);
}
