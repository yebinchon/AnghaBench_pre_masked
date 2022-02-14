
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int* tx_buf; int len; int rx_buf; } ;
struct adc12138 {int* tx_buf; scalar_t__ id; int rx_buf; int spi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_2(struct adc12138 *VAR_1, u8 VAR_2,
         void *VAR_3, int VAR_4)
{
 struct spi_transfer VAR_5 = {
  .tx_buf = VAR_1->tx_buf,
  .rx_buf = VAR_1->rx_buf,
  .len = VAR_4,
 };
 int VAR_6;


 if (VAR_1->id != VAR_0)
  VAR_2 = (VAR_2 & 0xc0) | ((VAR_2 & 0x0f) << 2);

 VAR_1->tx_buf[0] = VAR_2;

 VAR_6 = FUNC_1(VAR_1->spi, &VAR_5, 1);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_3, VAR_1->rx_buf, VAR_4);

 return 0;
}
