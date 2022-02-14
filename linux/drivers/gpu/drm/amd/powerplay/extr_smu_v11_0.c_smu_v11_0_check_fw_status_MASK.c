
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 uint32_t VAR_7;

 VAR_7 = FUNC_0(VAR_3 |
       (VAR_4 & 0xffffffff));

 if ((VAR_7 & VAR_1) >>
     VAR_2)
  return 0;

 return -VAR_0;
}
