
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int ucNumOfVRAMModule; scalar_t__ aVramInfo; } ;
struct TYPE_13__ {int ucNumOfVRAMModule; scalar_t__ aVramInfo; } ;
struct TYPE_11__ {int ucNumOfVRAMModule; scalar_t__ aVramInfo; } ;
union vram_info {TYPE_5__ v2_1; TYPE_4__ v1_4; TYPE_2__ v1_3; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {TYPE_9__* atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct atom_memory_info {int mem_vendor; int mem_type; } ;
struct TYPE_18__ {scalar_t__ bios; } ;
struct TYPE_12__ {int ucMemoryVenderID; int ucMemoryType; } ;
struct TYPE_17__ {TYPE_3__ asMemory; int usSize; } ;
struct TYPE_16__ {int ucMemoryVenderID; int ucMemoryType; int usModuleSize; } ;
struct TYPE_15__ {int ucMemoryVenderID; int ucMemoryType; int usModuleSize; } ;
typedef TYPE_6__ ATOM_VRAM_MODULE_V7 ;
typedef TYPE_7__ ATOM_VRAM_MODULE_V4 ;
typedef TYPE_8__ ATOM_VRAM_MODULE_V3 ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_9__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct atom_memory_info*,int ,int) ;

int FUNC_5(struct radeon_device *VAR_3,
    u8 VAR_4, struct atom_memory_info *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_0, VAR_2);
 u8 VAR_7, VAR_8, VAR_9;
 u16 VAR_10, VAR_11;
 union vram_info *VAR_12;

 FUNC_4(VAR_5, 0, sizeof(struct atom_memory_info));

 if (FUNC_2(VAR_3->mode_info.atom_context, VAR_6, &VAR_11,
       &VAR_7, &VAR_8, &VAR_10)) {
  VAR_12 = (union vram_info *)
   (VAR_3->mode_info.atom_context->bios + VAR_10);
  switch (VAR_7) {
  case 1:
   switch (VAR_8) {
   case 3:

    if (VAR_4 < VAR_12->v1_3.ucNumOfVRAMModule) {
     ATOM_VRAM_MODULE_V3 *VAR_13 =
      (ATOM_VRAM_MODULE_V3 *)VAR_12->v1_3.aVramInfo;

     for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
      if (FUNC_3(VAR_13->usSize) == 0)
       return -VAR_1;
      VAR_13 = (ATOM_VRAM_MODULE_V3 *)
       ((u8 *)VAR_13 + FUNC_3(VAR_13->usSize));
     }
     VAR_5->mem_vendor = VAR_13->asMemory.ucMemoryVenderID & 0xf;
     VAR_5->mem_type = VAR_13->asMemory.ucMemoryType & 0xf0;
    } else
     return -VAR_1;
    break;
   case 4:

    if (VAR_4 < VAR_12->v1_4.ucNumOfVRAMModule) {
     ATOM_VRAM_MODULE_V4 *VAR_14 =
      (ATOM_VRAM_MODULE_V4 *)VAR_12->v1_4.aVramInfo;

     for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
      if (FUNC_3(VAR_14->usModuleSize) == 0)
       return -VAR_1;
      VAR_14 = (ATOM_VRAM_MODULE_V4 *)
       ((u8 *)VAR_14 + FUNC_3(VAR_14->usModuleSize));
     }
     VAR_5->mem_vendor = VAR_14->ucMemoryVenderID & 0xf;
     VAR_5->mem_type = VAR_14->ucMemoryType & 0xf0;
    } else
     return -VAR_1;
    break;
   default:
    FUNC_0("Unknown table version %d, %d\n", VAR_7, VAR_8);
    return -VAR_1;
   }
   break;
  case 2:
   switch (VAR_8) {
   case 1:

    if (VAR_4 < VAR_12->v2_1.ucNumOfVRAMModule) {
     ATOM_VRAM_MODULE_V7 *VAR_15 =
      (ATOM_VRAM_MODULE_V7 *)VAR_12->v2_1.aVramInfo;

     for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
      if (FUNC_3(VAR_15->usModuleSize) == 0)
       return -VAR_1;
      VAR_15 = (ATOM_VRAM_MODULE_V7 *)
       ((u8 *)VAR_15 + FUNC_3(VAR_15->usModuleSize));
     }
     VAR_5->mem_vendor = VAR_15->ucMemoryVenderID & 0xf;
     VAR_5->mem_type = VAR_15->ucMemoryType & 0xf0;
    } else
     return -VAR_1;
    break;
   default:
    FUNC_0("Unknown table version %d, %d\n", VAR_7, VAR_8);
    return -VAR_1;
   }
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_7, VAR_8);
   return -VAR_1;
  }
  return 0;
 }
 return -VAR_1;
}
