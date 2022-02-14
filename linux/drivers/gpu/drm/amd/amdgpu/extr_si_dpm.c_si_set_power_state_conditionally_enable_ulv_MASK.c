
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_ulv_param {scalar_t__ supported; } ;
struct si_power_info {struct si_ulv_param ulv; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3,
             struct amdgpu_ps *VAR_4)
{
 const struct si_power_info *VAR_5 = FUNC_1(VAR_3);
 const struct si_ulv_param *VAR_6 = &VAR_5->ulv;

 if (VAR_6->supported) {
  if (FUNC_2(VAR_3, VAR_4))
   return (FUNC_0(VAR_3, VAR_1) == VAR_2) ?
    0 : -VAR_0;
 }
 return 0;
}
