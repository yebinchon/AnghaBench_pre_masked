
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads7846 {TYPE_1__* spi; int reg; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ads7846*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ads7846 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0->reg);
 if (VAR_1 != 0)
  FUNC_1(&VAR_0->spi->dev, "Failed to enable supply: %d\n", VAR_1);

 FUNC_0(VAR_0);
}
