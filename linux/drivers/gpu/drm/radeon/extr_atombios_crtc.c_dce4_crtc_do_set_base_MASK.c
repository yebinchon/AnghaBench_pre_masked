
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_12__ {int* macrotile_mode_array; int* tile_mode_array; } ;
struct TYPE_11__ {int tile_config; } ;
struct TYPE_10__ {int tile_config; } ;
struct TYPE_9__ {int* tile_mode_array; } ;
struct TYPE_13__ {TYPE_4__ cik; TYPE_3__ evergreen; TYPE_2__ cayman; TYPE_1__ si; } ;
struct radeon_device {scalar_t__ family; TYPE_5__ config; } ;
struct radeon_crtc {int crtc_id; scalar_t__ crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int width; int height; int* pitches; struct drm_gem_object** obj; TYPE_6__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_15__ {int hdisplay; int vdisplay; int flags; } ;
struct drm_crtc {TYPE_8__* primary; TYPE_7__ mode; struct drm_device* dev; } ;
struct TYPE_16__ {struct drm_framebuffer* fb; } ;
struct TYPE_14__ {int format; int* cpp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,...) ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_8 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_32 ;
 int FUNC_10 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int) ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_13 (int ) ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int FUNC_14 (unsigned int) ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int FUNC_15 (int ) ;
 unsigned int VAR_65 ;
 unsigned int VAR_66 ;
 int FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__,int ,int ) ;
 int FUNC_18 (int,struct drm_format_name_buf*) ;
 int FUNC_19 (int,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 struct radeon_bo* FUNC_20 (struct drm_gem_object*) ;
 unsigned int FUNC_21 (unsigned int,unsigned int) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_bo*,int*,int *) ;
 scalar_t__ FUNC_24 (struct radeon_bo*) ;
 int FUNC_25 (struct radeon_bo*,int ,scalar_t__*) ;
 int FUNC_26 (struct radeon_bo*,int) ;
 int FUNC_27 (struct radeon_bo*) ;
 int FUNC_28 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_29 (struct drm_crtc*) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 (scalar_t__) ;

