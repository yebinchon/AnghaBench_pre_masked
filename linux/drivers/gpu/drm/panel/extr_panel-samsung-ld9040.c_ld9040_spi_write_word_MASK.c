
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct ld9040 {int dev; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ld9040 *VAR_0, u16 VAR_1)
{
 struct spi_device *VAR_2 = FUNC_3(VAR_0->dev);
 struct spi_transfer VAR_3 = {
  .len = 2,
  .tx_buf = &VAR_1,
 };
 struct spi_message VAR_4;

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_3, &VAR_4);

 return FUNC_2(VAR_2, &VAR_4);
}
