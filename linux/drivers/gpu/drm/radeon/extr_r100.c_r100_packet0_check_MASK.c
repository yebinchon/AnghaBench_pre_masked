
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_6__ {int* ptr; } ;
struct radeon_cs_parser {int cs_flags; scalar_t__ track; TYPE_1__ ib; } ;
struct radeon_cs_packet {int dummy; } ;
struct radeon_bo_list {int tiling_flags; int gpu_offset; int robj; } ;
struct TYPE_8__ {int offset; int pitch; int cpp; int robj; } ;
struct r100_cs_track {int zb_dirty; int cb_dirty; int tex_dirty; int maxy; int z_enabled; int num_texture; int vap_vf_cntl; TYPE_5__* textures; int vtx_size; TYPE_3__ zb; TYPE_2__* cb; } ;
struct TYPE_10__ {int enabled; int width; int height; int num_levels; int roundup_w; int roundup_h; int use_pitch; int tex_coord_type; int cpp; TYPE_4__* cube_info; void* compress_format; int pitch; int robj; } ;
struct TYPE_9__ {int offset; int width; int height; int robj; } ;
struct TYPE_7__ {int offset; int pitch; int cpp; int robj; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;




 int VAR_17 ;




 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;



 int VAR_21 ;






 int VAR_22 ;
 int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct radeon_cs_parser*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int,unsigned int) ;
 int FUNC_5 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_6 (struct radeon_cs_parser*,struct radeon_bo_list**,int ) ;
 int FUNC_7 (struct radeon_cs_parser*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct radeon_cs_parser *VAR_27,
         struct radeon_cs_packet *VAR_28,
         unsigned VAR_29, unsigned VAR_30)
{
 struct radeon_bo_list *VAR_31;
 struct r100_cs_track *VAR_32;
 volatile uint32_t *VAR_33;
 uint32_t VAR_34;
 int VAR_35;
 int VAR_36, VAR_37;
 u32 VAR_38 = 0;
 u32 VAR_39;

 VAR_33 = VAR_27->ib.ptr;
 VAR_32 = (struct r100_cs_track *)VAR_27->track;

 VAR_39 = FUNC_7(VAR_27, VAR_29);

 switch (VAR_30) {
 case 193:
  VAR_35 = FUNC_2(VAR_27);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  break;


 case 192:
 case 147:
  VAR_35 = FUNC_4(VAR_27, VAR_28, VAR_29, VAR_30);
  if (VAR_35)
   return VAR_35;
  break;
 case 154:
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->zb.robj = VAR_31->robj;
  VAR_32->zb.offset = VAR_39;
  VAR_32->zb_dirty = 1;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 156:
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->cb[0].robj = VAR_31->robj;
  VAR_32->cb[0].offset = VAR_39;
  VAR_32->cb_dirty = 1;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 160:
 case 159:
 case 158:
  VAR_36 = (VAR_30 - 160) / 24;
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  if (!(VAR_27->cs_flags & VAR_7)) {
   if (VAR_31->tiling_flags & VAR_15)
    VAR_38 |= VAR_24;
   if (VAR_31->tiling_flags & VAR_16)
    VAR_38 |= VAR_25;

   VAR_34 = VAR_39 & ~(0x7 << 2);
   VAR_34 |= VAR_38;
   VAR_33[VAR_29] = VAR_34 + ((u32)VAR_31->gpu_offset);
  } else
   VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[VAR_36].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 187:
 case 186:
 case 185:
 case 184:
 case 183:
  VAR_36 = (VAR_30 - 187) / 4;
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->textures[0].cube_info[VAR_36].offset = VAR_39;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[0].cube_info[VAR_36].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 182:
 case 181:
 case 180:
 case 179:
 case 178:
  VAR_36 = (VAR_30 - 182) / 4;
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->textures[1].cube_info[VAR_36].offset = VAR_39;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[1].cube_info[VAR_36].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 177:
 case 176:
 case 175:
 case 174:
 case 173:
  VAR_36 = (VAR_30 - 177) / 4;
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->textures[2].cube_info[VAR_36].offset = VAR_39;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[2].cube_info[VAR_36].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 150:
  VAR_32->maxy = ((VAR_39 >> 16) & 0x7FF);
  VAR_32->cb_dirty = 1;
  VAR_32->zb_dirty = 1;
  break;
 case 155:
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  if (!(VAR_27->cs_flags & VAR_7)) {
   if (VAR_31->tiling_flags & VAR_15)
    VAR_38 |= VAR_6;
   if (VAR_31->tiling_flags & VAR_16)
    VAR_38 |= VAR_5;

   VAR_34 = VAR_39 & ~(0x7 << 16);
   VAR_34 |= VAR_38;
   VAR_33[VAR_29] = VAR_34;
  } else
   VAR_33[VAR_29] = VAR_39;

  VAR_32->cb[0].pitch = VAR_39 & VAR_4;
  VAR_32->cb_dirty = 1;
  break;
 case 153:
  VAR_32->zb.pitch = VAR_39 & VAR_8;
  VAR_32->zb_dirty = 1;
  break;
 case 157:
  switch ((VAR_39 >> VAR_11) & 0x1f) {
  case 7:
  case 8:
  case 9:
  case 11:
  case 12:
   VAR_32->cb[0].cpp = 1;
   break;
  case 3:
  case 4:
  case 15:
   VAR_32->cb[0].cpp = 2;
   break;
  case 6:
   VAR_32->cb[0].cpp = 4;
   break;
  default:
   FUNC_0("Invalid color buffer format (%d) !\n",
      ((VAR_39 >> VAR_11) & 0x1f));
   return -VAR_0;
  }
  VAR_32->z_enabled = !!(VAR_39 & VAR_26);
  VAR_32->cb_dirty = 1;
  VAR_32->zb_dirty = 1;
  break;
 case 151:
  switch (VAR_39 & 0xf) {
  case 0:
   VAR_32->zb.cpp = 2;
   break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 9:
  case 11:
   VAR_32->zb.cpp = 4;
   break;
  default:
   break;
  }
  VAR_32->zb_dirty = 1;
  break;
 case 152:
  VAR_35 = FUNC_6(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_5(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 191:
  {
   uint32_t VAR_40 = VAR_39 >> 4;
   for (VAR_36 = 0; VAR_36 < VAR_32->num_texture; VAR_36++)
    VAR_32->textures[VAR_36].enabled = !!(VAR_40 & (1 << VAR_36));
   VAR_32->tex_dirty = 1;
  }
  break;
 case 149:
  VAR_32->vap_vf_cntl = VAR_39;
  break;
 case 148:
  VAR_32->vtx_size = FUNC_3(VAR_39);
  break;
 case 169:
 case 168:
 case 167:
  VAR_36 = (VAR_30 - 169) / 8;
  VAR_32->textures[VAR_36].width = (VAR_39 & VAR_12) + 1;
  VAR_32->textures[VAR_36].height = ((VAR_39 & VAR_13) >> VAR_14) + 1;
  VAR_32->tex_dirty = 1;
  break;
 case 172:
 case 171:
 case 170:
  VAR_36 = (VAR_30 - 172) / 8;
  VAR_32->textures[VAR_36].pitch = VAR_39 + 32;
  VAR_32->tex_dirty = 1;
  break;
 case 166:
 case 165:
 case 164:
  VAR_36 = (VAR_30 - 166) / 24;
  VAR_32->textures[VAR_36].num_levels = ((VAR_39 & VAR_9)
       >> VAR_10);
  VAR_34 = (VAR_39 >> 23) & 0x7;
  if (VAR_34 == 2 || VAR_34 == 6)
   VAR_32->textures[VAR_36].roundup_w = 0;
  VAR_34 = (VAR_39 >> 27) & 0x7;
  if (VAR_34 == 2 || VAR_34 == 6)
   VAR_32->textures[VAR_36].roundup_h = 0;
  VAR_32->tex_dirty = 1;
  break;
 case 163:
 case 162:
 case 161:
  VAR_36 = (VAR_30 - 163) / 24;
  if (VAR_39 & VAR_21) {
   VAR_32->textures[VAR_36].use_pitch = 1;
  } else {
   VAR_32->textures[VAR_36].use_pitch = 0;
   VAR_32->textures[VAR_36].width = 1 << ((VAR_39 >> VAR_23) & VAR_22);
   VAR_32->textures[VAR_36].height = 1 << ((VAR_39 >> VAR_20) & VAR_19);
  }
  if (VAR_39 & VAR_17)
   VAR_32->textures[VAR_36].tex_coord_type = 2;
  switch ((VAR_39 & VAR_18)) {
  case 138:
  case 135:
  case 129:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_3;
   break;
  case 146:
  case 145:
  case 134:
  case 144:
  case 130:
  case 128:
  case 132:
  case 136:
  case 142:
   VAR_32->textures[VAR_36].cpp = 2;
   VAR_32->textures[VAR_36].compress_format = VAR_3;
   break;
  case 143:
  case 133:
  case 131:
  case 137:
   VAR_32->textures[VAR_36].cpp = 4;
   VAR_32->textures[VAR_36].compress_format = VAR_3;
   break;
  case 141:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_1;
   break;
  case 140:
  case 139:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_2;
   break;
  }
  VAR_32->textures[VAR_36].cube_info[4].width = 1 << ((VAR_39 >> 16) & 0xf);
  VAR_32->textures[VAR_36].cube_info[4].height = 1 << ((VAR_39 >> 20) & 0xf);
  VAR_32->tex_dirty = 1;
  break;
 case 190:
 case 189:
 case 188:
  VAR_34 = VAR_39;
  VAR_36 = (VAR_30 - 190) / 4;
  for (VAR_37 = 0; VAR_37 < 4; VAR_37++) {
   VAR_32->textures[VAR_36].cube_info[VAR_37].width = 1 << ((VAR_34 >> (VAR_37 * 8)) & 0xf);
   VAR_32->textures[VAR_36].cube_info[VAR_37].height = 1 << ((VAR_34 >> ((VAR_37 * 8) + 4)) & 0xf);
  }
  VAR_32->tex_dirty = 1;
  break;
 default:
  FUNC_1("Forbidden register 0x%04X in cs at %d\n", VAR_30, VAR_29);
  return -VAR_0;
 }
 return 0;
}
