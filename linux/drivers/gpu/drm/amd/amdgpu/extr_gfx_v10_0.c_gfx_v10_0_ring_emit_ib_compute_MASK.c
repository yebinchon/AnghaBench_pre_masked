
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
 int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_5,
        struct amdgpu_job *VAR_6,
        struct amdgpu_ib *VAR_7,
        uint32_t VAR_8)
{
 unsigned VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10 = VAR_1 | VAR_7->length_dw | (VAR_9 << 24);
 if (VAR_7->flags & VAR_0) {
  FUNC_3(VAR_5, FUNC_2(VAR_3, 1));
  FUNC_3(VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_5->adev->gds.gds_compute_max_wave_id);
 }

 FUNC_3(VAR_5, FUNC_2(VAR_2, 2));
 FUNC_1(VAR_7->gpu_addr & 0x3);
 FUNC_3(VAR_5,



    FUNC_4(VAR_7->gpu_addr));
 FUNC_3(VAR_5, FUNC_5(VAR_7->gpu_addr));
 FUNC_3(VAR_5, VAR_10);
}
