
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int txbuf ;
struct st7789v {int spi; } ;
struct spi_transfer {int* tx_buf; int bits_per_word; int len; } ;
struct spi_message {int dummy; } ;
typedef enum st7789v_prefix { ____Placeholder_st7789v_prefix } st7789v_prefix ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct st7789v *VAR_0, enum st7789v_prefix VAR_1,
        u8 VAR_2)
{
 struct spi_transfer VAR_3 = { };
 struct spi_message VAR_4;
 u16 VAR_5 = ((VAR_1 & 1) << 8) | VAR_2;

 FUNC_1(&VAR_4);

 VAR_3.tx_buf = &VAR_5;
 VAR_3.bits_per_word = 9;
 VAR_3.len = sizeof(VAR_5);

 FUNC_0(&VAR_3, &VAR_4);
 return FUNC_2(VAR_0->spi, &VAR_4);
}
