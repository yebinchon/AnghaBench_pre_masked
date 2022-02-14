
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct hdc100x_data {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdc100x_data*,int ,int ) ;
 struct hdc100x_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1)
{
 struct hdc100x_data *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_2, VAR_0,
        VAR_0);
 FUNC_4(&VAR_2->lock);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_1);
}
