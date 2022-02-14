
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct atlas_data {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct atlas_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct atlas_data *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(&VAR_4->work);

 return VAR_0;
}
