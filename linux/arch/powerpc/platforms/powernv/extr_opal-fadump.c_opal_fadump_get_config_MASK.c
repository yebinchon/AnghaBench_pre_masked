
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_fadump_mem_struct {int region_cnt; int registered_regions; TYPE_1__* rgn; } ;
struct fw_dump {unsigned long* boot_mem_addr; unsigned long* boot_mem_sz; int boot_mem_regs_cnt; scalar_t__ boot_memory_size; scalar_t__ boot_mem_top; int reserve_dump_area_start; int dump_active; } ;
struct TYPE_2__ {unsigned long src; unsigned long size; int dest; } ;


 int FUNC_0 (struct fw_dump*,struct opal_fadump_mem_struct const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(struct fw_dump *VAR_0,
       const struct opal_fadump_mem_struct *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if (!VAR_0->dump_active)
  return;

 VAR_4 = 0;
 VAR_5 = 0;
 VAR_0->boot_memory_size = 0;

 FUNC_1("Boot memory regions:\n");
 for (VAR_6 = 0; VAR_6 < VAR_1->region_cnt; VAR_6++) {
  VAR_2 = VAR_1->rgn[VAR_6].src;
  VAR_3 = VAR_1->rgn[VAR_6].size;
  FUNC_1("\t[%03d] base: 0x%lx, size: 0x%lx\n", VAR_6, VAR_2, VAR_3);

  VAR_0->boot_mem_addr[VAR_6] = VAR_2;
  VAR_0->boot_mem_sz[VAR_6] = VAR_3;
  VAR_0->boot_memory_size += VAR_3;
  VAR_5 += (VAR_2 - VAR_4);

  VAR_4 = VAR_2 + VAR_3;
 }





 VAR_0->reserve_dump_area_start = VAR_1->rgn[0].dest;
 if (VAR_1->region_cnt > VAR_1->registered_regions) {
  FUNC_2("Not all memory regions were saved!!!\n");
  FUNC_2("  Unsaved memory regions:\n");
  VAR_6 = VAR_1->registered_regions;
  while (VAR_6 < VAR_1->region_cnt) {
   FUNC_2("\t[%03d] base: 0x%llx, size: 0x%llx\n",
    VAR_6, VAR_1->rgn[VAR_6].src, VAR_1->rgn[VAR_6].size);
   VAR_6++;
  }

  FUNC_2("If the unsaved regions only contain pages that are filtered out (eg. free/user pages), the vmcore should still be usable.\n");
  FUNC_2("WARNING: If the unsaved regions contain kernel pages, the vmcore will be corrupted.\n");
 }

 VAR_0->boot_mem_top = (VAR_0->boot_memory_size + VAR_5);
 VAR_0->boot_mem_regs_cnt = VAR_1->region_cnt;
 FUNC_0(VAR_0, VAR_1);
}
