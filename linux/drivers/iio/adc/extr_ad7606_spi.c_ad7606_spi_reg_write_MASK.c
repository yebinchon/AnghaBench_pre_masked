
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct ad7606_state {int * d16; TYPE_1__* bops; int dev; } ;
struct TYPE_2__ {int (* rd_wr_cmd ) (unsigned int,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spi_device*,int *,int) ;
 int FUNC_2 (unsigned int,int) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ad7606_state *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_0->dev);

 VAR_0->d16[0] = FUNC_0((VAR_0->bops->rd_wr_cmd(VAR_1, 1) << 8) |
      (VAR_2 & 0x1FF));

 return FUNC_1(VAR_3, &VAR_0->d16[0], sizeof(VAR_0->d16[0]));
}
