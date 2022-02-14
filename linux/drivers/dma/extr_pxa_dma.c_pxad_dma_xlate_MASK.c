
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxad_device {int slave; } ;
struct of_phandle_args {int * args; } ;
struct of_dma {struct pxad_device* of_dma_data; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int prio; int drcmr; } ;


 struct dma_chan* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static struct dma_chan *FUNC_2(struct of_phandle_args *VAR_0,
        struct of_dma *VAR_1)
{
 struct pxad_device *VAR_2 = VAR_1->of_dma_data;
 struct dma_chan *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->slave);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3)->drcmr = VAR_0->args[0];
 FUNC_1(VAR_3)->prio = VAR_0->args[1];

 return VAR_3;
}
