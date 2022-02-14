
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct a6xx_hfi_msg_gmu_init_cmd {int boot_state; void* dbg_buffer_size; void* dbg_buffer_addr; int member_0; } ;
struct a6xx_gmu {TYPE_1__* debug; } ;
typedef int msg ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ iova; } ;


 int VAR_0 ;
 int FUNC_0 (struct a6xx_gmu*,int ,struct a6xx_hfi_msg_gmu_init_cmd*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct a6xx_gmu *VAR_1, int VAR_2)
{
 struct a6xx_hfi_msg_gmu_init_cmd VAR_3 = { 0 };

 VAR_3.dbg_buffer_addr = (u32) VAR_1->debug->iova;
 VAR_3.dbg_buffer_size = (u32) VAR_1->debug->size;
 VAR_3.boot_state = VAR_2;

 return FUNC_0(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3),
  ((void*)0), 0);
}
