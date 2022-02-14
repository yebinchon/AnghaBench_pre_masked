
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int src_id; int * src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {int ring_jpeg; int * ring_enc; int ring_dec; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;




 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 FUNC_0("IH: VCN TRAP\n");

 switch (VAR_2->src_id) {
 case 128:
  FUNC_2(&VAR_0->vcn.inst->ring_dec);
  break;
 case 130:
  FUNC_2(&VAR_0->vcn.inst->ring_enc[0]);
  break;
 case 129:
  FUNC_2(&VAR_0->vcn.inst->ring_enc[1]);
  break;
 case 131:
  FUNC_2(&VAR_0->vcn.inst->ring_jpeg);
  break;
 default:
  FUNC_1("Unhandled interrupt: %d %d\n",
     VAR_2->src_id, VAR_2->src_data[0]);
  break;
 }

 return 0;
}
