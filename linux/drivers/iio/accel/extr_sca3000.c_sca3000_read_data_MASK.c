
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct sca3000_state {TYPE_1__* us; int * tx; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_5(struct sca3000_state *VAR_0,
        u8 VAR_1,
        u8 *VAR_2,
        int VAR_3)
{
 int VAR_4;
 struct spi_transfer VAR_5[2] = {
  {
   .len = 1,
   .tx_buf = VAR_0->tx,
  }, {
   .len = VAR_3,
   .rx_buf = VAR_2,
  }
 };

 VAR_0->tx[0] = FUNC_1(VAR_1);
 VAR_4 = FUNC_4(VAR_0->us, VAR_5, FUNC_0(VAR_5));
 if (VAR_4) {
  FUNC_2(FUNC_3(&VAR_0->us->dev), "problem reading register");
  return VAR_4;
 }

 return 0;
}
