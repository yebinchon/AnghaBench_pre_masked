
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mcp3911 {TYPE_1__* spi; int dev_addr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct mcp3911 *VAR_0, u8 VAR_1, u32 *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_1 = FUNC_0(VAR_1, VAR_0->dev_addr);
 VAR_4 = FUNC_3(VAR_0->spi, &VAR_1, 1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_2);
 *VAR_2 >>= ((4 - VAR_3) * 8);
 FUNC_2(&VAR_0->spi->dev, "reading 0x%x from register 0x%x\n", *VAR_2,
  VAR_1 >> 1);
 return VAR_4;
}
