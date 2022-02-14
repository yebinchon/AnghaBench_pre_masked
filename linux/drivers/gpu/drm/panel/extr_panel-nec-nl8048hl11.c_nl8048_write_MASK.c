
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct nl8048_panel {TYPE_1__* spi; } ;
typedef int data ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,unsigned char,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct nl8048_panel *VAR_0, unsigned char VAR_1,
   unsigned char VAR_2)
{
 u8 VAR_3[4] = { VAR_2, 0x01, VAR_1, 0x00 };
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->spi, VAR_3, sizeof(VAR_3));
 if (VAR_4)
  FUNC_0(&VAR_0->spi->dev, "SPI write to %u failed: %d\n",
   VAR_1, VAR_4);

 return VAR_4;
}
