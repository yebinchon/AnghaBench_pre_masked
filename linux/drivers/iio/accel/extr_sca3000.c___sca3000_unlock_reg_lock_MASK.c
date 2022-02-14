
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int cs_change; int* tx_buf; } ;
struct sca3000_state {int* tx; int us; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_3(struct sca3000_state *VAR_1)
{
 struct spi_transfer VAR_2[3] = {
  {
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_1->tx,
  }, {
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_1->tx + 2,
  }, {
   .len = 2,
   .tx_buf = VAR_1->tx + 4,
  },
 };
 VAR_1->tx[0] = FUNC_1(VAR_0);
 VAR_1->tx[1] = 0x00;
 VAR_1->tx[2] = FUNC_1(VAR_0);
 VAR_1->tx[3] = 0x50;
 VAR_1->tx[4] = FUNC_1(VAR_0);
 VAR_1->tx[5] = 0xA0;

 return FUNC_2(VAR_1->us, VAR_2, FUNC_0(VAR_2));
}
