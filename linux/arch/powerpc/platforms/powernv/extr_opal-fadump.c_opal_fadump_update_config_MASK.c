
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opal_fadump_mem_struct {int fadumphdr_addr; TYPE_1__* rgn; int region_cnt; } ;
struct fw_dump {int fadumphdr_addr; int boot_mem_dest_addr; } ;
struct TYPE_2__ {int dest; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct fw_dump *VAR_0,
          const struct opal_fadump_mem_struct *VAR_1)
{
 FUNC_0("Boot memory regions count: %d\n", VAR_1->region_cnt);





 VAR_0->boot_mem_dest_addr = VAR_1->rgn[0].dest;
 FUNC_0("Destination address of boot memory regions: %#016llx\n",
   VAR_0->boot_mem_dest_addr);

 VAR_0->fadumphdr_addr = VAR_1->fadumphdr_addr;
}
