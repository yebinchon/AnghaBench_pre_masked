
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int real_vram_size; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gmc; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static unsigned FUNC_3(struct amdgpu_device *VAR_12)
{
 u32 VAR_13;
 unsigned VAR_14;





 if (FUNC_2(VAR_12))
  return 9 * 1024 * 1024;

 VAR_13 = FUNC_1(VAR_2, 0, VAR_9);
 if (FUNC_0(VAR_13, VAR_0, VAR_1)) {
  VAR_14 = 9 * 1024 * 1024;
 } else {
  u32 VAR_15;

  switch (VAR_12->asic_type) {
  case 132:
  case 131:
   VAR_15 = FUNC_1(VAR_2, 0, VAR_10);
   VAR_14 = (FUNC_0(VAR_15,
           VAR_3, VAR_4) *
    FUNC_0(VAR_15,
           VAR_3, VAR_5) *
    4);
   break;
  case 130:
  case 129:
  case 128:
  default:
   VAR_15 = FUNC_1(VAR_2, 0, VAR_11);
   VAR_14 = (FUNC_0(VAR_15, VAR_6, VAR_7) *
    FUNC_0(VAR_15, VAR_6, VAR_8) *
    4);
   break;
  }
 }

 if ((VAR_12->gmc.real_vram_size - VAR_14) < (8 * 1024 * 1024))
  return 0;

 return VAR_14;
}
