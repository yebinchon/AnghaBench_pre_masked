
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30100_data {int lock; int buffer; int indio_dev; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct max30100_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct max30100_data*) ;
 int FUNC_3 (struct max30100_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct max30100_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5, VAR_6 = 0;

 FUNC_4(&VAR_4->lock);

 while (VAR_6 || (VAR_6 = FUNC_2(VAR_4)) > 0) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5)
   break;

  FUNC_1(VAR_4->indio_dev, VAR_4->buffer);
  VAR_6--;
 }

 FUNC_5(&VAR_4->lock);

 return VAR_0;
}
