
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7766 {int reg; int mclk; int pd_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct ad7766* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_0)
{
 struct ad7766 *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->pd_gpio, 1);





 FUNC_4(20);

 FUNC_1(VAR_1->mclk);
 FUNC_5(FUNC_0(VAR_1->reg), VAR_1->reg);

 return 0;
}
