
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk8312_data {int mode; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct stk8312_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct stk8312_data*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct stk8312_data *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2, VAR_2->mode & (~VAR_0));
}
