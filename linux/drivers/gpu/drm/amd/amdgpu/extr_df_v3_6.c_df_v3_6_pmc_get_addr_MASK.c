
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_16,
     uint64_t VAR_17,
     int VAR_18,
     uint32_t *VAR_19,
     uint32_t *VAR_20)
{
 int VAR_21 = FUNC_0(VAR_16, VAR_17);

 if (VAR_21 < 0)
  return;

 switch (VAR_21) {

 case 0:
  *VAR_19 = VAR_18 ? VAR_4 : VAR_12;
  *VAR_20 = VAR_18 ? VAR_0 : VAR_8;
  break;
 case 1:
  *VAR_19 = VAR_18 ? VAR_5 : VAR_13;
  *VAR_20 = VAR_18 ? VAR_1 : VAR_9;
  break;
 case 2:
  *VAR_19 = VAR_18 ? VAR_6 : VAR_14;
  *VAR_20 = VAR_18 ? VAR_2 : VAR_10;
  break;
 case 3:
  *VAR_19 = VAR_18 ? VAR_7 : VAR_15;
  *VAR_20 = VAR_18 ? VAR_3 : VAR_11;
  break;

 }

}
