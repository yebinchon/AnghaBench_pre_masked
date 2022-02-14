
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idma64_lli {int dummy; } ;
struct idma64_chan {int pool; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int ) ;
 struct idma64_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_1)
{
 struct idma64_chan *VAR_2 = FUNC_4(VAR_1);


 VAR_2->pool = FUNC_3(FUNC_2(FUNC_0(VAR_1)),
     VAR_1->device->dev,
     sizeof(struct idma64_lli), 8, 0);
 if (!VAR_2->pool) {
  FUNC_1(FUNC_0(VAR_1), "No memory for descriptors\n");
  return -VAR_0;
 }

 return 0;
}
