
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct as3935_state {int work; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct as3935_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct as3935_state *VAR_4 = FUNC_0(VAR_3);






 FUNC_2(&VAR_4->work, FUNC_1(3));

 return VAR_0;
}
