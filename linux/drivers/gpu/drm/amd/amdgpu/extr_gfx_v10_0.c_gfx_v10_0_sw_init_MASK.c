
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v10_compute_mqd {int dummy; } ;
struct amdgpu_kiq {int irq; int ring; } ;
struct TYPE_6__ {int num_mec; int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_5__ {int num_me; int num_pipe_per_me; int num_queue_per_pipe; } ;
struct TYPE_8__ {int ce_ram_size; struct amdgpu_kiq kiq; TYPE_2__ mec; TYPE_1__ me; int gfx_current_status; int priv_inst_irq; int priv_reg_irq; int eop_irq; } ;
struct TYPE_7__ {scalar_t__ load_type; } ;
struct amdgpu_device {int asic_type; TYPE_4__ gfx; TYPE_3__ firmware; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_2 (struct amdgpu_device*,int,int,int) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,int *,int *) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_7 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_8 (struct amdgpu_device*,int,int,int,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_15(void *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 struct amdgpu_kiq *VAR_15;
 struct amdgpu_device *VAR_16 = (struct amdgpu_device *)VAR_9;

 switch (VAR_16->asic_type) {
 case 130:
 case 128:
 case 129:
  VAR_16->gfx.me.num_me = 1;
  VAR_16->gfx.me.num_pipe_per_me = 2;
  VAR_16->gfx.me.num_queue_per_pipe = 1;
  VAR_16->gfx.mec.num_mec = 2;
  VAR_16->gfx.mec.num_pipe_per_mec = 4;
  VAR_16->gfx.mec.num_queue_per_pipe = 8;
  break;
 default:
  VAR_16->gfx.me.num_me = 1;
  VAR_16->gfx.me.num_pipe_per_me = 1;
  VAR_16->gfx.me.num_queue_per_pipe = 1;
  VAR_16->gfx.mec.num_mec = 1;
  VAR_16->gfx.mec.num_pipe_per_mec = 4;
  VAR_16->gfx.mec.num_queue_per_pipe = 8;
  break;
 }


 VAR_13 = FUNC_6(VAR_16, VAR_8,
         VAR_5,
         &VAR_16->gfx.kiq.irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_6(VAR_16, VAR_8,
         VAR_4,
         &VAR_16->gfx.eop_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_6(VAR_16, VAR_8, VAR_7,
         &VAR_16->gfx.priv_reg_irq);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_6(VAR_16, VAR_8, VAR_6,
         &VAR_16->gfx.priv_inst_irq);
 if (VAR_13)
  return VAR_13;

 VAR_16->gfx.gfx_current_status = VAR_1;

 FUNC_14(VAR_16);

 VAR_13 = FUNC_10(VAR_16);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_13(VAR_16);
 if (VAR_13) {
  FUNC_0("Failed to init rlc BOs!\n");
  return VAR_13;
 }

 VAR_13 = FUNC_11(VAR_16);
 if (VAR_13) {
  FUNC_0("Failed to init MEC BOs!\n");
  return VAR_13;
 }


 for (VAR_10 = 0; VAR_10 < VAR_16->gfx.me.num_me; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_16->gfx.me.num_queue_per_pipe; VAR_11++) {
   for (VAR_12 = 0; VAR_12 < VAR_16->gfx.me.num_pipe_per_me; VAR_12++) {
    if (!FUNC_1(VAR_16, VAR_10, VAR_12, VAR_11))
     continue;

    VAR_13 = FUNC_8(VAR_16, VAR_14,
           VAR_10, VAR_12, VAR_11);
    if (VAR_13)
     return VAR_13;
    VAR_14++;
   }
  }
 }

 VAR_14 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_16->gfx.mec.num_mec; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_16->gfx.mec.num_queue_per_pipe; VAR_11++) {
   for (VAR_12 = 0; VAR_12 < VAR_16->gfx.mec.num_pipe_per_mec; VAR_12++) {
    if (!FUNC_2(VAR_16, VAR_10, VAR_12,
             VAR_11))
     continue;

    VAR_13 = FUNC_7(VAR_16, VAR_14,
        VAR_10, VAR_12, VAR_11);
    if (VAR_13)
     return VAR_13;

    VAR_14++;
   }
  }
 }

 VAR_13 = FUNC_3(VAR_16, VAR_3);
 if (VAR_13) {
  FUNC_0("Failed to init KIQ BOs!\n");
  return VAR_13;
 }

 VAR_15 = &VAR_16->gfx.kiq;
 VAR_13 = FUNC_4(VAR_16, &VAR_15->ring, &VAR_15->irq);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_16, sizeof(struct v10_compute_mqd));
 if (VAR_13)
  return VAR_13;


 if (VAR_16->firmware.load_type == VAR_0) {
  VAR_13 = FUNC_12(VAR_16);
  if (VAR_13)
   return VAR_13;
 }

 VAR_16->gfx.ce_ram_size = VAR_2;

 FUNC_9(VAR_16);

 return 0;
}
