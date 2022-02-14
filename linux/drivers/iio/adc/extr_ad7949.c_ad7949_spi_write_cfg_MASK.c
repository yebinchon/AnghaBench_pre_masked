
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int* tx_buf; int len; int bits_per_word; } ;
struct spi_message {int dummy; } ;
struct ad7949_adc_chip {int buffer; int cfg; int spi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad7949_adc_chip*) ;
 int FUNC_1 (struct spi_message*,struct spi_transfer*,int) ;
 int FUNC_2 (int ,struct spi_message*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ad7949_adc_chip *VAR_1, u16 VAR_2,
    u16 VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_5 - VAR_0;
 struct spi_message VAR_7;
 struct spi_transfer VAR_8[] = {
  {
   .tx_buf = &VAR_1->buffer,
   .len = 4,
   .bits_per_word = VAR_5,
  },
 };

 VAR_1->cfg = (VAR_2 & VAR_3) | (VAR_1->cfg & ~VAR_3);
 VAR_1->buffer = VAR_1->cfg << VAR_6;
 FUNC_1(&VAR_7, VAR_8, 1);
 VAR_4 = FUNC_2(VAR_1->spi, &VAR_7);





 FUNC_3(2);
 return VAR_4;
}
