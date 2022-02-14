
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_mdma_chan {int busy; TYPE_1__* desc; } ;
struct TYPE_4__ {int node; } ;
struct TYPE_3__ {TYPE_2__ vdesc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct stm32_mdma_chan*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct stm32_mdma_chan *VAR_0)
{
 FUNC_0(&VAR_0->desc->vdesc.node);
 FUNC_2(&VAR_0->desc->vdesc);
 VAR_0->desc = ((void*)0);
 VAR_0->busy = 0;


 FUNC_1(VAR_0);
}
