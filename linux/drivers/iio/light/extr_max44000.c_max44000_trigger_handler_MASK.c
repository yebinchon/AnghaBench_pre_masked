
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max44000_data {int lock; int regmap; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int active_scan_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*) ;
 struct max44000_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct max44000_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_4, void *VAR_5)
{
 struct iio_poll_func *VAR_6 = VAR_5;
 struct iio_dev *VAR_7 = VAR_6->indio_dev;
 struct max44000_data *VAR_8 = FUNC_1(VAR_7);
 u16 VAR_9[8];
 int VAR_10 = 0;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_5(&VAR_8->lock);
 if (FUNC_8(VAR_2, VAR_7->active_scan_mask)) {
  VAR_12 = FUNC_4(VAR_8);
  if (VAR_12 < 0)
   goto out_unlock;
  VAR_9[VAR_10++] = VAR_12;
 }
 if (FUNC_8(VAR_3, VAR_7->active_scan_mask)) {
  VAR_12 = FUNC_7(VAR_8->regmap, VAR_1, &VAR_11);
  if (VAR_12 < 0)
   goto out_unlock;
  VAR_9[VAR_10] = VAR_11;
 }
 FUNC_6(&VAR_8->lock);

 FUNC_2(VAR_7, VAR_9,
        FUNC_0(VAR_7));
 FUNC_3(VAR_7->trig);
 return VAR_0;

out_unlock:
 FUNC_6(&VAR_8->lock);
 FUNC_3(VAR_7->trig);
 return VAR_0;
}
