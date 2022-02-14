
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_3__ {int num_pipe_per_mec; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 struct amdgpu_device* FUNC_0 (struct kgd_dev*) ;
 int FUNC_1 (struct kgd_dev*,int,int,int,int ) ;

__attribute__((used)) static void FUNC_2(struct kgd_dev *VAR_0, uint32_t VAR_1,
    uint32_t VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_0(VAR_0);

 uint32_t VAR_4 = (VAR_1 / VAR_3->gfx.mec.num_pipe_per_mec) + 1;
 uint32_t VAR_5 = (VAR_1 % VAR_3->gfx.mec.num_pipe_per_mec);

 FUNC_1(VAR_0, VAR_4, VAR_5, VAR_2, 0);
}
