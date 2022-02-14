
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct dma_chan *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1->device->dev);
 return VAR_3 == VAR_0 ||
  FUNC_1(VAR_2, FUNC_0(VAR_3));
}
