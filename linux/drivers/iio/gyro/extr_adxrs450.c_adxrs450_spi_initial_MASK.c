
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int bits_per_word; int len; int * rx_buf; int * tx_buf; } ;
struct adxrs450_state {int buf_lock; int rx; TYPE_1__* us; int tx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_6(struct adxrs450_state *VAR_3,
  u32 *VAR_4, char VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct spi_transfer VAR_8 = {
  .tx_buf = &VAR_3->tx,
  .rx_buf = &VAR_3->rx,
  .bits_per_word = 8,
  .len = sizeof(VAR_3->tx),
 };

 FUNC_3(&VAR_3->buf_lock);
 VAR_7 = VAR_2;
 if (VAR_5)
  VAR_7 |= (VAR_0 | VAR_1);
 VAR_3->tx = FUNC_1(VAR_7);
 VAR_6 = FUNC_5(VAR_3->us, &VAR_8, 1);
 if (VAR_6) {
  FUNC_2(&VAR_3->us->dev, "Problem while reading initializing data\n");
  goto error_ret;
 }

 *VAR_4 = FUNC_0(VAR_3->rx);

error_ret:
 FUNC_4(&VAR_3->buf_lock);
 return VAR_6;
}
