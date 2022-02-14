
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_dfsdm_adc {unsigned int nconv; void* buf_sz; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct stm32_dfsdm_adc* FUNC_0 (struct iio_dev*) ;
 void* FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
         unsigned int VAR_2)
{
 struct stm32_dfsdm_adc *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = VAR_0 / 2;
 unsigned int VAR_5 = VAR_0;







 VAR_4 = FUNC_1(VAR_4, VAR_2 * (unsigned int)(sizeof(u32)));
 VAR_3->buf_sz = FUNC_1(VAR_5, VAR_4 * 2 * VAR_3->nconv);

 return 0;
}
