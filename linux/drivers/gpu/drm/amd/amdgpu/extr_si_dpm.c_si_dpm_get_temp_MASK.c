
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_3;

 VAR_4 = (FUNC_0(VAR_0) & VAR_1) >>
  VAR_2;

 if (VAR_4 & 0x200)
  VAR_5 = 255;
 else
  VAR_5 = VAR_4 & 0x1ff;

 VAR_5 = (VAR_5 * 1000);

 return VAR_5;
}
