
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap_irq_chip_data {int clear_status; int irq_reg_stride; int type_reg_stride; int wake_count; int lock; int irq; TYPE_1__* chip; struct regmap* map; int * type_buf; int * type_buf_def; int * mask_buf; int * wake_buf; int * mask_buf_def; } ;
struct regmap {int reg_stride; int dev; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int num_regs; int status_base; int mask_base; int unmask_base; int wake_base; int ack_base; int num_type_reg; int type_base; scalar_t__ runtime_pm; scalar_t__ type_invert; int type_in_mask; scalar_t__ ack_invert; scalar_t__ use_ack; int init_ack_masked; scalar_t__ wake_invert; scalar_t__ mask_invert; } ;


 int FUNC_0 (int ,char*,...) ;
 struct regmap_irq_chip_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct regmap_irq_chip_data*,int,int ,int ) ;
 int FUNC_7 (struct regmap*,int,int*) ;
 int FUNC_8 (struct regmap*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_0)
{
 struct regmap_irq_chip_data *VAR_1 = FUNC_1(VAR_0);
 struct regmap *VAR_2 = VAR_1->map;
 int VAR_3, VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_1->chip->runtime_pm) {
  VAR_4 = FUNC_4(VAR_2->dev);
  if (VAR_4 < 0)
   FUNC_0(VAR_2->dev, "IRQ sync failed to resume: %d\n",
    VAR_4);
 }

 if (VAR_1->clear_status) {
  for (VAR_3 = 0; VAR_3 < VAR_1->chip->num_regs; VAR_3++) {
   VAR_5 = VAR_1->chip->status_base +
    (VAR_3 * VAR_2->reg_stride * VAR_1->irq_reg_stride);

   VAR_4 = FUNC_7(VAR_2, VAR_5, &VAR_7);
   if (VAR_4)
    FUNC_0(VAR_1->map->dev,
     "Failed to clear the interrupt status bits\n");
  }

  VAR_1->clear_status = 0;
 }






 for (VAR_3 = 0; VAR_3 < VAR_1->chip->num_regs; VAR_3++) {
  if (!VAR_1->chip->mask_base)
   continue;

  VAR_5 = VAR_1->chip->mask_base +
   (VAR_3 * VAR_2->reg_stride * VAR_1->irq_reg_stride);
  if (VAR_1->chip->mask_invert) {
   VAR_4 = FUNC_6(VAR_1, VAR_5,
      VAR_1->mask_buf_def[VAR_3], ~VAR_1->mask_buf[VAR_3]);
  } else if (VAR_1->chip->unmask_base) {

   VAR_4 = FUNC_6(VAR_1, VAR_5,
     VAR_1->mask_buf_def[VAR_3], ~VAR_1->mask_buf[VAR_3]);
   if (VAR_4 < 0)
    FUNC_0(VAR_1->map->dev,
     "Failed to sync unmasks in %x\n",
     VAR_5);
   VAR_6 = VAR_1->chip->unmask_base -
       VAR_1->chip->mask_base;

   VAR_4 = FUNC_6(VAR_1,
     VAR_5 + VAR_6,
     VAR_1->mask_buf_def[VAR_3],
     VAR_1->mask_buf[VAR_3]);
  } else {
   VAR_4 = FUNC_6(VAR_1, VAR_5,
      VAR_1->mask_buf_def[VAR_3], VAR_1->mask_buf[VAR_3]);
  }
  if (VAR_4 != 0)
   FUNC_0(VAR_1->map->dev, "Failed to sync masks in %x\n",
    VAR_5);

  VAR_5 = VAR_1->chip->wake_base +
   (VAR_3 * VAR_2->reg_stride * VAR_1->irq_reg_stride);
  if (VAR_1->wake_buf) {
   if (VAR_1->chip->wake_invert)
    VAR_4 = FUNC_6(VAR_1, VAR_5,
        VAR_1->mask_buf_def[VAR_3],
        ~VAR_1->wake_buf[VAR_3]);
   else
    VAR_4 = FUNC_6(VAR_1, VAR_5,
        VAR_1->mask_buf_def[VAR_3],
        VAR_1->wake_buf[VAR_3]);
   if (VAR_4 != 0)
    FUNC_0(VAR_1->map->dev,
     "Failed to sync wakes in %x: %d\n",
     VAR_5, VAR_4);
  }

  if (!VAR_1->chip->init_ack_masked)
   continue;





  if (VAR_1->mask_buf[VAR_3] && (VAR_1->chip->ack_base || VAR_1->chip->use_ack)) {
   VAR_5 = VAR_1->chip->ack_base +
    (VAR_3 * VAR_2->reg_stride * VAR_1->irq_reg_stride);

   if (VAR_1->chip->ack_invert)
    VAR_4 = FUNC_8(VAR_2, VAR_5, ~VAR_1->mask_buf[VAR_3]);
   else
    VAR_4 = FUNC_8(VAR_2, VAR_5, VAR_1->mask_buf[VAR_3]);
   if (VAR_4 != 0)
    FUNC_0(VAR_1->map->dev, "Failed to ack 0x%x: %d\n",
     VAR_5, VAR_4);
  }
 }


 if (!VAR_1->chip->type_in_mask) {
  for (VAR_3 = 0; VAR_3 < VAR_1->chip->num_type_reg; VAR_3++) {
   if (!VAR_1->type_buf_def[VAR_3])
    continue;
   VAR_5 = VAR_1->chip->type_base +
    (VAR_3 * VAR_2->reg_stride * VAR_1->type_reg_stride);
   if (VAR_1->chip->type_invert)
    VAR_4 = FUNC_6(VAR_1, VAR_5,
     VAR_1->type_buf_def[VAR_3], ~VAR_1->type_buf[VAR_3]);
   else
    VAR_4 = FUNC_6(VAR_1, VAR_5,
     VAR_1->type_buf_def[VAR_3], VAR_1->type_buf[VAR_3]);
   if (VAR_4 != 0)
    FUNC_0(VAR_1->map->dev, "Failed to sync type in %x\n",
     VAR_5);
  }
 }

 if (VAR_1->chip->runtime_pm)
  FUNC_5(VAR_2->dev);


 if (VAR_1->wake_count < 0)
  for (VAR_3 = VAR_1->wake_count; VAR_3 < 0; VAR_3++)
   FUNC_2(VAR_1->irq, 0);
 else if (VAR_1->wake_count > 0)
  for (VAR_3 = 0; VAR_3 < VAR_1->wake_count; VAR_3++)
   FUNC_2(VAR_1->irq, 1);

 VAR_1->wake_count = 0;

 FUNC_3(&VAR_1->lock);
}
