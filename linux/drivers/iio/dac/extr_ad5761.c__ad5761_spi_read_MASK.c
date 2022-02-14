
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct ad5761_state {TYPE_1__* data; int spi; } ;
struct TYPE_2__ {void* d32; int * d8; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct spi_transfer*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_5(struct ad5761_state *VAR_1, u8 VAR_2, u16 *VAR_3)
{
 int VAR_4;
 struct spi_transfer VAR_5[] = {
  {
   .tx_buf = &VAR_1->data[0].d8[1],
   .bits_per_word = 8,
   .len = 3,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_1->data[1].d8[1],
   .rx_buf = &VAR_1->data[2].d8[1],
   .bits_per_word = 8,
   .len = 3,
  },
 };

 VAR_1->data[0].d32 = FUNC_3(FUNC_0(VAR_2));
 VAR_1->data[1].d32 = FUNC_3(FUNC_0(VAR_0));

 VAR_4 = FUNC_4(VAR_1->spi, VAR_5, FUNC_1(VAR_5));

 *VAR_3 = FUNC_2(VAR_1->data[2].d32);

 return VAR_4;
}
