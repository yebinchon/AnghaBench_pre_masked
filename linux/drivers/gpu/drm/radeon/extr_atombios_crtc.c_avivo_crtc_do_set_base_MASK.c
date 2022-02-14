
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;
struct radeon_crtc {scalar_t__ crtc_id; scalar_t__ crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int width; int height; int* pitches; struct drm_gem_object** obj; TYPE_3__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__ mode; struct drm_device* dev; } ;
struct TYPE_6__ {int format; int* cpp; } ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (int ) ;
 int VAR_37 ;
 int FUNC_3 (int ) ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (int,struct drm_format_name_buf*) ;
 struct radeon_bo* FUNC_7 (struct drm_gem_object*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_bo*,int*,int *) ;
 scalar_t__ FUNC_10 (struct radeon_bo*) ;
 int FUNC_11 (struct radeon_bo*,int ,scalar_t__*) ;
 int FUNC_12 (struct radeon_bo*,int) ;
 int FUNC_13 (struct radeon_bo*) ;
 int FUNC_14 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_15 (struct drm_crtc*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct drm_crtc *VAR_50,
      struct drm_framebuffer *VAR_51,
      int VAR_52, int VAR_53, int VAR_54)
{
 struct radeon_crtc *VAR_55 = FUNC_15(VAR_50);
 struct drm_device *VAR_56 = VAR_50->dev;
 struct radeon_device *VAR_57 = VAR_56->dev_private;
 struct drm_gem_object *VAR_58;
 struct radeon_bo *VAR_59;
 struct drm_framebuffer *VAR_60;
 uint64_t VAR_61;
 uint32_t VAR_62, VAR_63, VAR_64;
 u32 VAR_65 = VAR_42;
 u32 VAR_66, VAR_67;
 int VAR_68;
 bool VAR_69 = 0;
 struct drm_format_name_buf VAR_70;


 if (!VAR_54 && !VAR_50->primary->fb) {
  FUNC_0("No FB bound\n");
  return 0;
 }

 if (VAR_54)
  VAR_60 = VAR_51;
 else
  VAR_60 = VAR_50->primary->fb;

 VAR_58 = VAR_60->obj[0];
 VAR_59 = FUNC_7(VAR_58);
 VAR_68 = FUNC_12(VAR_59, 0);
 if (FUNC_16(VAR_68 != 0))
  return VAR_68;




 if (VAR_54)
  VAR_61 = FUNC_10(VAR_59);
 else {
  VAR_68 = FUNC_11(VAR_59, VAR_47, &VAR_61);
  if (FUNC_16(VAR_68 != 0)) {
   FUNC_14(VAR_59);
   return -VAR_34;
  }
 }
 FUNC_9(VAR_59, &VAR_64, ((void*)0));
 FUNC_14(VAR_59);

 switch (VAR_60->format->format) {
 case 134:
  VAR_62 =
      VAR_9 |
      VAR_6;
  break;
 case 129:
 case 136:
  VAR_62 =
      VAR_7 |
      VAR_2;



  break;
 case 131:
  VAR_62 =
      VAR_7 |
      VAR_1;



  break;
 case 133:
  VAR_62 =
      VAR_7 |
      VAR_3;



  break;
 case 128:
 case 135:
  VAR_62 =
      VAR_8 |
      VAR_5;



  break;
 case 130:
 case 137:
  VAR_62 =
      VAR_8 |
      VAR_4;




  VAR_69 = 1;
  break;
 case 132:
 case 138:
  VAR_62 =
      VAR_8 |
      VAR_5;
  if (VAR_57->family >= VAR_32)
   VAR_65 =
       (FUNC_3(VAR_38) |
        FUNC_2(VAR_37));
  else
   VAR_62 |= VAR_19;



  break;
 default:
  FUNC_1("Unsupported screen format %s\n",
            FUNC_6(VAR_60->format->format, &VAR_70));
  return -VAR_34;
 }

 if (VAR_57->family >= VAR_32) {
  if (VAR_64 & VAR_48)
   VAR_62 |= VAR_36;
  else if (VAR_64 & VAR_49)
   VAR_62 |= VAR_35;
 } else {
  if (VAR_64 & VAR_48)
   VAR_62 |= VAR_13;

  if (VAR_64 & VAR_49)
   VAR_62 |= VAR_20;
 }

 if (VAR_55->crtc_id == 0)
  FUNC_4(VAR_29, 0);
 else
  FUNC_4(VAR_30, 0);




 FUNC_4(VAR_11 + VAR_55->crtc_offset, 0);

 if (VAR_57->family >= VAR_33) {
  if (VAR_55->crtc_id) {
   FUNC_4(VAR_45, FUNC_17(VAR_61));
   FUNC_4(VAR_46, FUNC_17(VAR_61));
  } else {
   FUNC_4(VAR_43, FUNC_17(VAR_61));
   FUNC_4(VAR_44, FUNC_17(VAR_61));
  }
 }
 FUNC_4(VAR_15 + VAR_55->crtc_offset,
        (u32) VAR_61);
 FUNC_4(VAR_16 +
        VAR_55->crtc_offset, (u32) VAR_61);
 FUNC_4(VAR_0 + VAR_55->crtc_offset, VAR_62);
 if (VAR_57->family >= VAR_32)
  FUNC_4(VAR_39 + VAR_55->crtc_offset, VAR_65);


 FUNC_5(VAR_12 + VAR_55->crtc_offset,
   (VAR_69 ? VAR_31 : 0), ~VAR_31);

 if (VAR_69)
  FUNC_0("Bypassing hardware LUT due to 10 bit fb scanout.\n");

 FUNC_4(VAR_17 + VAR_55->crtc_offset, 0);
 FUNC_4(VAR_18 + VAR_55->crtc_offset, 0);
 FUNC_4(VAR_22 + VAR_55->crtc_offset, 0);
 FUNC_4(VAR_24 + VAR_55->crtc_offset, 0);
 FUNC_4(VAR_21 + VAR_55->crtc_offset, VAR_60->width);
 FUNC_4(VAR_23 + VAR_55->crtc_offset, VAR_60->height);

 VAR_63 = VAR_60->pitches[0] / VAR_60->format->cpp[0];
 FUNC_4(VAR_14 + VAR_55->crtc_offset, VAR_63);
 FUNC_4(VAR_10 + VAR_55->crtc_offset, 1);

 FUNC_4(VAR_25 + VAR_55->crtc_offset,
        VAR_60->height);
 VAR_52 &= ~3;
 VAR_53 &= ~1;
 FUNC_4(VAR_28 + VAR_55->crtc_offset,
        (VAR_52 << 16) | VAR_53);
 VAR_66 = VAR_50->mode.hdisplay;
 VAR_67 = (VAR_50->mode.vdisplay + 1) & ~1;
 FUNC_4(VAR_27 + VAR_55->crtc_offset,
        (VAR_66 << 16) | VAR_67);


 FUNC_4(VAR_26 + VAR_55->crtc_offset, 3);

 if (!VAR_54 && VAR_51 && VAR_51 != VAR_50->primary->fb) {
  VAR_59 = FUNC_7(VAR_51->obj[0]);
  VAR_68 = FUNC_12(VAR_59, 0);
  if (FUNC_16(VAR_68 != 0))
   return VAR_68;
  FUNC_13(VAR_59);
  FUNC_14(VAR_59);
 }


 FUNC_8(VAR_57);

 return 0;
}
