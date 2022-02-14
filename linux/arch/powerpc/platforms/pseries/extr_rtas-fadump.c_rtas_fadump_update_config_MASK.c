
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int destination_address; } ;
struct rtas_fadump_mem_struct {TYPE_1__ rmr_region; } ;
struct fw_dump {scalar_t__ boot_memory_size; scalar_t__ boot_mem_dest_addr; scalar_t__ fadumphdr_addr; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct fw_dump *VAR_0,
          const struct rtas_fadump_mem_struct *VAR_1)
{
 VAR_0->boot_mem_dest_addr =
  FUNC_0(VAR_1->rmr_region.destination_address);

 VAR_0->fadumphdr_addr = (VAR_0->boot_mem_dest_addr +
           VAR_0->boot_memory_size);
}
