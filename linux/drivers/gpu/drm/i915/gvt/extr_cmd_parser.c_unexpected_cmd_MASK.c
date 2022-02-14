
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser_exec_state {TYPE_1__* info; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct parser_exec_state *VAR_1)
{
 struct intel_vgpu *VAR_2 = VAR_1->vgpu;

 FUNC_0("Unexpected %s in command buffer!\n", VAR_1->info->name);

 return -VAR_0;
}
