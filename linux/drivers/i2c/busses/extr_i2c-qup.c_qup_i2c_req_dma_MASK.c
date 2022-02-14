
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dma; } ;
struct TYPE_3__ {int * dma; } ;
struct qup_i2c_dev {TYPE_2__ brx; int dev; TYPE_1__ btx; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct qup_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct qup_i2c_dev *VAR_0)
{
 int VAR_1;

 if (!VAR_0->btx.dma) {
  VAR_0->btx.dma = FUNC_3(VAR_0->dev, "tx");
  if (FUNC_0(VAR_0->btx.dma)) {
   VAR_1 = FUNC_1(VAR_0->btx.dma);
   VAR_0->btx.dma = ((void*)0);
   FUNC_2(VAR_0->dev, "\n tx channel not available");
   return VAR_1;
  }
 }

 if (!VAR_0->brx.dma) {
  VAR_0->brx.dma = FUNC_3(VAR_0->dev, "rx");
  if (FUNC_0(VAR_0->brx.dma)) {
   FUNC_2(VAR_0->dev, "\n rx channel not available");
   VAR_1 = FUNC_1(VAR_0->brx.dma);
   VAR_0->brx.dma = ((void*)0);
   FUNC_4(VAR_0);
   return VAR_1;
  }
 }
 return 0;
}
