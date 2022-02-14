
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct amdgpu_device {int flags; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct amdgpu_device *VAR_3,
      u8 *VAR_4, u32 VAR_5)
{
 u32 *VAR_6;
 u32 VAR_7, VAR_8;

 if (VAR_4 == ((void*)0))
  return 0;
 if (VAR_5 == 0)
  return 0;

 if (VAR_3->flags & VAR_0)
  return 0;

 VAR_6 = (u32 *)VAR_4;
 VAR_8 = FUNC_0(VAR_5, 4) / 4;

 FUNC_2(VAR_2, 0);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_6[VAR_7] = FUNC_1(VAR_1);

 return 1;
}
