
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_device {int dev; } ;
struct TYPE_8__ {unsigned long pitch; unsigned long offset; int * robj; } ;
struct TYPE_6__ {unsigned long pitch; unsigned long cpp; unsigned long offset; int * robj; } ;
struct r100_cs_track {int cb_dirty; unsigned int num_cb; unsigned long maxy; int zb_dirty; int aa_dirty; int vap_vf_cntl; unsigned int vap_alt_nverts; unsigned int num_arrays; int max_indx; unsigned int vtx_size; unsigned long immd_dwords; int tex_dirty; TYPE_1__* arrays; TYPE_4__ aa; TYPE_3__* cb; scalar_t__ aaresolve; TYPE_2__ zb; scalar_t__ z_enabled; int blend_read_enable; int color_channel_mask; int zb_cb_clear; } ;
struct TYPE_7__ {unsigned long pitch; unsigned long cpp; scalar_t__ offset; int * robj; } ;
struct TYPE_5__ {int esize; int * robj; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned long,int) ;
 int FUNC_2 (struct radeon_device*,struct r100_cs_track*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct radeon_device *VAR_1, struct r100_cs_track *VAR_2)
{
 unsigned VAR_3;
 unsigned long VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7 = VAR_2->cb_dirty ? VAR_2->num_cb : 0;

 if (VAR_7 && !VAR_2->zb_cb_clear && !VAR_2->color_channel_mask &&
     !VAR_2->blend_read_enable)
  VAR_7 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++) {
  if (VAR_2->cb[VAR_3].robj == ((void*)0)) {
   FUNC_0("[drm] No buffer for color buffer %d !\n", VAR_3);
   return -VAR_0;
  }
  VAR_4 = VAR_2->cb[VAR_3].pitch * VAR_2->cb[VAR_3].cpp * VAR_2->maxy;
  VAR_4 += VAR_2->cb[VAR_3].offset;
  if (VAR_4 > FUNC_3(VAR_2->cb[VAR_3].robj)) {
   FUNC_0("[drm] Buffer too small for color buffer %d "
      "(need %lu have %lu) !\n", VAR_3, VAR_4,
      FUNC_3(VAR_2->cb[VAR_3].robj));
   FUNC_0("[drm] color buffer %d (%u %u %u %u)\n",
      VAR_3, VAR_2->cb[VAR_3].pitch, VAR_2->cb[VAR_3].cpp,
      VAR_2->cb[VAR_3].offset, VAR_2->maxy);
   return -VAR_0;
  }
 }
 VAR_2->cb_dirty = 0;

 if (VAR_2->zb_dirty && VAR_2->z_enabled) {
  if (VAR_2->zb.robj == ((void*)0)) {
   FUNC_0("[drm] No buffer for z buffer !\n");
   return -VAR_0;
  }
  VAR_4 = VAR_2->zb.pitch * VAR_2->zb.cpp * VAR_2->maxy;
  VAR_4 += VAR_2->zb.offset;
  if (VAR_4 > FUNC_3(VAR_2->zb.robj)) {
   FUNC_0("[drm] Buffer too small for z buffer "
      "(need %lu have %lu) !\n", VAR_4,
      FUNC_3(VAR_2->zb.robj));
   FUNC_0("[drm] zbuffer (%u %u %u %u)\n",
      VAR_2->zb.pitch, VAR_2->zb.cpp,
      VAR_2->zb.offset, VAR_2->maxy);
   return -VAR_0;
  }
 }
 VAR_2->zb_dirty = 0;

 if (VAR_2->aa_dirty && VAR_2->aaresolve) {
  if (VAR_2->aa.robj == ((void*)0)) {
   FUNC_0("[drm] No buffer for AA resolve buffer %d !\n", VAR_3);
   return -VAR_0;
  }

  VAR_4 = VAR_2->aa.pitch * VAR_2->cb[0].cpp * VAR_2->maxy;
  VAR_4 += VAR_2->aa.offset;
  if (VAR_4 > FUNC_3(VAR_2->aa.robj)) {
   FUNC_0("[drm] Buffer too small for AA resolve buffer %d "
      "(need %lu have %lu) !\n", VAR_3, VAR_4,
      FUNC_3(VAR_2->aa.robj));
   FUNC_0("[drm] AA resolve buffer %d (%u %u %u %u)\n",
      VAR_3, VAR_2->aa.pitch, VAR_2->cb[0].cpp,
      VAR_2->aa.offset, VAR_2->maxy);
   return -VAR_0;
  }
 }
 VAR_2->aa_dirty = 0;

 VAR_5 = (VAR_2->vap_vf_cntl >> 4) & 0x3;
 if (VAR_2->vap_vf_cntl & (1 << 14)) {
  VAR_6 = VAR_2->vap_alt_nverts;
 } else {
  VAR_6 = (VAR_2->vap_vf_cntl >> 16) & 0xFFFF;
 }
 switch (VAR_5) {
 case 1:
  for (VAR_3 = 0; VAR_3 < VAR_2->num_arrays; VAR_3++) {
   VAR_4 = VAR_2->arrays[VAR_3].esize * VAR_2->max_indx * 4;
   if (VAR_2->arrays[VAR_3].robj == ((void*)0)) {
    FUNC_0("(PW %u) Vertex array %u no buffer "
       "bound\n", VAR_5, VAR_3);
    return -VAR_0;
   }
   if (VAR_4 > FUNC_3(VAR_2->arrays[VAR_3].robj)) {
    FUNC_1(VAR_1->dev, "(PW %u) Vertex array %u "
     "need %lu dwords have %lu dwords\n",
     VAR_5, VAR_3, VAR_4 >> 2,
     FUNC_3(VAR_2->arrays[VAR_3].robj)
     >> 2);
    FUNC_0("Max indices %u\n", VAR_2->max_indx);
    return -VAR_0;
   }
  }
  break;
 case 2:
  for (VAR_3 = 0; VAR_3 < VAR_2->num_arrays; VAR_3++) {
   VAR_4 = VAR_2->arrays[VAR_3].esize * (VAR_6 - 1) * 4;
   if (VAR_2->arrays[VAR_3].robj == ((void*)0)) {
    FUNC_0("(PW %u) Vertex array %u no buffer "
       "bound\n", VAR_5, VAR_3);
    return -VAR_0;
   }
   if (VAR_4 > FUNC_3(VAR_2->arrays[VAR_3].robj)) {
    FUNC_1(VAR_1->dev, "(PW %u) Vertex array %u "
     "need %lu dwords have %lu dwords\n",
     VAR_5, VAR_3, VAR_4 >> 2,
     FUNC_3(VAR_2->arrays[VAR_3].robj)
     >> 2);
    return -VAR_0;
   }
  }
  break;
 case 3:
  VAR_4 = VAR_2->vtx_size * VAR_6;
  if (VAR_4 != VAR_2->immd_dwords) {
   FUNC_0("IMMD draw %u dwors but needs %lu dwords\n",
      VAR_2->immd_dwords, VAR_4);
   FUNC_0("VAP_VF_CNTL.NUM_VERTICES %u, VTX_SIZE %u\n",
      VAR_6, VAR_2->vtx_size);
   return -VAR_0;
  }
  break;
 default:
  FUNC_0("[drm] Invalid primitive walk %d for VAP_VF_CNTL\n",
     VAR_5);
  return -VAR_0;
 }

 if (VAR_2->tex_dirty) {
  VAR_2->tex_dirty = 0;
  return FUNC_2(VAR_1, VAR_2);
 }
 return 0;
}
