
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int len; int * rx_buf; int cs_change; int * tx_buf; } ;
struct spi_device {int dummy; } ;
struct ad7606_state {int * d16; TYPE_1__* bops; int dev; } ;
struct TYPE_2__ {int (* rd_wr_cmd ) (unsigned int,int ) ;} ;


 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct spi_device*,struct spi_transfer*,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 struct spi_device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ad7606_state *VAR_0, unsigned int VAR_1)
{
 struct spi_device *VAR_2 = FUNC_5(VAR_0->dev);
 struct spi_transfer VAR_3[] = {
  {
   .tx_buf = &VAR_0->d16[0],
   .len = 2,
   .cs_change = 0,
  }, {
   .rx_buf = &VAR_0->d16[1],
   .len = 2,
  },
 };
 int VAR_4;

 VAR_0->d16[0] = FUNC_2(VAR_0->bops->rd_wr_cmd(VAR_1, 0) << 8);

 VAR_4 = FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_0->d16[1]);
}
