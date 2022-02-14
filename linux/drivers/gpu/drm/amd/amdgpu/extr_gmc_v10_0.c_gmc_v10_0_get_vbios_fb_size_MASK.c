
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int real_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static unsigned FUNC_3(struct amdgpu_device *VAR_10)
{
 u32 VAR_11 = FUNC_2(VAR_2, 0, VAR_7);
 unsigned VAR_12;

 if (FUNC_1(VAR_11, VAR_0, VAR_1)) {
  VAR_12 = 9 * 1024 * 1024;
 } else {
  u32 VAR_13;
  u32 VAR_14;

  VAR_13 = FUNC_2(VAR_2, 0, VAR_8);
  VAR_14 = FUNC_2(VAR_2, 0, VAR_9);
  VAR_12 = (FUNC_1(VAR_13,
     VAR_3, VAR_6) *
    FUNC_1(VAR_14, VAR_4, VAR_5) *
    4);
 }

 if ((VAR_10->gmc.real_vram_size - VAR_12) < (8 * 1024 * 1024)) {
  FUNC_0("Warning: pre-OS buffer uses most of vram, 				be aware of gart table overwrite\n");

  return 0;
 }

 return VAR_12;
}
