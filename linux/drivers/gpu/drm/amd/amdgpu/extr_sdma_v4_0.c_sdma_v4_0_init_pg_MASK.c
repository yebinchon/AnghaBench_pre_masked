
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; int asic_type; } ;


 int VAR_0 ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1)
{
 if (!(VAR_1->pg_flags & VAR_0))
  return;

 switch (VAR_1->asic_type) {
 case 129:
 case 128:
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, 1);
  break;
 default:
  break;
 }
}
