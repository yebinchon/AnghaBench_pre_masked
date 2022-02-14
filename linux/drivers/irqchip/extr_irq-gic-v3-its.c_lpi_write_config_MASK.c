
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct its_vlpi_map {int vintid; int properties; } ;
struct TYPE_5__ {struct its_vlpi_map* vlpi_maps; TYPE_1__* vm; } ;
struct its_device {TYPE_2__ event_map; } ;
struct irq_data {int hwirq; } ;
typedef int irq_hw_number_t ;
struct TYPE_6__ {int flags; void* prop_table_va; } ;
struct TYPE_4__ {int vprop_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int) ;
 TYPE_3__* VAR_2 ;
 struct its_device* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (struct irq_data*) ;
 int VAR_3 ;
 size_t FUNC_4 (struct irq_data*) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_4, u8 VAR_5, u8 VAR_6)
{
 irq_hw_number_t VAR_7;
 void *VAR_8;
 u8 *VAR_9;

 if (FUNC_3(VAR_4)) {
  struct its_device *VAR_10 = FUNC_2(VAR_4);
  u32 VAR_11 = FUNC_4(VAR_4);
  struct its_vlpi_map *VAR_12;

  VAR_8 = FUNC_5(VAR_10->event_map.vm->vprop_page);
  VAR_12 = &VAR_10->event_map.vlpi_maps[VAR_11];
  VAR_7 = VAR_12->vintid;


  VAR_12->properties &= ~VAR_5;
  VAR_12->properties |= VAR_6 | VAR_0;
 } else {
  VAR_8 = VAR_2->prop_table_va;
  VAR_7 = VAR_4->hwirq;
 }

 VAR_9 = VAR_8 + VAR_7 - 8192;
 *VAR_9 &= ~VAR_5;
 *VAR_9 |= VAR_6 | VAR_0;






 if (VAR_2->flags & VAR_1)
  FUNC_1(VAR_9, sizeof(*VAR_9));
 else
  FUNC_0(VAR_3);
}
