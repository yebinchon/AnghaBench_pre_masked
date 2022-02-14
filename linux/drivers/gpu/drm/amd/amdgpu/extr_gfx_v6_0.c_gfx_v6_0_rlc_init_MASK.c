
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct cs_section_def {int dummy; } ;
struct TYPE_3__ {int* reg_list; int reg_list_size; int clear_state_size; int* cs_ptr; int clear_state_obj; scalar_t__ clear_state_gpu_addr; struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,int,int ,int ,int *,scalar_t__*,void**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct amdgpu_device*,int volatile*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (scalar_t__) ;
 struct cs_section_def* VAR_2 ;
 int FUNC_11 (scalar_t__) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_4)
{
 const u32 *VAR_5;
 volatile u32 *VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 const struct cs_section_def *VAR_9;
 int VAR_10;

 VAR_4->gfx.rlc.reg_list = VAR_3;
 VAR_4->gfx.rlc.reg_list_size =
   (u32)FUNC_0(VAR_3);

 VAR_4->gfx.rlc.cs_data = VAR_2;
 VAR_5 = VAR_4->gfx.rlc.reg_list;
 VAR_7 = VAR_4->gfx.rlc.reg_list_size;
 VAR_9 = VAR_4->gfx.rlc.cs_data;

 if (VAR_5) {

  VAR_10 = FUNC_5(VAR_4, VAR_7);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_9) {

  VAR_4->gfx.rlc.clear_state_size = FUNC_9(VAR_4);
  VAR_7 = VAR_4->gfx.rlc.clear_state_size + (256 / 4);

  VAR_10 = FUNC_1(VAR_4, VAR_7 * 4, VAR_1,
           VAR_0,
           &VAR_4->gfx.rlc.clear_state_obj,
           &VAR_4->gfx.rlc.clear_state_gpu_addr,
           (void **)&VAR_4->gfx.rlc.cs_ptr);
  if (VAR_10) {
   FUNC_7(VAR_4->dev, "(%d) create RLC c bo failed\n", VAR_10);
   FUNC_4(VAR_4);
   return VAR_10;
  }


  VAR_6 = VAR_4->gfx.rlc.cs_ptr;
  VAR_8 = VAR_4->gfx.rlc.clear_state_gpu_addr + 256;
  VAR_6[0] = FUNC_6(FUNC_11(VAR_8));
  VAR_6[1] = FUNC_6(FUNC_10(VAR_8));
  VAR_6[2] = FUNC_6(VAR_4->gfx.rlc.clear_state_size);
  FUNC_8(VAR_4, &VAR_6[(256/4)]);
  FUNC_2(VAR_4->gfx.rlc.clear_state_obj);
  FUNC_3(VAR_4->gfx.rlc.clear_state_obj);
 }

 return 0;
}
