
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int asic_type; } ;



 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,int *,int *,int *,int *) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0, uint64_t VAR_1,
        int VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 switch (VAR_0->asic_type) {
 case 128:

  FUNC_3(VAR_0, VAR_1);

  if (VAR_2) {
   VAR_7 = FUNC_1(VAR_0, VAR_1);
  } else {
   VAR_7 = FUNC_2(VAR_0,
     VAR_1,
     &VAR_3,
     &VAR_4,
     &VAR_5,
     &VAR_6);

   if (VAR_7)
    return VAR_7;

   FUNC_0(VAR_0, VAR_3, VAR_5,
     VAR_4, VAR_6);
  }

  break;
 default:
  break;
 }

 return VAR_7;
}
