
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_3)
{
 u32 VAR_4;




 if (!FUNC_1(VAR_3))
  return 0;

 if (VAR_3->flags & VAR_0)
  return 0;




 VAR_4 = FUNC_0(VAR_1, 0, VAR_2);
 if (VAR_4)
  return 1;

 return 0;
}
