
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ras_common_if {int dummy; } ;
struct ras_ih_if {struct ras_common_if head; } ;
struct TYPE_5__ {int cp_table_ptr; int cp_table_gpu_addr; int cp_table_obj; int clear_state_obj; } ;
struct TYPE_4__ {int irq; int ring; } ;
struct TYPE_6__ {int num_gfx_rings; int num_compute_rings; TYPE_2__ rlc; TYPE_1__ kiq; int * compute_ring; int * gfx_ring; struct ras_common_if* ras_if; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_6 (struct amdgpu_device*,struct ras_common_if*,int ) ;
 int FUNC_7 (struct amdgpu_device*,struct ras_ih_if*) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*,int ) ;
 int FUNC_9 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct ras_common_if*) ;

__attribute__((used)) static int FUNC_15(void *VAR_3)
{
 int VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;

 if (FUNC_8(VAR_5, VAR_0) &&
   VAR_5->gfx.ras_if) {
  struct ras_common_if *VAR_6 = VAR_5->gfx.ras_if;
  struct ras_ih_if VAR_7 = {
   .head = *VAR_6,
  };

  FUNC_5(VAR_5, VAR_6);
  FUNC_9(VAR_5, VAR_6);
  FUNC_7(VAR_5, &VAR_7);
  FUNC_6(VAR_5, VAR_6, 0);
  FUNC_14(VAR_6);
 }

 for (VAR_4 = 0; VAR_4 < VAR_5->gfx.num_gfx_rings; VAR_4++)
  FUNC_10(&VAR_5->gfx.gfx_ring[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_5->gfx.num_compute_rings; VAR_4++)
  FUNC_10(&VAR_5->gfx.compute_ring[VAR_4]);

 FUNC_4(VAR_5);
 FUNC_3(&VAR_5->gfx.kiq.ring, &VAR_5->gfx.kiq.irq);
 FUNC_2(VAR_5);

 FUNC_12(VAR_5);
 FUNC_13(VAR_5);
 FUNC_1(&VAR_5->gfx.rlc.clear_state_obj);
 if (VAR_5->asic_type == VAR_1 || VAR_5->asic_type == VAR_2) {
  FUNC_0(&VAR_5->gfx.rlc.cp_table_obj,
    &VAR_5->gfx.rlc.cp_table_gpu_addr,
    (void **)&VAR_5->gfx.rlc.cp_table_ptr);
 }
 FUNC_11(VAR_5);

 return 0;
}
