
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_dmac {int modules; } ;
struct of_phandle_args {int * args; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ device_config; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct rcar_dmac* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_1, void *VAR_2)
{
 struct rcar_dmac *VAR_3 = FUNC_1(VAR_1->device);
 struct of_phandle_args *VAR_4 = VAR_2;
 if (VAR_1->device->device_config != VAR_0)
  return 0;

 return !FUNC_0(VAR_4->args[0], VAR_3->modules);
}
