
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int t ;
struct tpg110 {int dev; int spi; } ;
struct spi_transfer {int bits_per_word; int* tx_buf; int len; int* rx_buf; } ;
struct spi_message {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static u8 FUNC_5(struct tpg110 *VAR_0, bool VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 struct spi_message VAR_4;
 struct spi_transfer VAR_5[2];
 u8 VAR_6[2];
 int VAR_7;

 FUNC_3(&VAR_4);
 FUNC_1(VAR_5, 0, sizeof(VAR_5));

 if (VAR_1) {





  VAR_6[0] = VAR_2 << 2;
  VAR_6[0] &= ~0x03;
  VAR_6[1] = VAR_3;

  VAR_5[0].bits_per_word = 8;
  VAR_5[0].tx_buf = &VAR_6[0];
  VAR_5[0].len = 1;

  VAR_5[1].tx_buf = &VAR_6[1];
  VAR_5[1].len = 1;
  VAR_5[1].bits_per_word = 8;
 } else {

  VAR_6[0] = VAR_2 << 1;
  VAR_6[0] |= 0x01;






  VAR_5[0].bits_per_word = 7;
  VAR_5[0].tx_buf = &VAR_6[0];
  VAR_5[0].len = 1;

  VAR_5[1].rx_buf = &VAR_6[1];
  VAR_5[1].len = 1;
  VAR_5[1].bits_per_word = 8;
 }

 FUNC_2(&VAR_5[0], &VAR_4);
 FUNC_2(&VAR_5[1], &VAR_4);
 VAR_7 = FUNC_4(VAR_0->spi, &VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_0->dev, "SPI message error %d\n", VAR_7);
  return VAR_7;
 }
 if (VAR_1)
  return 0;

 return VAR_6[1];
}
