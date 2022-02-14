
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fw_dump {int boot_mem_regs_cnt; scalar_t__ boot_memory_size; scalar_t__* boot_mem_sz; int * boot_mem_addr; int kernel_metadata; scalar_t__ reserve_dump_area_start; } ;
struct TYPE_7__ {TYPE_1__* rgn; scalar_t__ fadumphdr_addr; int region_cnt; } ;
struct TYPE_6__ {scalar_t__ dest; scalar_t__ size; int src; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct fw_dump*,TYPE_2__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u64 FUNC_3(struct fw_dump *VAR_1)
{
 u64 VAR_2 = VAR_1->reserve_dump_area_start;
 int VAR_3;

 VAR_0 = FUNC_0(VAR_1->kernel_metadata);
 FUNC_1(VAR_0);


 for (VAR_3 = 0; VAR_3 < VAR_1->boot_mem_regs_cnt; VAR_3++) {
  VAR_0->rgn[VAR_3].src = VAR_1->boot_mem_addr[VAR_3];
  VAR_0->rgn[VAR_3].dest = VAR_2;
  VAR_0->rgn[VAR_3].size = VAR_1->boot_mem_sz[VAR_3];

  VAR_0->region_cnt++;
  VAR_2 += VAR_1->boot_mem_sz[VAR_3];
 }





 VAR_0->fadumphdr_addr = (VAR_0->rgn[0].dest +
        VAR_1->boot_memory_size);

 FUNC_2(VAR_1, VAR_0);

 return VAR_2;
}
