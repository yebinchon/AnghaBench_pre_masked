
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vi_mqd_allocation {int dummy; } ;
struct amdgpu_ring {int use_doorbell; int doorbell_index; int name; int * ring_obj; } ;
struct amdgpu_kiq {int irq; int ring; } ;
struct TYPE_11__ {int num_mec; int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_9__ {TYPE_2__* funcs; } ;
struct TYPE_7__ {int work; } ;
struct TYPE_12__ {int num_gfx_rings; int ce_ram_size; struct amdgpu_kiq kiq; TYPE_5__ mec; int eop_irq; struct amdgpu_ring* gfx_ring; TYPE_3__ rlc; int gfx_current_status; TYPE_1__ sq_work; int sq_irq; int cp_ecc_error_irq; int priv_inst_irq; int priv_reg_irq; } ;
struct TYPE_10__ {int gfx_ring0; } ;
struct amdgpu_device {int asic_type; TYPE_6__ gfx; TYPE_4__ doorbell_index; } ;
struct TYPE_8__ {int (* init ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,int *,int *) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_8 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int VAR_9 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_15(void *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct amdgpu_ring *VAR_16;
 struct amdgpu_kiq *VAR_17;
 struct amdgpu_device *VAR_18 = (struct amdgpu_device *)VAR_10;

 switch (VAR_18->asic_type) {
 case 130:
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 128:
  VAR_18->gfx.mec.num_mec = 2;
  break;
 case 129:
 case 131:
 default:
  VAR_18->gfx.mec.num_mec = 1;
  break;
 }

 VAR_18->gfx.mec.num_pipe_per_mec = 4;
 VAR_18->gfx.mec.num_queue_per_pipe = 8;


 VAR_14 = FUNC_6(VAR_18, VAR_2, VAR_5, &VAR_18->gfx.eop_irq);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_6(VAR_18, VAR_2, VAR_7,
         &VAR_18->gfx.priv_reg_irq);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_6(VAR_18, VAR_2, VAR_6,
         &VAR_18->gfx.priv_inst_irq);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_6(VAR_18, VAR_2, VAR_4,
         &VAR_18->gfx.cp_ecc_error_irq);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_6(VAR_18, VAR_2, VAR_8,
         &VAR_18->gfx.sq_irq);
 if (VAR_14) {
  FUNC_0("amdgpu_irq_add() for SQ failed: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_1(&VAR_18->gfx.sq_work.work, VAR_9);

 VAR_18->gfx.gfx_current_status = VAR_1;

 FUNC_12(VAR_18);

 VAR_14 = FUNC_10(VAR_18);
 if (VAR_14) {
  FUNC_0("Failed to load gfx firmware!\n");
  return VAR_14;
 }

 VAR_14 = VAR_18->gfx.rlc.funcs->init(VAR_18);
 if (VAR_14) {
  FUNC_0("Failed to init rlc BOs!\n");
  return VAR_14;
 }

 VAR_14 = FUNC_11(VAR_18);
 if (VAR_14) {
  FUNC_0("Failed to init MEC BOs!\n");
  return VAR_14;
 }


 for (VAR_11 = 0; VAR_11 < VAR_18->gfx.num_gfx_rings; VAR_11++) {
  VAR_16 = &VAR_18->gfx.gfx_ring[VAR_11];
  VAR_16->ring_obj = ((void*)0);
  FUNC_13(VAR_16->name, "gfx");

  if (VAR_18->asic_type != 129) {
   VAR_16->use_doorbell = 1;
   VAR_16->doorbell_index = VAR_18->doorbell_index.gfx_ring0;
  }

  VAR_14 = FUNC_7(VAR_18, VAR_16, 1024, &VAR_18->gfx.eop_irq,
         VAR_0);
  if (VAR_14)
   return VAR_14;
 }



 VAR_15 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_18->gfx.mec.num_mec; ++VAR_11) {
  for (VAR_12 = 0; VAR_12 < VAR_18->gfx.mec.num_queue_per_pipe; VAR_12++) {
   for (VAR_13 = 0; VAR_13 < VAR_18->gfx.mec.num_pipe_per_mec; VAR_13++) {
    if (!FUNC_2(VAR_18, VAR_11, VAR_13, VAR_12))
     continue;

    VAR_14 = FUNC_8(VAR_18,
        VAR_15,
        VAR_11, VAR_13, VAR_12);
    if (VAR_14)
     return VAR_14;

    VAR_15++;
   }
  }
 }

 VAR_14 = FUNC_3(VAR_18, VAR_3);
 if (VAR_14) {
  FUNC_0("Failed to init KIQ BOs!\n");
  return VAR_14;
 }

 VAR_17 = &VAR_18->gfx.kiq;
 VAR_14 = FUNC_4(VAR_18, &VAR_17->ring, &VAR_17->irq);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_5(VAR_18, sizeof(struct vi_mqd_allocation));
 if (VAR_14)
  return VAR_14;

 VAR_18->gfx.ce_ram_size = 0x8000;

 VAR_14 = FUNC_9(VAR_18);
 if (VAR_14)
  return VAR_14;

 return 0;
}
