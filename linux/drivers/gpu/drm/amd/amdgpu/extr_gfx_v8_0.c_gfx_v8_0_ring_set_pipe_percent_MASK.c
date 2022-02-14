
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; struct amdgpu_device* adev; } ;
struct TYPE_3__ {int num_pipe_per_mec; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_4,
        bool VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_4->adev;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = VAR_5 ? VAR_1 : 0x1;

 VAR_7 = VAR_4->me * VAR_6->gfx.mec.num_pipe_per_mec + VAR_4->pipe;


 if (VAR_4->me > 0)
  VAR_7 -= 2;

 VAR_9 = VAR_3 + VAR_7;
 VAR_8 = FUNC_1(VAR_9);
 VAR_8 = FUNC_0(VAR_8, VAR_0, VAR_2, VAR_10);
 FUNC_2(VAR_9, VAR_8);
}
