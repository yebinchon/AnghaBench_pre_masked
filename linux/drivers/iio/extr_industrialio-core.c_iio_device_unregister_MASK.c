
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int info_exist_lock; int * info; int dev; int chrdev; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct iio_dev *VAR_0)
{
 FUNC_0(&VAR_0->chrdev, &VAR_0->dev);

 FUNC_6(&VAR_0->info_exist_lock);

 FUNC_3(VAR_0);

 FUNC_5(VAR_0);

 VAR_0->info = ((void*)0);

 FUNC_4(VAR_0);
 FUNC_2(VAR_0);

 FUNC_7(&VAR_0->info_exist_lock);

 FUNC_1(VAR_0);
}
