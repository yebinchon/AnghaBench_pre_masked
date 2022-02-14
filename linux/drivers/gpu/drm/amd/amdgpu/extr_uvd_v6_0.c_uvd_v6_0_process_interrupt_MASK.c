
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int src_id; int * src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int * ring_enc; int ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 bool VAR_3 = 1;
 FUNC_0("IH: UVD TRAP\n");

 switch (VAR_2->src_id) {
 case 124:
  FUNC_2(&VAR_0->uvd.inst->ring);
  break;
 case 119:
  if (FUNC_3(FUNC_4(VAR_0)))
   FUNC_2(&VAR_0->uvd.inst->ring_enc[0]);
  else
   VAR_3 = 0;
  break;
 case 120:
  if (FUNC_3(FUNC_4(VAR_0)))
   FUNC_2(&VAR_0->uvd.inst->ring_enc[1]);
  else
   VAR_3 = 0;
  break;
 }

 if (0 == VAR_3)
   FUNC_1("Unhandled interrupt: %d %d\n",
     VAR_2->src_id, VAR_2->src_data[0]);

 return 0;
}
