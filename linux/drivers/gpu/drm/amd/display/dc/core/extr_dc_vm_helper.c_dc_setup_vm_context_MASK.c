
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_virtual_addr_space_config {int dummy; } ;
struct TYPE_2__ {int (* init_vm_ctx ) (int ,struct dc*,struct dc_virtual_addr_space_config*,int) ;} ;
struct dc {int hwseq; TYPE_1__ hwss; } ;


 int FUNC_0 (int ,struct dc*,struct dc_virtual_addr_space_config*,int) ;

void FUNC_1(struct dc *VAR_0, struct dc_virtual_addr_space_config *VAR_1, int VAR_2)
{
 VAR_0->hwss.init_vm_ctx(VAR_0->hwseq, VAR_0, VAR_1, VAR_2);
}
