
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int* rx_buf; int len; int bits_per_word; } ;
struct spi_message {int dummy; } ;
struct ad7949_adc_chip {int buffer; unsigned int current_channel; int spi; int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ad7949_adc_chip*) ;
 scalar_t__ FUNC_2 (struct ad7949_adc_chip*) ;
 int FUNC_3 (struct ad7949_adc_chip*,unsigned int,int ) ;
 int FUNC_4 (struct spi_message*,struct spi_transfer*,int) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ad7949_adc_chip *VAR_3, int *VAR_4,
       unsigned int VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_3);
 int VAR_8 = FUNC_0(VAR_3->resolution, 0);
 struct spi_message VAR_9;
 struct spi_transfer VAR_10[] = {
  {
   .rx_buf = &VAR_3->buffer,
   .len = 4,
   .bits_per_word = VAR_7,
  },
 };

 VAR_6 = FUNC_3(VAR_3,
       VAR_5 << VAR_2,
       VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_3->buffer = 0;
 FUNC_4(&VAR_9, VAR_10, 1);
 VAR_6 = FUNC_5(VAR_3->spi, &VAR_9);
 if (VAR_6)
  return VAR_6;





 FUNC_6(2);

 VAR_3->current_channel = VAR_5;

 if (FUNC_2(VAR_3))
  *VAR_4 = (VAR_3->buffer >> VAR_0) & VAR_8;
 else
  *VAR_4 = VAR_3->buffer & VAR_8;

 return 0;
}
