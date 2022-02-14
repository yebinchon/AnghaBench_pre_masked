
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int texture_offset; int texture_size; TYPE_1__* agp_textures; } ;
typedef TYPE_2__ drm_savage_private_t ;
struct TYPE_4__ {int offset; int size; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(drm_savage_private_t * VAR_1, int VAR_2,
     uint32_t VAR_3)
{
 if ((VAR_3 & 6) != 2) {
  FUNC_0("bad texAddr%d %08x (reserved bits)\n", VAR_2, VAR_3);
  return -VAR_0;
 }
 if (!(VAR_3 & 1)) {
  VAR_3 &= ~7;
  if (VAR_3 < VAR_1->texture_offset ||
      VAR_3 >= VAR_1->texture_offset + VAR_1->texture_size) {
   FUNC_0
       ("bad texAddr%d %08x (local addr out of range)\n",
        VAR_2, VAR_3);
   return -VAR_0;
  }
 } else {
  if (!VAR_1->agp_textures) {
   FUNC_0("bad texAddr%d %08x (AGP not available)\n",
      VAR_2, VAR_3);
   return -VAR_0;
  }
  VAR_3 &= ~7;
  if (VAR_3 < VAR_1->agp_textures->offset ||
      VAR_3 >= (VAR_1->agp_textures->offset +
        VAR_1->agp_textures->size)) {
   FUNC_0
       ("bad texAddr%d %08x (AGP addr out of range)\n",
        VAR_2, VAR_3);
   return -VAR_0;
  }
 }
 return 0;
}
