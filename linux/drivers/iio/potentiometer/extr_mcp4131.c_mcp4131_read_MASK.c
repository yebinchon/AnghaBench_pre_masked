
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {void* tx_buf; void* rx_buf; size_t len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct spi_transfer VAR_3 = {
  .tx_buf = VAR_1,
  .rx_buf = VAR_1,
  .len = VAR_2,
 };
 struct spi_message VAR_4;

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_3, &VAR_4);

 return FUNC_2(VAR_0, &VAR_4);
}
