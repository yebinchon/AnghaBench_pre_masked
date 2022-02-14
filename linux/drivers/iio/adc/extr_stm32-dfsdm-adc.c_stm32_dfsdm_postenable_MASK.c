
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {scalar_t__ currentmode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->currentmode == VAR_0) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  goto err_predisable;

 return 0;

err_predisable:
 if (VAR_1->currentmode == VAR_0)
  FUNC_2(VAR_1);

 return VAR_2;
}
