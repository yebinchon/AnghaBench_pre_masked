
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {void const* tx_buf; size_t len; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0,
       const void *VAR_1, size_t VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = VAR_0;
 struct spi_device *VAR_6 = FUNC_3(VAR_5);
 struct spi_message VAR_7;
 struct spi_transfer VAR_8[2] = { { .tx_buf = VAR_1, .len = VAR_2, },
         { .tx_buf = VAR_3, .len = VAR_4, }, };

 FUNC_1(&VAR_7);
 FUNC_0(&VAR_8[0], &VAR_7);
 FUNC_0(&VAR_8[1], &VAR_7);

 return FUNC_2(VAR_6, &VAR_7);
}
