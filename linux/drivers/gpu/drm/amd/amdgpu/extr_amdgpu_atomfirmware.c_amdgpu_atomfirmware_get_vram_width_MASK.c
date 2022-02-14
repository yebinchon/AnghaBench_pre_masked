
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* vram_module; } ;
struct TYPE_9__ {TYPE_2__* vram_module; } ;
union vram_info {TYPE_5__ v24; TYPE_3__ v23; } ;
struct TYPE_7__ {int umachannelnumber; } ;
union igp_info {TYPE_1__ v11; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct amdgpu_mode_info {TYPE_6__* atom_context; } ;
struct amdgpu_device {int flags; struct amdgpu_mode_info mode_info; } ;
struct TYPE_12__ {scalar_t__ bios; } ;
struct TYPE_10__ {int channel_num; int channel_width; } ;
struct TYPE_8__ {int channel_num; int channel_width; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,union vram_info*) ;
 union vram_info* VAR_2 ;

int FUNC_2(struct amdgpu_device *VAR_3)
{
 struct amdgpu_mode_info *VAR_4 = &VAR_3->mode_info;
 int VAR_5;
 u16 VAR_6, VAR_7;
 union igp_info *VAR_8;
 union vram_info *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u8 VAR_12, VAR_13;

 if (VAR_3->flags & VAR_0)
  VAR_5 = FUNC_1(VAR_1,
          VAR_2);
 else
  VAR_5 = FUNC_1(VAR_1,
          VAR_9);


 if (FUNC_0(VAR_4->atom_context, VAR_5, &VAR_7,
       &VAR_12, &VAR_13, &VAR_6)) {
  if (VAR_3->flags & VAR_0) {
   VAR_8 = (union igp_info *)
    (VAR_4->atom_context->bios + VAR_6);
   switch (VAR_13) {
   case 11:
    VAR_10 = VAR_8->v11.umachannelnumber;

    return VAR_10 * 64;
   default:
    return 0;
   }
  } else {
   VAR_9 = (union vram_info *)
    (VAR_4->atom_context->bios + VAR_6);
   switch (VAR_13) {
   case 3:
    VAR_10 = VAR_9->v23.vram_module[0].channel_num;
    VAR_11 = VAR_9->v23.vram_module[0].channel_width;
    return VAR_10 * (1 << VAR_11);
   case 4:
    VAR_10 = VAR_9->v24.vram_module[0].channel_num;
    VAR_11 = VAR_9->v24.vram_module[0].channel_width;
    return VAR_10 * (1 << VAR_11);
   default:
    return 0;
   }
  }
 }

 return 0;
}
