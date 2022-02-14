
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int cb_buffer; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct lmp91000_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0)
{
 struct lmp91000_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cb_buffer);

 return 0;
}
