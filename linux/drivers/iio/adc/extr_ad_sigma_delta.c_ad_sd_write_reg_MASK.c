
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct spi_transfer {unsigned int* tx_buf; unsigned int len; int cs_change; } ;
struct spi_message {int dummy; } ;
struct ad_sigma_delta {unsigned int* data; unsigned int comm; int spi; scalar_t__ bus_locked; TYPE_1__* info; int keep_cs_asserted; } ;
struct TYPE_2__ {unsigned int addr_shift; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int*) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

int FUNC_5(struct ad_sigma_delta *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3, unsigned int VAR_4)
{
 uint8_t *VAR_5 = VAR_1->data;
 struct spi_transfer VAR_6 = {
  .tx_buf = VAR_5,
  .len = VAR_3 + 1,
  .cs_change = VAR_1->keep_cs_asserted,
 };
 struct spi_message VAR_7;
 int VAR_8;

 VAR_5[0] = (VAR_2 << VAR_1->info->addr_shift) | VAR_1->comm;

 switch (VAR_3) {
 case 3:
  VAR_5[1] = VAR_4 >> 16;
  VAR_5[2] = VAR_4 >> 8;
  VAR_5[3] = VAR_4;
  break;
 case 2:
  FUNC_0(VAR_4, &VAR_5[1]);
  break;
 case 1:
  VAR_5[1] = VAR_4;
  break;
 case 0:
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_7);
 FUNC_1(&VAR_6, &VAR_7);

 if (VAR_1->bus_locked)
  VAR_8 = FUNC_4(VAR_1->spi, &VAR_7);
 else
  VAR_8 = FUNC_3(VAR_1->spi, &VAR_7);

 return VAR_8;
}
