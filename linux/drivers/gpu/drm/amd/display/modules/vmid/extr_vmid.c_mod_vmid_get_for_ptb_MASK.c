
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uint64_t ;
struct mod_vmid {int dummy; } ;
struct dc_virtual_addr_space_config {int page_table_base_addr; } ;
struct core_vmid {scalar_t__ num_vmids_available; int dc; struct dc_virtual_addr_space_config base_config; } ;


 struct core_vmid* FUNC_0 (struct mod_vmid*) ;
 int FUNC_1 (struct core_vmid*,unsigned int,int ) ;
 int FUNC_2 (int ,struct dc_virtual_addr_space_config*,unsigned int) ;
 int FUNC_3 (struct core_vmid*) ;
 unsigned int FUNC_4 (struct core_vmid*,int ) ;
 unsigned int FUNC_5 (struct core_vmid*) ;

uint8_t FUNC_6(struct mod_vmid *VAR_0, uint64_t VAR_1)
{
 struct core_vmid *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3 = 0;


 if (VAR_1 == 0)
  return 0;

 VAR_3 = FUNC_4(VAR_2, VAR_1);

 if (VAR_3 == -1) {
  struct dc_virtual_addr_space_config VAR_4 = VAR_2->base_config;

  VAR_4.page_table_base_addr = VAR_1;

  if (VAR_2->num_vmids_available == 0)
   FUNC_3(VAR_2);

  VAR_3 = FUNC_5(VAR_2);
  FUNC_1(VAR_2, VAR_3, VAR_1);

  FUNC_2(VAR_2->dc, &VAR_4, VAR_3);
 }

 return VAR_3;
}
