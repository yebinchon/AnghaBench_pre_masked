
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_chunk {int len; int bus_addr; int lpar_addr; TYPE_2__* region; } ;
struct TYPE_4__ {int offset; int len; int page_size; int bus_addr; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_id; int bus_id; } ;


 int FUNC_0 (char*,char const*,int,int ,...) ;

__attribute__((used)) static void FUNC_1 (const struct dma_chunk* VAR_0, const char* VAR_1,
 int VAR_2)
{
 FUNC_0("%s:%d: r.dev        %llu:%llu\n", VAR_1, VAR_2,
  VAR_0->region->dev->bus_id, VAR_0->region->dev->dev_id);
 FUNC_0("%s:%d: r.bus_addr   %lxh\n", VAR_1, VAR_2, VAR_0->region->bus_addr);
 FUNC_0("%s:%d: r.page_size  %u\n", VAR_1, VAR_2, VAR_0->region->page_size);
 FUNC_0("%s:%d: r.len        %lxh\n", VAR_1, VAR_2, VAR_0->region->len);
 FUNC_0("%s:%d: r.offset     %lxh\n", VAR_1, VAR_2, VAR_0->region->offset);
 FUNC_0("%s:%d: c.lpar_addr  %lxh\n", VAR_1, VAR_2, VAR_0->lpar_addr);
 FUNC_0("%s:%d: c.bus_addr   %lxh\n", VAR_1, VAR_2, VAR_0->bus_addr);
 FUNC_0("%s:%d: c.len        %lxh\n", VAR_1, VAR_2, VAR_0->len);
}
