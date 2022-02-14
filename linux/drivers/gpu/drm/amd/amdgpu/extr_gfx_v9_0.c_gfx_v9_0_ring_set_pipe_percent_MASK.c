
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; struct amdgpu_device* adev; } ;
struct TYPE_4__ {int num_pipe_per_mec; } ;
struct TYPE_3__ {TYPE_2__ mec; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_5,
        bool VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_6 ? VAR_2 : 0x1;

 VAR_8 = VAR_5->me * VAR_7->gfx.mec.num_pipe_per_mec + VAR_5->pipe;


 if (VAR_5->me > 0)
  VAR_8 -= 2;

 VAR_10 = FUNC_2(VAR_0, 0, VAR_4) + VAR_8;
 VAR_9 = FUNC_1(VAR_10);
 VAR_9 = FUNC_0(VAR_9, VAR_1, VAR_3, VAR_11);
 FUNC_3(VAR_10, VAR_9);
}
