
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
 int FUNC_3 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct mcp3911 *VAR_0, u8 VAR_1, u32 VAR_2, u8 VAR_3)
{
 FUNC_2(&VAR_0->spi->dev, "writing 0x%x to register 0x%x\n", VAR_2, VAR_1);

 VAR_2 <<= (3 - VAR_3) * 8;
 FUNC_1(&VAR_2);
 VAR_2 |= FUNC_0(VAR_1, VAR_0->dev_addr);

 return FUNC_3(VAR_0->spi, &VAR_2, VAR_3 + 1);
}
