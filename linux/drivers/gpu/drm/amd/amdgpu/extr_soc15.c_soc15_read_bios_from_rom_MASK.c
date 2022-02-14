
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
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_4(struct amdgpu_device *VAR_4,
         u8 *VAR_5, u32 VAR_6)
{
 u32 *VAR_7;
 u32 VAR_8, VAR_9;

 if (VAR_5 == ((void*)0))
  return 0;
 if (VAR_6 == 0)
  return 0;

 if (VAR_4->flags & VAR_0)
  return 0;

 VAR_7 = (u32 *)VAR_5;
 VAR_9 = FUNC_0(VAR_6, 4) / 4;


 FUNC_3(FUNC_2(VAR_1, 0, VAR_3), 0);

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  VAR_7[VAR_8] = FUNC_1(FUNC_2(VAR_1, 0, VAR_2));

 return 1;
}
