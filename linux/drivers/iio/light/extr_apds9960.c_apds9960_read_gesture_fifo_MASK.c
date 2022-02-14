
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int gesture_mode_running; int lock; int buffer; int indio_dev; int regmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct apds9960_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct apds9960_data *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 FUNC_2(&VAR_1->lock);
 VAR_1->gesture_mode_running = 1;

 while (VAR_3 || (VAR_3 = FUNC_0(VAR_1) > 0)) {
  VAR_2 = FUNC_4(VAR_1->regmap, VAR_0,
          &VAR_1->buffer, 4);

  if (VAR_2)
   goto err_read;

  FUNC_1(VAR_1->indio_dev, VAR_1->buffer);
  VAR_3--;
 }

err_read:
 VAR_1->gesture_mode_running = 0;
 FUNC_3(&VAR_1->lock);
}
