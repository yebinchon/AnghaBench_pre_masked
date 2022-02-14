
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {void* reg_offset; } ;
struct mmsch_v1_0_cmd_direct_polling {void* wait_value; void* mask_value; TYPE_1__ cmd_header; } ;


 int FUNC_0 (void*,struct mmsch_v1_0_cmd_direct_polling*,int) ;

__attribute__((used)) static inline void FUNC_1(struct mmsch_v1_0_cmd_direct_polling *VAR_0,
       uint32_t *VAR_1,
       uint32_t VAR_2,
       uint32_t VAR_3, uint32_t VAR_4)
{
 VAR_0->cmd_header.reg_offset = VAR_2;
 VAR_0->mask_value = VAR_3;
 VAR_0->wait_value = VAR_4;
 FUNC_0((void *)VAR_1, VAR_0, sizeof(struct mmsch_v1_0_cmd_direct_polling));
}
