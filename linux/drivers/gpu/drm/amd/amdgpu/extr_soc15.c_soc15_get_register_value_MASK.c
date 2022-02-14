
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int db_debug2; int gb_addr_config; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct amdgpu_device*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_3(struct amdgpu_device *VAR_3,
      bool VAR_4, u32 VAR_5,
      u32 VAR_6, u32 VAR_7)
{
 if (VAR_4) {
  return FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7);
 } else {
  if (VAR_7 == FUNC_1(VAR_0, 0, VAR_2))
   return VAR_3->gfx.config.gb_addr_config;
  else if (VAR_7 == FUNC_1(VAR_0, 0, VAR_1))
   return VAR_3->gfx.config.db_debug2;
  return FUNC_0(VAR_7);
 }
}
