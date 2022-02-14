
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct hts221_hw {struct iio_trigger* trig; } ;


 int VAR_0 ;
 struct hts221_hw* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
       struct iio_trigger *VAR_2)
{
 struct hts221_hw *VAR_3 = FUNC_0(VAR_1);

 return VAR_3->trig == VAR_2 ? 0 : -VAR_0;
}
