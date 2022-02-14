
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dfsdm_adc {unsigned long smask; int nconv; } ;
struct iio_dev {int dev; int masklength; } ;


 int FUNC_0 (unsigned long const*,int ) ;
 int FUNC_1 (int *,char*,int ,unsigned long const) ;
 struct stm32_dfsdm_adc* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
     const unsigned long *VAR_1)
{
 struct stm32_dfsdm_adc *VAR_2 = FUNC_2(VAR_0);

 VAR_2->nconv = FUNC_0(VAR_1, VAR_0->masklength);
 VAR_2->smask = *VAR_1;

 FUNC_1(&VAR_0->dev, "nconv=%d mask=%lx\n", VAR_2->nconv, *VAR_1);

 return 0;
}
