
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; } ;
struct radeon_bo {int dummy; } ;
struct r100_cs_track {unsigned int num_texture; TYPE_1__* textures; int separate_cube; } ;
struct TYPE_2__ {unsigned int num_levels; int pitch; int cpp; unsigned int width; unsigned int width_11; unsigned int height; unsigned int height_11; int tex_coord_type; int txdepth; scalar_t__ compress_format; scalar_t__ roundup_h; scalar_t__ roundup_w; scalar_t__ use_pitch; struct radeon_bo* robj; scalar_t__ lookup_disable; int enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_device*,struct r100_cs_track*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (scalar_t__,unsigned int,unsigned int) ;
 unsigned long FUNC_4 (struct radeon_bo*) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_3,
           struct r100_cs_track *VAR_4)
{
 struct radeon_bo *VAR_5;
 unsigned long VAR_6;
 unsigned VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_texture; VAR_7++) {
  if (!VAR_4->textures[VAR_7].enabled)
   continue;
  if (VAR_4->textures[VAR_7].lookup_disable)
   continue;
  VAR_5 = VAR_4->textures[VAR_7].robj;
  if (VAR_5 == ((void*)0)) {
   FUNC_0("No texture bound to unit %u\n", VAR_7);
   return -VAR_2;
  }
  VAR_6 = 0;
  for (VAR_8 = 0; VAR_8 <= VAR_4->textures[VAR_7].num_levels; VAR_8++) {
   if (VAR_4->textures[VAR_7].use_pitch) {
    if (VAR_3->family < VAR_0)
     VAR_9 = (VAR_4->textures[VAR_7].pitch / VAR_4->textures[VAR_7].cpp) / (1 << VAR_8);
    else
     VAR_9 = VAR_4->textures[VAR_7].pitch / (1 << VAR_8);
   } else {
    VAR_9 = VAR_4->textures[VAR_7].width;
    if (VAR_3->family >= VAR_1)
     VAR_9 |= VAR_4->textures[VAR_7].width_11;
    VAR_9 = VAR_9 / (1 << VAR_8);
    if (VAR_4->textures[VAR_7].roundup_w)
     VAR_9 = FUNC_5(VAR_9);
   }
   VAR_10 = VAR_4->textures[VAR_7].height;
   if (VAR_3->family >= VAR_1)
    VAR_10 |= VAR_4->textures[VAR_7].height_11;
   VAR_10 = VAR_10 / (1 << VAR_8);
   if (VAR_4->textures[VAR_7].roundup_h)
    VAR_10 = FUNC_5(VAR_10);
   if (VAR_4->textures[VAR_7].tex_coord_type == 1) {
    VAR_11 = (1 << VAR_4->textures[VAR_7].txdepth) / (1 << VAR_8);
    if (!VAR_11)
     VAR_11 = 1;
   } else {
    VAR_11 = 1;
   }
   if (VAR_4->textures[VAR_7].compress_format) {

    VAR_6 += FUNC_3(VAR_4->textures[VAR_7].compress_format, VAR_9, VAR_10) * VAR_11;

   } else
    VAR_6 += VAR_9 * VAR_10 * VAR_11;
  }
  VAR_6 *= VAR_4->textures[VAR_7].cpp;

  switch (VAR_4->textures[VAR_7].tex_coord_type) {
  case 0:
  case 1:
   break;
  case 2:
   if (VAR_4->separate_cube) {
    VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_7);
    if (VAR_12)
     return VAR_12;
   } else
    VAR_6 *= 6;
   break;
  default:
   FUNC_0("Invalid texture coordinate type %u for unit "
      "%u\n", VAR_4->textures[VAR_7].tex_coord_type, VAR_7);
   return -VAR_2;
  }
  if (VAR_6 > FUNC_4(VAR_5)) {
   FUNC_0("Texture of unit %u needs %lu bytes but is "
      "%lu\n", VAR_7, VAR_6, FUNC_4(VAR_5));
   FUNC_2(&VAR_4->textures[VAR_7]);
   return -VAR_2;
  }
 }
 return 0;
}
