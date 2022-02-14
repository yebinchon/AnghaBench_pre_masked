
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ras {int recovery_work; int in_recovery; } ;
struct amdgpu_device {int dummy; } ;


 struct amdgpu_ras* FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct amdgpu_device *VAR_0,
  bool VAR_1)
{
 struct amdgpu_ras *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(&VAR_2->in_recovery, 0, 1) == 0)
  FUNC_2(&VAR_2->recovery_work);
 return 0;
}
