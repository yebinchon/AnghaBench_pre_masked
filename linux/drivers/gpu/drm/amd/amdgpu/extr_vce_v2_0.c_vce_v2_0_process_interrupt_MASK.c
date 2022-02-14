
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_iv_entry {int* src_data; int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int * ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 FUNC_0("IH: VCE\n");
 switch (VAR_2->src_data[0]) {
 case 0:
 case 1:
  FUNC_2(&VAR_0->vce.ring[VAR_2->src_data[0]]);
  break;
 default:
  FUNC_1("Unhandled interrupt: %d %d\n",
     VAR_2->src_id, VAR_2->src_data[0]);
  break;
 }

 return 0;
}
