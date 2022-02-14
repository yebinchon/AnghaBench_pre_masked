
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int * task; } ;
struct iio_dev {int dummy; } ;


 struct ina2xx_chip_info* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0)
{
 struct ina2xx_chip_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->task) {
  FUNC_1(VAR_1->task);
  FUNC_2(VAR_1->task);
  VAR_1->task = ((void*)0);
 }

 return 0;
}
