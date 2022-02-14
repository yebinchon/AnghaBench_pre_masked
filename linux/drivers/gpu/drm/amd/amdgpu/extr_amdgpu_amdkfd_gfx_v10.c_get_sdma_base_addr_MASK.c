
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static uint32_t FUNC_2(struct amdgpu_device *VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7)
{
 uint32_t VAR_8[2] = {
  FUNC_0(VAR_0, 0,
     VAR_2) - VAR_2,






  FUNC_0(VAR_1, 0,
     VAR_4) - VAR_2
 };
 uint32_t VAR_9;

 VAR_9 = VAR_8[VAR_6] + VAR_7 * (VAR_3 -
            VAR_2);

 FUNC_1("sdma base address: 0x%x\n", VAR_9);

 return VAR_9;
}
