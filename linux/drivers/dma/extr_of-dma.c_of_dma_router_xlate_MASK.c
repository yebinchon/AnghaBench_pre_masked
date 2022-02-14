
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {int np; } ;
struct of_dma {TYPE_1__* dma_router; struct dma_chan* (* of_dma_xlate ) (struct of_phandle_args*,struct of_dma*) ;void* (* of_dma_route_allocate ) (struct of_phandle_args*,struct of_dma*) ;} ;
struct dma_chan {void* route_data; TYPE_1__* router; } ;
typedef int dma_spec_target ;
struct TYPE_2__ {int dev; int (* route_free ) (int ,void*) ;} ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct of_phandle_args*,struct of_phandle_args*,int) ;
 struct of_dma* FUNC_2 (struct of_phandle_args*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct of_phandle_args*,struct of_dma*) ;
 struct dma_chan* FUNC_5 (struct of_phandle_args*,struct of_dma*) ;
 int FUNC_6 (int ,void*) ;

__attribute__((used)) static struct dma_chan *FUNC_7(struct of_phandle_args *VAR_0,
         struct of_dma *VAR_1)
{
 struct dma_chan *VAR_2;
 struct of_dma *VAR_3;
 struct of_phandle_args VAR_4;
 void *VAR_5;


 FUNC_1(&VAR_4, VAR_0, sizeof(VAR_4));
 VAR_5 = VAR_1->of_dma_route_allocate(&VAR_4, VAR_1);
 if (FUNC_0(VAR_5))
  return ((void*)0);

 VAR_3 = FUNC_2(&VAR_4);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = VAR_3->of_dma_xlate(&VAR_4, VAR_3);
 if (VAR_2) {
  VAR_2->router = VAR_1->dma_router;
  VAR_2->route_data = VAR_5;
 } else {
  VAR_1->dma_router->route_free(VAR_1->dma_router->dev,
           VAR_5);
 }





 FUNC_3(VAR_4.np);
 return VAR_2;
}
