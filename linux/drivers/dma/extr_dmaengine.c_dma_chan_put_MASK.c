
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chan {int * route_data; TYPE_2__* router; TYPE_1__* device; int client_count; } ;
struct TYPE_4__ {int dev; int (* route_free ) (int ,int *) ;} ;
struct TYPE_3__ {int (* device_free_chan_resources ) (struct dma_chan*) ;} ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dma_chan*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{

 if (!VAR_0->client_count)
  return;

 VAR_0->client_count--;
 FUNC_2(FUNC_0(VAR_0));


 if (!VAR_0->client_count && VAR_0->device->device_free_chan_resources) {

  FUNC_1(VAR_0);
  VAR_0->device->device_free_chan_resources(VAR_0);
 }


 if (VAR_0->router && VAR_0->router->route_free) {
  VAR_0->router->route_free(VAR_0->router->dev, VAR_0->route_data);
  VAR_0->router = ((void*)0);
  VAR_0->route_data = ((void*)0);
 }
}
