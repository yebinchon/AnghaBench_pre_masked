
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct kgd_dev *VAR_2,
       uint8_t VAR_3)
{
 uint32_t VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *) VAR_2;

 VAR_4 = FUNC_0(VAR_1 + VAR_3);
 return VAR_4 & VAR_0;
}
