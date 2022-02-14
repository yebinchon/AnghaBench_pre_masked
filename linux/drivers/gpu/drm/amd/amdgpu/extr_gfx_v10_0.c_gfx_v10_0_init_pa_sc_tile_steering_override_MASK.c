
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_3__ {int max_shader_engines; int max_sh_per_se; int num_sc_per_sh; int num_packer_per_sc; } ;
struct TYPE_4__ {TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct amdgpu_device *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;


 VAR_7 = VAR_6->gfx.config.max_shader_engines * VAR_6->gfx.config.max_sh_per_se *
   VAR_6->gfx.config.num_sc_per_sh;

 VAR_9 = FUNC_0(VAR_6);
 VAR_8 = FUNC_1(VAR_9);
 VAR_10 = VAR_8 / VAR_6->gfx.config.num_sc_per_sh;

 VAR_11 = VAR_6->gfx.config.num_packer_per_sc;

 VAR_12 = 0;
 VAR_12 |=
  (FUNC_2(VAR_7) << VAR_5) &
  VAR_4;
 VAR_12 |=
  (FUNC_2(VAR_10) << VAR_3) &
  VAR_2;
 VAR_12 |=
  (FUNC_2(VAR_11) << VAR_1) &
  VAR_0;

 return VAR_12;
}
