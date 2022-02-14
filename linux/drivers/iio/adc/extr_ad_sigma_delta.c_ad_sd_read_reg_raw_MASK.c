
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct spi_transfer {unsigned int* tx_buf; int len; unsigned int* rx_buf; scalar_t__ cs_change; } ;
struct spi_message {int dummy; } ;
struct ad_sigma_delta {unsigned int* data; unsigned int comm; int spi; scalar_t__ bus_locked; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int addr_shift; unsigned int read_mask; scalar_t__ has_registers; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct ad_sigma_delta *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2, uint8_t *VAR_3)
{
 uint8_t *VAR_4 = VAR_0->data;
 int VAR_5;
 struct spi_transfer VAR_6[] = {
  {
   .tx_buf = VAR_4,
   .len = 1,
  }, {
   .rx_buf = VAR_3,
   .len = VAR_2,
   .cs_change = VAR_0->bus_locked,
  },
 };
 struct spi_message VAR_7;

 FUNC_1(&VAR_7);

 if (VAR_0->info->has_registers) {
  VAR_4[0] = VAR_1 << VAR_0->info->addr_shift;
  VAR_4[0] |= VAR_0->info->read_mask;
  VAR_4[0] |= VAR_0->comm;
  FUNC_0(&VAR_6[0], &VAR_7);
 }
 FUNC_0(&VAR_6[1], &VAR_7);

 if (VAR_0->bus_locked)
  VAR_5 = FUNC_3(VAR_0->spi, &VAR_7);
 else
  VAR_5 = FUNC_2(VAR_0->spi, &VAR_7);

 return VAR_5;
}
