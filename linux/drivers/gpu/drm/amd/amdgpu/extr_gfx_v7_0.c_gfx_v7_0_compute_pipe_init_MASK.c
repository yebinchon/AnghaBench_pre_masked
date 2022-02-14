
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int num_pipe_per_mec; int hpd_eop_gpu_addr; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {int srbm_mutex; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int,int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_6,
           int VAR_7, int VAR_8)
{
 u64 VAR_9;
 u32 VAR_10;
 size_t VAR_11 = (VAR_7 * VAR_6->gfx.mec.num_pipe_per_mec + VAR_8)
       * VAR_1 * 2;

 FUNC_3(&VAR_6->srbm_mutex);
 VAR_9 = VAR_6->gfx.mec.hpd_eop_gpu_addr + VAR_11;

 FUNC_2(VAR_6, VAR_7 + 1, VAR_8, 0, 0);


 FUNC_1(VAR_2, VAR_9 >> 8);
 FUNC_1(VAR_3, FUNC_6(VAR_9) >> 8);


 FUNC_1(VAR_5, 0);


 VAR_10 = FUNC_0(VAR_4);
 VAR_10 &= ~VAR_0;
 VAR_10 |= FUNC_5(VAR_1 / 8);
 FUNC_1(VAR_4, VAR_10);

 FUNC_2(VAR_6, 0, 0, 0, 0);
 FUNC_4(&VAR_6->srbm_mutex);
}
