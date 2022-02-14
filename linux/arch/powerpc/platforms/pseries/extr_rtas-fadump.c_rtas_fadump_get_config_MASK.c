
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int destination_address; } ;
struct TYPE_4__ {int source_len; int source_address; } ;
struct rtas_fadump_mem_struct {TYPE_1__ cpu_state_data; TYPE_2__ rmr_region; } ;
struct fw_dump {int boot_mem_regs_cnt; void* reserve_dump_area_start; void* boot_memory_size; void* boot_mem_top; void** boot_mem_sz; void** boot_mem_addr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct fw_dump*,struct rtas_fadump_mem_struct const*) ;

__attribute__((used)) static void FUNC_2(struct fw_dump *VAR_0,
       const struct rtas_fadump_mem_struct *VAR_1)
{
 VAR_0->boot_mem_addr[0] =
  FUNC_0(VAR_1->rmr_region.source_address);
 VAR_0->boot_mem_sz[0] = FUNC_0(VAR_1->rmr_region.source_len);
 VAR_0->boot_memory_size = VAR_0->boot_mem_sz[0];

 VAR_0->boot_mem_top = VAR_0->boot_memory_size;
 VAR_0->boot_mem_regs_cnt = 1;





 VAR_0->reserve_dump_area_start =
  FUNC_0(VAR_1->cpu_state_data.destination_address);

 FUNC_1(VAR_0, VAR_1);
}
