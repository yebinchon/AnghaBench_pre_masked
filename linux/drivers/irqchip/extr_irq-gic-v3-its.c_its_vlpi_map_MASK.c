
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct its_vlpi_map {scalar_t__ vm; int properties; } ;
struct TYPE_2__ {scalar_t__ vm; int vlpi_lock; int nr_vlpis; struct its_vlpi_map* vlpi_maps; int nr_lpis; } ;
struct its_device {TYPE_1__ event_map; int its; } ;
struct its_cmd_info {struct its_vlpi_map* map; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct its_device* FUNC_0 (struct irq_data*) ;
 scalar_t__ FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 size_t FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct its_device*,size_t) ;
 int FUNC_6 (struct its_device*,size_t) ;
 int FUNC_7 (struct its_device*,size_t) ;
 struct its_vlpi_map* FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct irq_data*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct irq_data *VAR_3, struct its_cmd_info *VAR_4)
{
 struct its_device *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0;

 if (!VAR_4->map)
  return -VAR_0;

 FUNC_10(&VAR_5->event_map.vlpi_lock);

 if (!VAR_5->event_map.vm) {
  struct its_vlpi_map *VAR_8;

  VAR_8 = FUNC_8(VAR_5->event_map.nr_lpis, sizeof(*VAR_8),
          VAR_2);
  if (!VAR_8) {
   VAR_7 = -VAR_1;
   goto out;
  }

  VAR_5->event_map.vm = VAR_4->map->vm;
  VAR_5->event_map.vlpi_maps = VAR_8;
 } else if (VAR_5->event_map.vm != VAR_4->map->vm) {
  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_5->event_map.vlpi_maps[VAR_6] = *VAR_4->map;

 if (FUNC_1(VAR_3)) {

  FUNC_7(VAR_5, VAR_6);
 } else {

  FUNC_4(VAR_5->its, VAR_4->map->vm);





  FUNC_2(VAR_3);


  FUNC_9(VAR_3, 0xff, VAR_4->map->properties);


  FUNC_5(VAR_5, VAR_6);


  FUNC_6(VAR_5, VAR_6);


  VAR_5->event_map.nr_vlpis++;
 }

out:
 FUNC_11(&VAR_5->event_map.vlpi_lock);
 return VAR_7;
}
