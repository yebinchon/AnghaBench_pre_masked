
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct ad5504_state {int * data; int spi; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_4(struct ad5504_state *VAR_2, u8 VAR_3)
{
 int VAR_4;
 struct spi_transfer VAR_5 = {
     .tx_buf = &VAR_2->data[0],
     .rx_buf = &VAR_2->data[1],
     .len = 2,
 };

 VAR_2->data[0] = FUNC_2(VAR_0 | FUNC_0(VAR_3));
 VAR_4 = FUNC_3(VAR_2->spi, &VAR_5, 1);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_2->data[1]) & VAR_1;
}
