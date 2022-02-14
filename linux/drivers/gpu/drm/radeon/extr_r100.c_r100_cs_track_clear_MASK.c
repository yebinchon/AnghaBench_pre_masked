
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


struct radeon_device {scalar_t__ family; } ;
struct TYPE_10__ {int pitch; int cpp; scalar_t__ offset; int * robj; } ;
struct TYPE_8__ {int * robj; } ;
struct r100_cs_track {int cb_dirty; int zb_dirty; int tex_dirty; int aa_dirty; int num_cb; int num_texture; int maxy; int separate_cube; int aaresolve; int z_enabled; int vtx_size; int immd_dwords; int num_arrays; int max_indx; TYPE_6__* textures; TYPE_5__* arrays; TYPE_4__ zb; TYPE_3__* cb; TYPE_2__ aa; } ;
struct TYPE_12__ {int pitch; int width; int height; int width_11; int height_11; int num_levels; int tex_coord_type; int txdepth; int cpp; int enabled; int lookup_disable; int roundup_w; int roundup_h; TYPE_1__* cube_info; int * robj; int compress_format; } ;
struct TYPE_11__ {int esize; int * robj; } ;
struct TYPE_9__ {int pitch; int cpp; scalar_t__ offset; int * robj; } ;
struct TYPE_7__ {int width; int height; scalar_t__ offset; int * robj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct radeon_device *VAR_3, struct r100_cs_track *VAR_4)
{
 unsigned VAR_5, VAR_6;

 VAR_4->cb_dirty = 1;
 VAR_4->zb_dirty = 1;
 VAR_4->tex_dirty = 1;
 VAR_4->aa_dirty = 1;

 if (VAR_3->family < VAR_0) {
  VAR_4->num_cb = 1;
  if (VAR_3->family <= VAR_1)
   VAR_4->num_texture = 3;
  else
   VAR_4->num_texture = 6;
  VAR_4->maxy = 2048;
  VAR_4->separate_cube = 1;
 } else {
  VAR_4->num_cb = 4;
  VAR_4->num_texture = 16;
  VAR_4->maxy = 4096;
  VAR_4->separate_cube = 0;
  VAR_4->aaresolve = 0;
  VAR_4->aa.robj = ((void*)0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_4->num_cb; VAR_5++) {
  VAR_4->cb[VAR_5].robj = ((void*)0);
  VAR_4->cb[VAR_5].pitch = 8192;
  VAR_4->cb[VAR_5].cpp = 16;
  VAR_4->cb[VAR_5].offset = 0;
 }
 VAR_4->z_enabled = 1;
 VAR_4->zb.robj = ((void*)0);
 VAR_4->zb.pitch = 8192;
 VAR_4->zb.cpp = 4;
 VAR_4->zb.offset = 0;
 VAR_4->vtx_size = 0x7F;
 VAR_4->immd_dwords = 0xFFFFFFFFUL;
 VAR_4->num_arrays = 11;
 VAR_4->max_indx = 0x00FFFFFFUL;
 for (VAR_5 = 0; VAR_5 < VAR_4->num_arrays; VAR_5++) {
  VAR_4->arrays[VAR_5].robj = ((void*)0);
  VAR_4->arrays[VAR_5].esize = 0x7F;
 }
 for (VAR_5 = 0; VAR_5 < VAR_4->num_texture; VAR_5++) {
  VAR_4->textures[VAR_5].compress_format = VAR_2;
  VAR_4->textures[VAR_5].pitch = 16536;
  VAR_4->textures[VAR_5].width = 16536;
  VAR_4->textures[VAR_5].height = 16536;
  VAR_4->textures[VAR_5].width_11 = 1 << 11;
  VAR_4->textures[VAR_5].height_11 = 1 << 11;
  VAR_4->textures[VAR_5].num_levels = 12;
  if (VAR_3->family <= VAR_1) {
   VAR_4->textures[VAR_5].tex_coord_type = 0;
   VAR_4->textures[VAR_5].txdepth = 0;
  } else {
   VAR_4->textures[VAR_5].txdepth = 16;
   VAR_4->textures[VAR_5].tex_coord_type = 1;
  }
  VAR_4->textures[VAR_5].cpp = 64;
  VAR_4->textures[VAR_5].robj = ((void*)0);

  VAR_4->textures[VAR_5].enabled = 0;
  VAR_4->textures[VAR_5].lookup_disable = 0;
  VAR_4->textures[VAR_5].roundup_w = 1;
  VAR_4->textures[VAR_5].roundup_h = 1;
  if (VAR_4->separate_cube)
   for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
    VAR_4->textures[VAR_5].cube_info[VAR_6].robj = ((void*)0);
    VAR_4->textures[VAR_5].cube_info[VAR_6].width = 16536;
    VAR_4->textures[VAR_5].cube_info[VAR_6].height = 16536;
    VAR_4->textures[VAR_5].cube_info[VAR_6].offset = 0;
   }
 }
}
