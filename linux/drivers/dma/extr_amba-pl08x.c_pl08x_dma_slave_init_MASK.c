
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dst_addr; int src_addr; } ;
struct pl08x_dma_chan {int slave; TYPE_2__* cd; TYPE_1__ cfg; int name; } ;
struct TYPE_4__ {int addr; int bus_id; } ;



__attribute__((used)) static void FUNC_0(struct pl08x_dma_chan *VAR_0)
{
 VAR_0->slave = 1;
 VAR_0->name = VAR_0->cd->bus_id;
 VAR_0->cfg.src_addr = VAR_0->cd->addr;
 VAR_0->cfg.dst_addr = VAR_0->cd->addr;
}
