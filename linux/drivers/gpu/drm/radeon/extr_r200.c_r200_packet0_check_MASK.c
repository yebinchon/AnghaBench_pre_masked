
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
struct r100_cs_track {int zb_dirty; int cb_dirty; int tex_dirty; int maxy; int z_enabled; int num_texture; int vap_vf_cntl; int max_indx; TYPE_5__* textures; int vtx_size; TYPE_3__ zb; TYPE_2__* cb; } ;
struct TYPE_10__ {int enabled; int width; int height; int num_levels; int roundup_w; int roundup_h; int txdepth; int tex_coord_type; int use_pitch; int lookup_disable; int cpp; TYPE_4__* cube_info; void* compress_format; int pitch; int robj; } ;
struct TYPE_9__ {int offset; int width; int height; int robj; } ;
struct TYPE_7__ {int offset; int pitch; int cpp; int robj; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
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
 int FUNC_3 (struct radeon_cs_parser*,struct radeon_cs_packet*,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct radeon_cs_parser*,struct radeon_cs_packet*) ;
 int FUNC_7 (struct radeon_cs_parser*,struct radeon_bo_list**,int ) ;
 int FUNC_8 (struct radeon_cs_parser*,unsigned int) ;

int FUNC_9(struct radeon_cs_parser *VAR_27,
         struct radeon_cs_packet *VAR_28,
         unsigned VAR_29, unsigned VAR_30)
{
 struct radeon_bo_list *VAR_31;
 struct r100_cs_track *VAR_32;
 volatile uint32_t *VAR_33;
 uint32_t VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37;
 u32 VAR_38 = 0;
 u32 VAR_39;

 VAR_33 = VAR_27->ib.ptr;
 VAR_32 = (struct r100_cs_track *)VAR_27->track;
 VAR_39 = FUNC_8(VAR_27, VAR_29);
 switch (VAR_30) {
 case 140:
  VAR_35 = FUNC_2(VAR_27);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  break;


 case 139:
 case 128:
  VAR_35 = FUNC_3(VAR_27, VAR_28, VAR_29, VAR_30);
  if (VAR_35)
   return VAR_35;
  break;
 case 134:
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->zb.robj = VAR_31->robj;
  VAR_32->zb.offset = VAR_39;
  VAR_32->zb_dirty = 1;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 136:
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->cb[0].robj = VAR_31->robj;
  VAR_32->cb[0].offset = VAR_39;
  VAR_32->cb_dirty = 1;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 180:
 case 179:
 case 178:
 case 177:
 case 176:
 case 175:
  VAR_36 = (VAR_30 - 180) / 24;
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  if (!(VAR_27->cs_flags & VAR_12)) {
   if (VAR_31->tiling_flags & VAR_19)
    VAR_38 |= VAR_7;
   if (VAR_31->tiling_flags & VAR_20)
    VAR_38 |= VAR_8;

   VAR_34 = VAR_39 & ~(0x7 << 2);
   VAR_34 |= VAR_38;
   VAR_33[VAR_29] = VAR_34 + ((u32)VAR_31->gpu_offset);
  } else
   VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[VAR_36].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 234:
 case 228:
 case 222:
 case 216:
 case 210:
 case 233:
 case 227:
 case 221:
 case 215:
 case 209:
 case 232:
 case 226:
 case 220:
 case 214:
 case 208:
 case 231:
 case 225:
 case 219:
 case 213:
 case 207:
 case 230:
 case 224:
 case 218:
 case 212:
 case 206:
 case 229:
 case 223:
 case 217:
 case 211:
 case 205:
  VAR_36 = (VAR_30 - 180) / 24;
  VAR_37 = (VAR_30 - ((VAR_36 * 24) + 180)) / 4;
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_32->textures[VAR_36].cube_info[VAR_37 - 1].offset = VAR_39;
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  VAR_32->textures[VAR_36].cube_info[VAR_37 - 1].robj = VAR_31->robj;
  VAR_32->tex_dirty = 1;
  break;
 case 130:
  VAR_32->maxy = ((VAR_39 >> 16) & 0x7FF);
  VAR_32->cb_dirty = 1;
  VAR_32->zb_dirty = 1;
  break;
 case 135:
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }

  if (!(VAR_27->cs_flags & VAR_12)) {
   if (VAR_31->tiling_flags & VAR_19)
    VAR_38 |= VAR_11;
   if (VAR_31->tiling_flags & VAR_20)
    VAR_38 |= VAR_10;

   VAR_34 = VAR_39 & ~(0x7 << 16);
   VAR_34 |= VAR_38;
   VAR_33[VAR_29] = VAR_34;
  } else
   VAR_33[VAR_29] = VAR_39;

  VAR_32->cb[0].pitch = VAR_39 & VAR_9;
  VAR_32->cb_dirty = 1;
  break;
 case 133:
  VAR_32->zb.pitch = VAR_39 & VAR_13;
  VAR_32->zb_dirty = 1;
  break;
 case 137:
  switch ((VAR_39 >> VAR_15) & 0x1f) {
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
      ((VAR_39 >> VAR_15) & 0x1f));
   return -VAR_0;
  }
  if (VAR_39 & VAR_14) {
   FUNC_0("No support for depth xy offset in kms\n");
   return -VAR_0;
  }

