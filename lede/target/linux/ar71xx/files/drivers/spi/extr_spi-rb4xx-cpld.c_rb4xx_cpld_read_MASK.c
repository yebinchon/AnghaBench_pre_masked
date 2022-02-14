
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {unsigned char const** tx_buf; int len; unsigned char* rx_buf; } ;
struct spi_message {int dummy; } ;
struct TYPE_2__ {int spi; } ;



 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

int FUNC_3(unsigned char *VAR_2, unsigned VAR_3)
{
 static const unsigned char VAR_4[2] = { 128, 0 };
 struct spi_transfer VAR_5[2] = {
  {
   .tx_buf = &VAR_4,
   .len = 2,
  }, {
   .rx_buf = VAR_2,
   .len = VAR_3,
  },
 };
 struct spi_message VAR_6;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_6);
 FUNC_0(&VAR_5[0], &VAR_6);
 FUNC_0(&VAR_5[1], &VAR_6);
 return FUNC_2(VAR_1->spi, &VAR_6);
}
