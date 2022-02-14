
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_xoadc {int complete; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pm8xxx_xoadc* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct pm8xxx_xoadc *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(&VAR_4->complete);

 return VAR_0;
}
