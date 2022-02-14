
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct amdgpu_device* FUNC_1 (struct kgd_dev*) ;
 int FUNC_2 (struct kgd_dev*,int,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct kgd_dev*) ;

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_3, uint32_t VAR_4)
{
 struct amdgpu_device *VAR_5 = FUNC_1(VAR_3);
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_6 = (VAR_4 / VAR_5->gfx.mec.num_pipe_per_mec) + 1;
 VAR_7 = (VAR_4 % VAR_5->gfx.mec.num_pipe_per_mec);

 FUNC_2(VAR_3, VAR_6, VAR_7, 0, 0);

 FUNC_0(VAR_2, VAR_1 |
   VAR_0);

 FUNC_3(VAR_3);

 return 0;
}
