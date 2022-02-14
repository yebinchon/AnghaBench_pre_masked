
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_5->flags & VAR_0)
  return 0;


 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_1(VAR_3);
 if ((0 == FUNC_0(VAR_6, VAR_1, VAR_2)) &&
     (0x20100 <= VAR_7))
  return 1;

 return 0;
}
