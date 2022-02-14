
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ad7314_data {int rx; TYPE_1__* spi_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ad7314_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->spi_dev, (u8 *)&VAR_0->rx, sizeof(VAR_0->rx));
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->spi_dev->dev, "SPI read error\n");
  return VAR_1;
 }

 return FUNC_0(VAR_0->rx);
}
