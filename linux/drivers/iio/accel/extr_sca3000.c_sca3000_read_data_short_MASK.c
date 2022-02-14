
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int len; int rx_buf; int * tx_buf; } ;
struct sca3000_state {int us; int * tx; int rx; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_3(struct sca3000_state *VAR_0,
       u8 VAR_1,
       int VAR_2)
{
 struct spi_transfer VAR_3[2] = {
  {
   .len = 1,
   .tx_buf = VAR_0->tx,
  }, {
   .len = VAR_2,
   .rx_buf = VAR_0->rx,
  }
 };
 VAR_0->tx[0] = FUNC_1(VAR_1);

 return FUNC_2(VAR_0->us, VAR_3, FUNC_0(VAR_3));
}
