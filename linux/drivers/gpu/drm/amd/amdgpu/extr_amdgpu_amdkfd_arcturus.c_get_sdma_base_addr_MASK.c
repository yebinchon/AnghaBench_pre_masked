
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ,int ,unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static uint32_t FUNC_2(struct amdgpu_device *VAR_17,
    unsigned int VAR_18,
    unsigned int VAR_19)
{
 uint32_t VAR_20[8] = {
  FUNC_0(VAR_0, 0,
     VAR_8) - VAR_8,
  FUNC_0(VAR_1, 0,
     VAR_10) - VAR_10,
  FUNC_0(VAR_2, 0,
     VAR_11) - VAR_11,
  FUNC_0(VAR_3, 0,
     VAR_12) - VAR_12,
  FUNC_0(VAR_4, 0,
     VAR_13) - VAR_13,
  FUNC_0(VAR_5, 0,
     VAR_14) - VAR_14,
  FUNC_0(VAR_6, 0,
     VAR_15) - VAR_15,
  FUNC_0(VAR_7, 0,
     VAR_16) - VAR_16
 };
 uint32_t VAR_21;

 VAR_21 = VAR_20[VAR_18] + VAR_19 * (VAR_9 -
            VAR_8);

 FUNC_1("sdma base address: 0x%x\n", VAR_21);

 return VAR_21;
}
