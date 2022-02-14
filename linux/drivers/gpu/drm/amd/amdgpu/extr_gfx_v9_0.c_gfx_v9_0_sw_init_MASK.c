
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v9_mqd_allocation {int dummy; } ;
struct amdgpu_ring {int use_doorbell; int doorbell_index; int name; int * ring_obj; } ;
struct amdgpu_kiq {int irq; int ring; } ;
struct TYPE_9__ {int num_mec; int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {int num_gfx_rings; int ce_ram_size; struct amdgpu_kiq kiq; TYPE_4__ mec; int eop_irq; struct amdgpu_ring* gfx_ring; TYPE_2__ rlc; int gfx_current_status; int cp_ecc_error_irq; int priv_inst_irq; int priv_reg_irq; } ;
struct TYPE_8__ {int gfx_ring0; } ;
struct amdgpu_device {int asic_type; TYPE_5__ gfx; TYPE_3__ doorbell_index; } ;
struct TYPE_6__ {int (* init ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct amdgpu_device*,int,int,int) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*,int *,int *) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_7 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_15(void *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct amdgpu_ring *VAR_15;
 struct amdgpu_kiq *VAR_16;
 struct amdgpu_device *VAR_17 = (struct amdgpu_device *)VAR_9;

 switch (VAR_17->asic_type) {
 case 130:
 case 129:
 case 128:
 case 132:
 case 133:
 case 131:
  VAR_17->gfx.mec.num_mec = 2;
  break;
 default:
  VAR_17->gfx.mec.num_mec = 1;
  break;
 }

 VAR_17->gfx.mec.num_pipe_per_mec = 4;
 VAR_17->gfx.mec.num_queue_per_pipe = 8;


 VAR_13 = FUNC_5(VAR_17, VAR_8, VAR_4, &VAR_17->gfx.eop_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_5(VAR_17, VAR_8, VAR_7,
         &VAR_17->gfx.priv_reg_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_5(VAR_17, VAR_8, VAR_6,
         &VAR_17->gfx.priv_inst_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_5(VAR_17, VAR_8, VAR_3,
         &VAR_17->gfx.cp_ecc_error_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_5(VAR_17, VAR_8, VAR_5,
         &VAR_17->gfx.cp_ecc_error_irq);
 if (VAR_13)
  return VAR_13;

 VAR_17->gfx.gfx_current_status = VAR_1;

 FUNC_12(VAR_17);

 VAR_13 = FUNC_9(VAR_17);
 if (VAR_13) {
  FUNC_0("Failed to load gfx firmware!\n");
  return VAR_13;
 }

 VAR_13 = VAR_17->gfx.rlc.funcs->init(VAR_17);
 if (VAR_13) {
  FUNC_0("Failed to init rlc BOs!\n");
  return VAR_13;
 }

 VAR_13 = FUNC_10(VAR_17);
 if (VAR_13) {
  FUNC_0("Failed to init MEC BOs!\n");
  return VAR_13;
 }


 for (VAR_10 = 0; VAR_10 < VAR_17->gfx.num_gfx_rings; VAR_10++) {
  VAR_15 = &VAR_17->gfx.gfx_ring[VAR_10];
  VAR_15->ring_obj = ((void*)0);
  if (!VAR_10)
   FUNC_13(VAR_15->name, "gfx");
  else
   FUNC_13(VAR_15->name, "gfx_%d", VAR_10);
  VAR_15->use_doorbell = 1;
  VAR_15->doorbell_index = VAR_17->doorbell_index.gfx_ring0 << 1;
  VAR_13 = FUNC_6(VAR_17, VAR_15, 1024,
         &VAR_17->gfx.eop_irq, VAR_0);
  if (VAR_13)
   return VAR_13;
 }


 VAR_14 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_17->gfx.mec.num_mec; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_17->gfx.mec.num_queue_per_pipe; VAR_11++) {
   for (VAR_12 = 0; VAR_12 < VAR_17->gfx.mec.num_pipe_per_mec; VAR_12++) {
    if (!FUNC_1(VAR_17, VAR_10, VAR_12, VAR_11))
     continue;

    VAR_13 = FUNC_7(VAR_17,
              VAR_14,
              VAR_10, VAR_12, VAR_11);
    if (VAR_13)
     return VAR_13;

    VAR_14++;
   }
  }
 }

 VAR_13 = FUNC_2(VAR_17, VAR_2);
 if (VAR_13) {
  FUNC_0("Failed to init KIQ BOs!\n");
  return VAR_13;
 }

 VAR_16 = &VAR_17->gfx.kiq;
 VAR_13 = FUNC_3(VAR_17, &VAR_16->ring, &VAR_16->irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_4(VAR_17, sizeof(struct v9_mqd_allocation));
 if (VAR_13)
  return VAR_13;

 VAR_17->gfx.ce_ram_size = 0x8000;

 VAR_13 = FUNC_8(VAR_17);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_11(VAR_17);
 if (VAR_13)
  return VAR_13;

 return 0;
}