  VAR_32->z_enabled = !!(VAR_39 & VAR_26);
  VAR_32->cb_dirty = 1;
  VAR_32->zb_dirty = 1;
  break;
 case 131:
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
 case 132:
  VAR_35 = FUNC_7(VAR_27, &VAR_31, 0);
  if (VAR_35) {
   FUNC_0("No reloc for ib[%d]=0x%04X\n",
      VAR_29, VAR_30);
   FUNC_6(VAR_27, VAR_28);
   return VAR_35;
  }
  VAR_33[VAR_29] = VAR_39 + ((u32)VAR_31->gpu_offset);
  break;
 case 138:
  {
   uint32_t VAR_40 = VAR_39 >> 4;
   for (VAR_36 = 0; VAR_36 < VAR_32->num_texture; VAR_36++)
    VAR_32->textures[VAR_36].enabled = !!(VAR_40 & (1 << VAR_36));
   VAR_32->tex_dirty = 1;
  }
  break;
 case 129:
  VAR_32->vap_vf_cntl = VAR_39;
  break;
 case 0x210c:

  VAR_32->max_indx = VAR_39 & 0x00FFFFFFUL;
  break;
 case 162:
  VAR_32->vtx_size = FUNC_4(VAR_39);
  break;
 case 161:
  VAR_32->vtx_size += FUNC_5(VAR_39);
  break;
 case 168:
 case 167:
 case 166:
 case 165:
 case 164:
 case 163:
  VAR_36 = (VAR_30 - 168) / 32;
  VAR_32->textures[VAR_36].width = (VAR_39 & VAR_16) + 1;
  VAR_32->textures[VAR_36].height = ((VAR_39 & VAR_17) >> VAR_18) + 1;
  VAR_32->tex_dirty = 1;
  break;
 case 174:
 case 173:
 case 172:
 case 171:
 case 170:
 case 169:
  VAR_36 = (VAR_30 - 174) / 32;
  VAR_32->textures[VAR_36].pitch = VAR_39 + 32;
  VAR_32->tex_dirty = 1;
  break;
 case 204:
 case 203:
 case 202:
 case 201:
 case 200:
 case 199:
  VAR_36 = (VAR_30 - 204) / 32;
  VAR_32->textures[VAR_36].num_levels = ((VAR_39 & VAR_3)
       >> VAR_4);
  VAR_34 = (VAR_39 >> 23) & 0x7;
  if (VAR_34 == 2 || VAR_34 == 6)
   VAR_32->textures[VAR_36].roundup_w = 0;
  VAR_34 = (VAR_39 >> 27) & 0x7;
  if (VAR_34 == 2 || VAR_34 == 6)
   VAR_32->textures[VAR_36].roundup_h = 0;
  VAR_32->tex_dirty = 1;
  break;
 case 186:
 case 185:
 case 184:
 case 183:
 case 182:
 case 181:
  VAR_36 = (VAR_30 - 186) / 32;
  break;
 case 192:
 case 191:
 case 190:
 case 189:
 case 188:
 case 187:
  VAR_36 = (VAR_30 - 192) / 32;
  VAR_32->textures[VAR_36].txdepth = VAR_39 & 0x7;
  VAR_34 = (VAR_39 >> 16) & 0x3;

  switch (VAR_34) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:

   VAR_32->textures[VAR_36].tex_coord_type = 0;
   break;
  case 1:

   VAR_32->textures[VAR_36].tex_coord_type = 2;
   break;
  case 2:

   VAR_32->textures[VAR_36].tex_coord_type = 1;
   break;
  }
  VAR_32->tex_dirty = 1;
  break;
 case 198:
 case 197:
 case 196:
 case 195:
 case 194:
 case 193:
  VAR_36 = (VAR_30 - 198) / 32;
  if (VAR_39 & VAR_6) {
   VAR_32->textures[VAR_36].use_pitch = 1;
  } else {
   VAR_32->textures[VAR_36].use_pitch = 0;
   VAR_32->textures[VAR_36].width = 1 << ((VAR_39 >> VAR_25) & VAR_24);
   VAR_32->textures[VAR_36].height = 1 << ((VAR_39 >> VAR_23) & VAR_22);
  }
  if (VAR_39 & VAR_5)
   VAR_32->textures[VAR_36].lookup_disable = 1;
  switch ((VAR_39 & VAR_21)) {
  case 149:
  case 146:
  case 142:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_2;
   break;
  case 159:
  case 158:
  case 145:
  case 157:
  case 143:
  case 141:
  case 148:
  case 153:
  case 155:
   VAR_32->textures[VAR_36].cpp = 2;
   VAR_32->textures[VAR_36].compress_format = VAR_2;
   break;
  case 156:
  case 144:
  case 160:
  case 154:
  case 147:
   VAR_32->textures[VAR_36].cpp = 4;
   VAR_32->textures[VAR_36].compress_format = VAR_2;
   break;
  case 152:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_1;
   break;
  case 151:
  case 150:
   VAR_32->textures[VAR_36].cpp = 1;
   VAR_32->textures[VAR_36].compress_format = VAR_1;
   break;
  }
  VAR_32->textures[VAR_36].cube_info[4].width = 1 << ((VAR_39 >> 16) & 0xf);
  VAR_32->textures[VAR_36].cube_info[4].height = 1 << ((VAR_39 >> 20) & 0xf);
  VAR_32->tex_dirty = 1;
  break;
 case 240:
 case 239:
 case 238:
 case 237:
 case 236:
 case 235:
  VAR_34 = VAR_39;
  VAR_36 = (VAR_30 - 240) / 32;
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
