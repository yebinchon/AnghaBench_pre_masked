
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adis {int trig; TYPE_1__* spi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct adis *VAR_0)
{
 FUNC_2(VAR_0->trig);
 FUNC_0(VAR_0->spi->irq, VAR_0->trig);
 FUNC_1(VAR_0->trig);
}
