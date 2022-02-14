
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser_exec_state {int ring_id; TYPE_1__* vgpu; } ;
struct TYPE_2__ {int scan_nonprivbb; } ;


 int FUNC_0 (struct parser_exec_state*,int ) ;

__attribute__((used)) static int FUNC_1(struct parser_exec_state *VAR_0)
{

 if (FUNC_0(VAR_0, 0) & (1 << 8) &&
   !(VAR_0->vgpu->scan_nonprivbb & (1 << VAR_0->ring_id)))
  return 0;
 return 1;
}
