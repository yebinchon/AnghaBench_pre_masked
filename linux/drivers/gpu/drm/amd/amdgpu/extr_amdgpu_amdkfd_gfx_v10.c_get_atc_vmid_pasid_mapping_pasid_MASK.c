
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static uint16_t FUNC_2(struct kgd_dev *VAR_3,
        uint8_t VAR_4)
{
 uint32_t VAR_5;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *) VAR_3;

 VAR_5 = FUNC_0(FUNC_1(VAR_1, 0, VAR_2)
       + VAR_4);
 return VAR_5 & VAR_0;
}
