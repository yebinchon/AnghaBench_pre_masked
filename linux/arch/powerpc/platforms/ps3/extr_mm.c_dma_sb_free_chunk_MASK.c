
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chunk {int len; scalar_t__ bus_addr; TYPE_2__* region; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_id; int bus_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_chunk*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct dma_chunk *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->bus_addr) {
  VAR_1 = FUNC_2(VAR_0->region->dev->bus_id,
   VAR_0->region->dev->dev_id, VAR_0->bus_addr, VAR_0->len);
  FUNC_0(VAR_1);
 }

 FUNC_1(VAR_0);
 return VAR_1;
}
