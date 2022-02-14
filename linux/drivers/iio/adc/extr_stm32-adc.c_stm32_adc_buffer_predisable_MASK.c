
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;


 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  FUNC_1(&VAR_0->dev, "predisable failed\n");

 return VAR_1;
}
