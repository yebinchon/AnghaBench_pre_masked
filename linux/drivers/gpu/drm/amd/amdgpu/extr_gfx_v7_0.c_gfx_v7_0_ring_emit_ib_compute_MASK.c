
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_ring {TYPE_2__* adev; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {unsigned int length_dw; int flags; int gpu_addr; } ;
struct TYPE_3__ {int gds_compute_max_wave_id; } ;
struct TYPE_4__ {TYPE_1__ gds; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_6,
       struct amdgpu_job *VAR_7,
       struct amdgpu_ib *VAR_8,
       uint32_t VAR_9)
{
 unsigned VAR_10 = FUNC_0(VAR_7);
 u32 VAR_11 = VAR_1 | VAR_8->length_dw | (VAR_10 << 24);
 if (VAR_8->flags & VAR_0) {
  FUNC_2(VAR_6, FUNC_1(VAR_3, 1));
  FUNC_2(VAR_6, VAR_5 - VAR_4);
  FUNC_2(VAR_6, VAR_6->adev->gds.gds_compute_max_wave_id);
 }

 FUNC_2(VAR_6, FUNC_1(VAR_2, 2));
 FUNC_2(VAR_6,



       (VAR_8->gpu_addr & 0xFFFFFFFC));
 FUNC_2(VAR_6, FUNC_3(VAR_8->gpu_addr) & 0xFFFF);
 FUNC_2(VAR_6, VAR_11);
}