__attribute__((used)) static int FUNC_32(struct drm_crtc *VAR_67,
     struct drm_framebuffer *VAR_68,
     int VAR_69, int VAR_70, int VAR_71)
{
 struct radeon_crtc *VAR_72 = FUNC_29(VAR_67);
 struct drm_device *VAR_73 = VAR_67->dev;
 struct radeon_device *VAR_74 = VAR_73->dev_private;
 struct drm_framebuffer *VAR_75;
 struct drm_gem_object *VAR_76;
 struct radeon_bo *VAR_77;
 uint64_t VAR_78;
 uint32_t VAR_79, VAR_80, VAR_81;
 unsigned VAR_82, VAR_83, VAR_84, VAR_85;
 u32 VAR_86 = FUNC_9(VAR_31);
 u32 VAR_87, VAR_88, VAR_89;
 int VAR_90;
 bool VAR_91 = 0;
 struct drm_format_name_buf VAR_92;


 if (!VAR_71 && !VAR_67->primary->fb) {
  FUNC_2("No FB bound\n");
  return 0;
 }

 if (VAR_71)
  VAR_75 = VAR_68;
 else
  VAR_75 = VAR_67->primary->fb;




 VAR_76 = VAR_75->obj[0];
 VAR_77 = FUNC_20(VAR_76);
 VAR_90 = FUNC_26(VAR_77, 0);
 if (FUNC_30(VAR_90 != 0))
  return VAR_90;

 if (VAR_71)
  VAR_78 = FUNC_24(VAR_77);
 else {
  VAR_90 = FUNC_25(VAR_77, VAR_60, &VAR_78);
  if (FUNC_30(VAR_90 != 0)) {
   FUNC_28(VAR_77);
   return -VAR_12;
  }
 }

 FUNC_23(VAR_77, &VAR_81, ((void*)0));
 FUNC_28(VAR_77);

 switch (VAR_75->format->format) {
 case 134:
  VAR_79 = (FUNC_8(VAR_27) |
        FUNC_10(VAR_40));
  break;
 case 129:
 case 140:
  VAR_79 = (FUNC_8(VAR_25) |
        FUNC_10(VAR_35));



  break;
 case 131:
 case 142:
  VAR_79 = (FUNC_8(VAR_25) |
        FUNC_10(VAR_33));



  break;
 case 135:
 case 137:
  VAR_79 = (FUNC_8(VAR_25) |
        FUNC_10(VAR_39));



  break;
 case 133:
  VAR_79 = (FUNC_8(VAR_25) |
        FUNC_10(VAR_36));



  break;
 case 128:
 case 139:
  VAR_79 = (FUNC_8(VAR_26) |
        FUNC_10(VAR_37));



  break;
 case 130:
 case 141:
  VAR_79 = (FUNC_8(VAR_26) |
        FUNC_10(VAR_34));




  VAR_91 = 1;
  break;
 case 136:
 case 138:
  VAR_79 = (FUNC_8(VAR_26) |
        FUNC_10(VAR_38));




  VAR_91 = 1;
  break;
 case 132:
 case 143:
  VAR_79 = (FUNC_8(VAR_26) |
        FUNC_10(VAR_37));
  VAR_86 = (FUNC_13(VAR_45) |
      FUNC_7(VAR_23));



  break;
 default:
  FUNC_3("Unsupported screen format %s\n",
            FUNC_18(VAR_75->format->format, &VAR_92));
  return -VAR_12;
 }

 if (VAR_81 & VAR_61) {
  FUNC_19(VAR_81, &VAR_82, &VAR_83, &VAR_84, &VAR_85);


  if (VAR_74->family >= VAR_7) {
   unsigned VAR_93, VAR_94;

   if (VAR_74->family >= VAR_2) {
    unsigned VAR_95, VAR_96;


    VAR_96 = 64 << VAR_85;
    VAR_95 = 8 * 8 * VAR_75->format->cpp[0];
    VAR_95 = FUNC_21(VAR_96, VAR_95);

    for (VAR_93 = 0; VAR_95 > 64; VAR_93++)
     VAR_95 >>= 1;

    if (VAR_93 >= 16) {
     FUNC_3("Wrong screen bpp (%u) or tile split (%u)\n",
        VAR_75->format->cpp[0] * 8,
        VAR_85);
     return -VAR_12;
    }

    VAR_94 = (VAR_74->config.cik.macrotile_mode_array[VAR_93] >> 6) & 0x3;
   } else {
    switch (VAR_75->format->cpp[0] * 8) {
    case 8:
     VAR_93 = 10;
     break;
    case 16:
     VAR_93 = VAR_65;
     break;
    default:
    case 32:
     VAR_93 = VAR_66;
     break;
    }

    VAR_94 = (VAR_74->config.si.tile_mode_array[VAR_93] >> 20) & 0x3;
   }

   VAR_79 |= FUNC_12(VAR_94);
  } else {

   if (VAR_74->family >= VAR_3)
    VAR_87 = VAR_74->config.cayman.tile_config;
   else
    VAR_87 = VAR_74->config.evergreen.tile_config;

   switch ((VAR_87 & 0xf0) >> 4) {
   case 0:
    VAR_79 |= FUNC_12(VAR_14);
    break;
   case 1:
   default:
    VAR_79 |= FUNC_12(VAR_15);
    break;
   case 2:
    VAR_79 |= FUNC_12(VAR_13);
    break;
   }
  }

  VAR_79 |= FUNC_4(VAR_22);
  VAR_79 |= FUNC_14(VAR_85);
  VAR_79 |= FUNC_6(VAR_82);
  VAR_79 |= FUNC_5(VAR_83);
  VAR_79 |= FUNC_11(VAR_84);
  if (VAR_74->family >= VAR_2) {

   VAR_79 |= FUNC_0(VAR_9);
  }
 } else if (VAR_81 & VAR_62)
  VAR_79 |= FUNC_4(VAR_21);

 if (VAR_74->family >= VAR_2) {



  u32 VAR_97 = (VAR_74->config.cik.tile_mode_array[10] >> 6) & 0x1f;

  VAR_79 |= FUNC_1(VAR_97);
 } else if ((VAR_74->family == VAR_7) ||
     (VAR_74->family == VAR_6))
  VAR_79 |= FUNC_15(VAR_64);
 else if ((VAR_74->family == VAR_8) ||
   (VAR_74->family == VAR_5) ||
   (VAR_74->family == VAR_4))
  VAR_79 |= FUNC_15(VAR_63);

 switch (VAR_72->crtc_id) {
 case 0:
  FUNC_16(VAR_0, 0);
  break;
 case 1:
  FUNC_16(VAR_1, 0);
  break;
 case 2:
  FUNC_16(VAR_16, 0);
  break;
 case 3:
  FUNC_16(VAR_17, 0);
  break;
 case 4:
  FUNC_16(VAR_18, 0);
  break;
 case 5:
  FUNC_16(VAR_19, 0);
  break;
 default:
  break;
 }




 FUNC_16(VAR_32 + VAR_72->crtc_offset, 0);

 FUNC_16(VAR_44 + VAR_72->crtc_offset,
        FUNC_31(VAR_78));
 FUNC_16(VAR_47 + VAR_72->crtc_offset,
        FUNC_31(VAR_78));
 FUNC_16(VAR_43 + VAR_72->crtc_offset,
        (u32)VAR_78 & VAR_48);
 FUNC_16(VAR_46 + VAR_72->crtc_offset,
        (u32) VAR_78 & VAR_48);
 FUNC_16(VAR_24 + VAR_72->crtc_offset, VAR_79);
 FUNC_16(VAR_51 + VAR_72->crtc_offset, VAR_86);






 FUNC_17(VAR_41 + VAR_72->crtc_offset,
   (VAR_91 ? VAR_56 : 0),
   ~VAR_56);

 if (VAR_91)
  FUNC_2("Bypassing hardware LUT due to 10 bit fb scanout.\n");

 FUNC_16(VAR_49 + VAR_72->crtc_offset, 0);
 FUNC_16(VAR_50 + VAR_72->crtc_offset, 0);
 FUNC_16(VAR_53 + VAR_72->crtc_offset, 0);
 FUNC_16(VAR_55 + VAR_72->crtc_offset, 0);
 FUNC_16(VAR_52 + VAR_72->crtc_offset, VAR_75->width);
 FUNC_16(VAR_54 + VAR_72->crtc_offset, VAR_75->height);

 VAR_80 = VAR_75->pitches[0] / VAR_75->format->cpp[0];
 FUNC_16(VAR_42 + VAR_72->crtc_offset, VAR_80);
 FUNC_16(VAR_28 + VAR_72->crtc_offset, 1);

 if (VAR_74->family >= VAR_2)
  FUNC_16(VAR_10 + VAR_72->crtc_offset,
         VAR_75->height);
 else
  FUNC_16(VAR_20 + VAR_72->crtc_offset,
         VAR_75->height);
 VAR_69 &= ~3;
 VAR_70 &= ~1;
 FUNC_16(VAR_59 + VAR_72->crtc_offset,
        (VAR_69 << 16) | VAR_70);
 VAR_88 = VAR_67->mode.hdisplay;
 VAR_89 = (VAR_67->mode.vdisplay + 1) & ~1;
 if ((VAR_74->family >= VAR_2) &&
     (VAR_67->mode.flags & VAR_11))
  VAR_89 *= 2;
 FUNC_16(VAR_58 + VAR_72->crtc_offset,
        (VAR_88 << 16) | VAR_89);


 FUNC_16(VAR_57 + VAR_72->crtc_offset, 0);

 if (!VAR_71 && VAR_68 && VAR_68 != VAR_67->primary->fb) {
  VAR_77 = FUNC_20(VAR_68->obj[0]);
  VAR_90 = FUNC_26(VAR_77, 0);
  if (FUNC_30(VAR_90 != 0))
   return VAR_90;
  FUNC_27(VAR_77);
  FUNC_28(VAR_77);
 }


 FUNC_22(VAR_74);

 return 0;
}
