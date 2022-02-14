
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30102_data {int lock; int processed_buffer; int indio_dev; } ;
struct iio_dev {int masklength; int active_scan_mask; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 struct max30102_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct max30102_data*) ;
 int FUNC_4 (struct max30102_data*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct max30102_data *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = FUNC_0(VAR_3->active_scan_mask,
        VAR_3->masklength);
 int VAR_6, VAR_7 = 0;

 FUNC_5(&VAR_4->lock);

 while (VAR_7 || (VAR_7 = FUNC_3(VAR_4)) > 0) {
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6)
   break;

  FUNC_2(VAR_4->indio_dev, VAR_4->processed_buffer);
  VAR_7--;
 }

 FUNC_6(&VAR_4->lock);

 return VAR_0;
}
