
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_ulv_param {scalar_t__ supported; } ;
struct si_power_info {struct si_ulv_param ulv; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 struct si_power_info* FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_3)
{
 struct si_power_info *VAR_4 = FUNC_1(VAR_3);
 struct si_ulv_param *VAR_5 = &VAR_4->ulv;

 if (VAR_5->supported)
  return (FUNC_0(VAR_3, VAR_1) == VAR_2) ?
   0 : -VAR_0;

 return 0;
}
