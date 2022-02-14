
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int len; int tx_buf; int * rx_buf; } ;
struct moxtet {int lock; int dev; int count; int tx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct spi_transfer*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct moxtet *VAR_0, u8 *VAR_1)
{
 struct spi_transfer VAR_2 = {
  .rx_buf = VAR_1,
  .tx_buf = VAR_0->tx,
  .len = VAR_0->count + 1
 };
 int VAR_3;

 FUNC_0(&VAR_0->lock);

 VAR_3 = FUNC_2(FUNC_3(VAR_0->dev), &VAR_2, 1);

 FUNC_1(&VAR_0->lock);

 return VAR_3;
}
