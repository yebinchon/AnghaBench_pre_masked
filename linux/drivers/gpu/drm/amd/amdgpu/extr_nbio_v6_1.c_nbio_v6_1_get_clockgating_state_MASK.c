
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_6,
         u32 *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 & VAR_2)
  *VAR_7 |= VAR_1;


 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 & VAR_3)
  *VAR_7 |= VAR_0;
}
