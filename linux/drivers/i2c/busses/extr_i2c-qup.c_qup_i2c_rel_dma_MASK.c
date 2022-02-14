
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dma; } ;
struct TYPE_3__ {int * dma; } ;
struct qup_i2c_dev {TYPE_2__ brx; TYPE_1__ btx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qup_i2c_dev *VAR_0)
{
 if (VAR_0->btx.dma)
  FUNC_0(VAR_0->btx.dma);
 if (VAR_0->brx.dma)
  FUNC_0(VAR_0->brx.dma);
 VAR_0->btx.dma = ((void*)0);
 VAR_0->brx.dma = ((void*)0);
}
