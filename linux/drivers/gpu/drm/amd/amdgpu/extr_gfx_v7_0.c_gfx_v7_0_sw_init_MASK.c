
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ring {int name; int * ring_obj; } ;
struct TYPE_7__ {int num_mec; int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_8__ {int num_gfx_rings; int ce_ram_size; TYPE_3__ mec; int eop_irq; struct amdgpu_ring* gfx_ring; TYPE_2__ rlc; int priv_inst_irq; int priv_reg_irq; } ;
struct amdgpu_device {int asic_type; TYPE_4__ gfx; } ;
struct TYPE_5__ {int (* init ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_4 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(void *VAR_2)
{
 struct amdgpu_ring *VAR_3;
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_2;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 switch (VAR_4->asic_type) {
 case 129:
  VAR_4->gfx.mec.num_mec = 2;
  break;
 case 132:
 case 131:
 case 130:
 case 128:
 default:
  VAR_4->gfx.mec.num_mec = 1;
  break;
 }
 VAR_4->gfx.mec.num_pipe_per_mec = 4;
 VAR_4->gfx.mec.num_queue_per_pipe = 8;


 VAR_8 = FUNC_2(VAR_4, VAR_1, 181, &VAR_4->gfx.eop_irq);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_1, 184,
         &VAR_4->gfx.priv_reg_irq);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_1, 185,
         &VAR_4->gfx.priv_inst_irq);
 if (VAR_8)
  return VAR_8;

 FUNC_8(VAR_4);

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8) {
  FUNC_0("Failed to load gfx firmware!\n");
  return VAR_8;
 }

 VAR_8 = VAR_4->gfx.rlc.funcs->init(VAR_4);
 if (VAR_8) {
  FUNC_0("Failed to init rlc BOs!\n");
  return VAR_8;
 }


 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8) {
  FUNC_0("Failed to init MEC BOs!\n");
  return VAR_8;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->gfx.num_gfx_rings; VAR_5++) {
  VAR_3 = &VAR_4->gfx.gfx_ring[VAR_5];
  VAR_3->ring_obj = ((void*)0);
  FUNC_9(VAR_3->name, "gfx");
  VAR_8 = FUNC_3(VAR_4, VAR_3, 1024,
         &VAR_4->gfx.eop_irq, VAR_0);
  if (VAR_8)
   return VAR_8;
 }


 VAR_9 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4->gfx.mec.num_mec; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_4->gfx.mec.num_queue_per_pipe; VAR_6++) {
   for (VAR_7 = 0; VAR_7 < VAR_4->gfx.mec.num_pipe_per_mec; VAR_7++) {
    if (!FUNC_1(VAR_4, VAR_5, VAR_7, VAR_6))
     continue;

    VAR_8 = FUNC_4(VAR_4,
        VAR_9,
        VAR_5, VAR_7, VAR_6);
    if (VAR_8)
     return VAR_8;

    VAR_9++;
   }
  }
 }

 VAR_4->gfx.ce_ram_size = 0x8000;

 FUNC_5(VAR_4);

 return VAR_8;
}
