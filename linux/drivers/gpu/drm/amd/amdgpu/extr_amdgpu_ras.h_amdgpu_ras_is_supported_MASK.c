
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras {int supported; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static inline int FUNC_1(struct amdgpu_device *VAR_1,
  unsigned int VAR_2)
{
 struct amdgpu_ras *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_0)
  return 0;
 return VAR_3 && (VAR_3->supported & (1 << VAR_2));
}
