
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfer ;
typedef int u8 ;
typedef int u16 ;
struct td043mtea1_panel {TYPE_1__* spi; } ;
struct spi_transfer {int* tx_buf; int bits_per_word; int len; } ;
struct spi_message {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_3 (struct spi_message*) ;
 int FUNC_4 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int FUNC_5(struct td043mtea1_panel *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4;
 u16 VAR_5;
 int VAR_6;

 FUNC_3(&VAR_3);

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 VAR_5 = ((u16)VAR_1 << 10) | (1 << 8) | VAR_2;
 VAR_4.tx_buf = &VAR_5;
 VAR_4.bits_per_word = 16;
 VAR_4.len = 2;
 FUNC_2(&VAR_4, &VAR_3);

 VAR_6 = FUNC_4(VAR_0->spi, &VAR_3);
 if (VAR_6 < 0)
  FUNC_0(&VAR_0->spi->dev, "failed to write to LCD reg (%d)\n",
    VAR_6);

 return VAR_6;
}
