
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_3)
{
 if (VAR_3->asic_type == VAR_0 || VAR_3->asic_type == VAR_1)
  return FUNC_0(VAR_3, VAR_2);
 else
  return FUNC_1(VAR_3);
}
