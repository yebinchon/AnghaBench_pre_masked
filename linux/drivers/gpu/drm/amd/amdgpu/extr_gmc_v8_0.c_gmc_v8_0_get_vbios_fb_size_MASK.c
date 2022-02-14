
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
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static unsigned FUNC_2(struct amdgpu_device *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_5);
 unsigned VAR_9;

 if (FUNC_0(VAR_8, VAR_0, VAR_1)) {
  VAR_9 = 9 * 1024 * 1024;
 } else {
  u32 VAR_10 = FUNC_1(VAR_6);
  VAR_9 = (FUNC_0(VAR_10, VAR_3, VAR_2) *
   FUNC_0(VAR_10, VAR_3, VAR_4) *
   4);
 }

 if ((VAR_7->gmc.real_vram_size - VAR_9) < (8 * 1024 * 1024))
  return 0;
 return VAR_9;
}
