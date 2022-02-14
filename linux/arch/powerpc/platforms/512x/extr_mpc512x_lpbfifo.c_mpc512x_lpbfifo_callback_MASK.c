
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mpc512x_lpbfifo_request {scalar_t__ dir; int (* callback ) (struct mpc512x_lpbfifo_request*) ;int size; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int wait_lpbfifo_callback; int lock; struct mpc512x_lpbfifo_request* req; int wait_lpbfifo_irq; int ram_bus_addr; TYPE_2__* chan; int regs; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct mpc512x_lpbfifo_request*) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
 unsigned long VAR_5;
 struct mpc512x_lpbfifo_request *VAR_6 = ((void*)0);
 enum dma_data_direction VAR_7;

 FUNC_2(&VAR_3.lock, VAR_5);

 if (!VAR_3.regs) {
  FUNC_3(&VAR_3.lock, VAR_5);
  return;
 }

 VAR_6 = VAR_3.req;
 if (!VAR_6) {
  FUNC_1("bogus LPBFIFO callback\n");
  FUNC_3(&VAR_3.lock, VAR_5);
  return;
 }


 if (VAR_6->dir == VAR_2)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;
 FUNC_0(VAR_3.chan->device->dev,
   VAR_3.ram_bus_addr, VAR_6->size, VAR_7);

 VAR_3.wait_lpbfifo_callback = 0;

 if (!VAR_3.wait_lpbfifo_irq) {

  VAR_3.req = ((void*)0);

  FUNC_3(&VAR_3.lock, VAR_5);

  if (VAR_6->callback)
   VAR_6->callback(VAR_6);
 } else {
  FUNC_3(&VAR_3.lock, VAR_5);
 }
}
