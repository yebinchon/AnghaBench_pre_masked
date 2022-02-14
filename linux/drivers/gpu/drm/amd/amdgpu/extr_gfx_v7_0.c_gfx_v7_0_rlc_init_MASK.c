
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct cs_section_def {int dummy; } ;
struct TYPE_3__ {void** reg_list; scalar_t__ cp_table_size; struct cs_section_def* cs_data; void* reg_list_size; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {int flags; scalar_t__ asic_type; TYPE_2__ gfx; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,void*) ;
 struct cs_section_def* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_6)
{
 const u32 *VAR_7;
 u32 VAR_8;
 const struct cs_section_def *VAR_9;
 int VAR_10;


 if (VAR_6->flags & VAR_0) {
  if (VAR_6->asic_type == VAR_1) {
   VAR_6->gfx.rlc.reg_list = VAR_5;
   VAR_6->gfx.rlc.reg_list_size =
    (u32)FUNC_1(VAR_5);
  } else {
   VAR_6->gfx.rlc.reg_list = VAR_4;
   VAR_6->gfx.rlc.reg_list_size =
    (u32)FUNC_1(VAR_4);
  }
 }
 VAR_6->gfx.rlc.cs_data = VAR_3;
 VAR_6->gfx.rlc.cp_table_size = FUNC_0(VAR_2 * 5 * 4, 2048);
 VAR_6->gfx.rlc.cp_table_size += 64 * 1024;

 VAR_7 = VAR_6->gfx.rlc.reg_list;
 VAR_8 = VAR_6->gfx.rlc.reg_list_size;
 VAR_8 += (5 * 16) + 48 + 48 + 64;

 VAR_9 = VAR_6->gfx.rlc.cs_data;

 if (VAR_7) {

  VAR_10 = FUNC_4(VAR_6, VAR_8);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_9) {

  VAR_10 = FUNC_3(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_6->gfx.rlc.cp_table_size) {
  VAR_10 = FUNC_2(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
