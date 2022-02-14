
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
      uint64_t VAR_1)
{
 uint32_t VAR_2, VAR_3;

 FUNC_1(VAR_0, VAR_1, &VAR_2,
          &VAR_3);

 if ((VAR_2 == 0) || (VAR_3 == 0))
  return;

 FUNC_0(VAR_0, VAR_2, 0, VAR_3, 0);
}
