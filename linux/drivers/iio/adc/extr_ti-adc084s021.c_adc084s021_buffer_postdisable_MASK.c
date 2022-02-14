
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct adc084s021 {int reg; TYPE_1__ spi_trans; } ;


 struct adc084s021* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0)
{
 struct adc084s021 *VAR_1 = FUNC_0(VAR_0);

 VAR_1->spi_trans.len = 4;

 return FUNC_1(VAR_1->reg);
}
