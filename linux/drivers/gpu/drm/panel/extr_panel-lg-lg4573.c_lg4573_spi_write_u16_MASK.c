
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spi_transfer {int len; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct lg4573 {int spi; TYPE_1__ panel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_5(struct lg4573 *VAR_0, u16 VAR_1)
{
 struct spi_transfer VAR_2 = {
  .len = 2,
 };
 u16 VAR_3 = FUNC_0(VAR_1);
 struct spi_message VAR_4;

 FUNC_1(VAR_0->panel.dev, "writing data: %x\n", VAR_1);
 VAR_2.tx_buf = &VAR_3;
 FUNC_3(&VAR_4);
 FUNC_2(&VAR_2, &VAR_4);

 return FUNC_4(VAR_0->spi, &VAR_4);
}
