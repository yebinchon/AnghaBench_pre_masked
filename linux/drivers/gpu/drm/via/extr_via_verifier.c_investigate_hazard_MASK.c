
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t hazard_t ;
struct TYPE_4__ {scalar_t__ unfinished; int z_addr; int d_addr; int** t_addr; size_t texture; int* tex_level_lo; int* tex_level_hi; int** pitch; int* tex_npot; int** height; int agp_texture; int* tex_palette_size; int vertex_count; int multitex; } ;
typedef TYPE_1__ drm_via_state_t ;


 int FUNC_0 (char*,...) ;
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
 void* VAR_11 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;

__attribute__((used)) static __inline__ int
FUNC_2(uint32_t VAR_15, hazard_t VAR_16, drm_via_state_t *VAR_17)
{
 register uint32_t VAR_18, *VAR_19;

 if (VAR_17->unfinished && (VAR_17->unfinished != VAR_12[VAR_16])) {
  int VAR_20;
  if ((VAR_20 = FUNC_1(VAR_17)))
   return VAR_20;
 }

 switch (VAR_16) {
 case 144:
  if (VAR_15 == VAR_4)
   return 1;
  return 0;
 case 146:
  if ((VAR_15 & VAR_3) == VAR_2)
   return 1;
  return 0;
 case 143:
  if (VAR_15 == VAR_4)
   return 1;
  FUNC_0("Illegal DMA HALCYON_HEADER2 command\n");
  break;
 case 145:
  if ((VAR_15 & VAR_3) == VAR_2)
   return 1;
  FUNC_0("Illegal DMA HALCYON_HEADER1 command\n");
  break;
 case 147:
  if ((VAR_15 & VAR_1) == VAR_0)
   return 1;
  FUNC_0("Illegal DMA HALCYON_FIRECMD command\n");
  break;
 case 148:
  if (VAR_5 == VAR_15)
   return 0;
  FUNC_0("Illegal DMA HC_DUMMY command\n");
  break;
 case 149:
  if (0xdddddddd == VAR_15)
   return 0;
  FUNC_0("Illegal DMA 0xdddddddd command\n");
  break;
 case 130:
  VAR_17->unfinished = VAR_14;
  VAR_17->z_addr = (VAR_17->z_addr & 0xFF000000) |
      (VAR_15 & 0x00FFFFFF);
  return 0;
 case 129:
  VAR_17->unfinished = VAR_14;
  VAR_17->z_addr = (VAR_17->z_addr & 0x00FFFFFF) |
      ((VAR_15 & 0xFF) << 24);
  return 0;
 case 128:
  VAR_17->unfinished = VAR_14;
  if ((VAR_15 & 0x0000C000) == 0)
   return 0;
  FUNC_0("Attempt to place Z buffer in system memory\n");
  return 2;
 case 152:
  VAR_17->unfinished = VAR_11;
  VAR_17->d_addr = (VAR_17->d_addr & 0xFF000000) |
      (VAR_15 & 0x00FFFFFF);
  return 0;
 case 151:
  VAR_17->unfinished = VAR_11;
  VAR_17->d_addr = (VAR_17->d_addr & 0x00FFFFFF) |
      ((VAR_15 & 0xFF) << 24);
  return 0;
 case 150:
  VAR_17->unfinished = VAR_11;
  if ((VAR_15 & 0x0000C000) == 0)
   return 0;
  FUNC_0
      ("Attempt to place 3D drawing buffer in system memory\n");
  return 2;
 case 140:
  VAR_17->unfinished = VAR_13;
  VAR_18 = (VAR_15 >> 24);
  VAR_19 = &VAR_17->t_addr[VAR_17->texture][VAR_18];
  *VAR_19 = (*VAR_19 & 0xFF000000) | (VAR_15 & 0x00FFFFFF);
  return 0;
 case 139:
  VAR_17->unfinished = VAR_13;
  VAR_18 = ((VAR_15 >> 24) - 0x20);
  VAR_18 += VAR_18 << 1;
  VAR_19 = &VAR_17->t_addr[VAR_17->texture][VAR_18];
  *VAR_19 = (*VAR_19 & 0x00FFFFFF) | ((VAR_15 & 0xFF) << 24);
  VAR_19++;
  *VAR_19 = (*VAR_19 & 0x00FFFFFF) | ((VAR_15 & 0xFF00) << 16);
  VAR_19++;
  *VAR_19 = (*VAR_19 & 0x00FFFFFF) | ((VAR_15 & 0xFF0000) << 8);
  return 0;
 case 138:
  VAR_17->unfinished = VAR_13;
  VAR_17->tex_level_lo[VAR_18 = VAR_17->texture] = VAR_15 & 0x3F;
  VAR_17->tex_level_hi[VAR_18] = (VAR_15 & 0xFC0) >> 6;
  return 0;
 case 137:
  VAR_17->unfinished = VAR_13;
  VAR_18 = ((VAR_15 >> 24) - VAR_10);
  if (VAR_18 == 0 &&
      (VAR_15 & VAR_6)) {
   VAR_17->pitch[VAR_17->texture][VAR_18] =
    (VAR_15 & VAR_9);
   VAR_17->tex_npot[VAR_17->texture] = 1;
  } else {
   VAR_17->pitch[VAR_17->texture][VAR_18] =
    (VAR_15 & VAR_7) >> VAR_8;
   VAR_17->tex_npot[VAR_17->texture] = 0;
   if (VAR_15 & 0x000FFFFF) {
    FUNC_0
     ("Unimplemented texture level 0 pitch mode.\n");
    return 2;
   }
  }
  return 0;
 case 136:
  VAR_17->unfinished = VAR_13;
  VAR_19 = &VAR_17->t_addr[VAR_17->texture][9];
  *VAR_19 = (*VAR_19 & 0x00FFFFFF) | ((VAR_15 & 0xFF) << 24);
  return 0;
 case 135:
 case 134:
  VAR_17->unfinished = VAR_13;



  return 0;
 case 133:
  VAR_17->unfinished = VAR_13;
  VAR_19 = &(VAR_17->height[VAR_17->texture][0]);
  VAR_19[5] = 1 << ((VAR_15 & 0x00F00000) >> 20);
  VAR_19[4] = 1 << ((VAR_15 & 0x000F0000) >> 16);
  VAR_19[3] = 1 << ((VAR_15 & 0x0000F000) >> 12);
  VAR_19[2] = 1 << ((VAR_15 & 0x00000F00) >> 8);
  VAR_19[1] = 1 << ((VAR_15 & 0x000000F0) >> 4);
  VAR_19[0] = 1 << (VAR_15 & 0x0000000F);
  return 0;
 case 132:
  VAR_17->unfinished = VAR_13;
  VAR_19 = &(VAR_17->height[VAR_17->texture][0]);
  VAR_19[9] = 1 << ((VAR_15 & 0x0000F000) >> 12);
  VAR_19[8] = 1 << ((VAR_15 & 0x00000F00) >> 8);
  VAR_19[7] = 1 << ((VAR_15 & 0x000000F0) >> 4);
  VAR_19[6] = 1 << (VAR_15 & 0x0000000F);
  return 0;
 case 131:
  VAR_17->unfinished = VAR_13;
  if (2 == (VAR_18 = VAR_15 & 0x00000003)) {
   FUNC_0
       ("Attempt to fetch texture from system memory.\n");
   return 2;
  }
  VAR_17->agp_texture = (VAR_18 == 3);
  VAR_17->tex_palette_size[VAR_17->texture] =
      (VAR_15 >> 16) & 0x000000007;
  return 0;
 case 142:
  VAR_17->vertex_count = VAR_15 & 0x0000FFFF;
  return 0;
 case 141:
  VAR_17->multitex = (VAR_15 >> 3) & 1;
  return 0;
 default:
  FUNC_0("Illegal DMA data: 0x%x\n", VAR_15);
  return 2;
 }
 return 2;
}
