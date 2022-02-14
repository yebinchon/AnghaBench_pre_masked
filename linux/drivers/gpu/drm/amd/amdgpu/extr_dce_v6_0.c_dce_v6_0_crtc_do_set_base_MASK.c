
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
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int width; int height; int* pitches; struct drm_gem_object** obj; TYPE_3__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_4__ {int hdisplay; int vdisplay; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__ mode; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_6__ {int format; int* cpp; } ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int) ;
 int VAR_25 ;
 int FUNC_13 (int ) ;
 int VAR_26 ;
 int FUNC_14 (unsigned int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_15 (scalar_t__,int) ;
 int FUNC_16 (scalar_t__,int ,int ) ;
 int FUNC_17 (struct amdgpu_bo*,scalar_t__*) ;
 scalar_t__ FUNC_18 (struct amdgpu_bo*) ;
 int FUNC_19 (struct amdgpu_bo*,int ) ;
 int FUNC_20 (struct amdgpu_bo*,int) ;
 int FUNC_21 (struct amdgpu_bo*) ;
 int FUNC_22 (struct amdgpu_bo*) ;
 int FUNC_23 (struct amdgpu_device*) ;
 int FUNC_24 (struct drm_crtc*,int) ;
 int FUNC_25 (struct drm_crtc*,int) ;
 int FUNC_26 (int,struct drm_format_name_buf*) ;
 struct amdgpu_bo* FUNC_27 (struct drm_gem_object*) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 struct amdgpu_crtc* FUNC_28 (struct drm_crtc*) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (scalar_t__) ;

__attribute__((used)) static int FUNC_31(struct drm_crtc *VAR_50,
         struct drm_framebuffer *VAR_51,
         int VAR_52, int VAR_53, int VAR_54)
{
 struct amdgpu_crtc *VAR_55 = FUNC_28(VAR_50);
 struct drm_device *VAR_56 = VAR_50->dev;
 struct amdgpu_device *VAR_57 = VAR_56->dev_private;
 struct drm_framebuffer *VAR_58;
 struct drm_gem_object *VAR_59;
 struct amdgpu_bo *VAR_60;
 uint64_t VAR_61, VAR_62;
 uint32_t VAR_63, VAR_64, VAR_65;
 u32 VAR_66 = FUNC_8(VAR_15);
 u32 VAR_67, VAR_68;
 int VAR_69;
 bool VAR_70 = 0;
 struct drm_format_name_buf VAR_71;


 if (!VAR_54 && !VAR_50->primary->fb) {
  FUNC_1("No FB bound\n");
  return 0;
 }

 if (VAR_54)
  VAR_58 = VAR_51;
 else
  VAR_58 = VAR_50->primary->fb;




 VAR_59 = VAR_58->obj[0];
 VAR_60 = FUNC_27(VAR_59);
 VAR_69 = FUNC_20(VAR_60, 0);
 if (FUNC_29(VAR_69 != 0))
  return VAR_69;

 if (!VAR_54) {
  VAR_69 = FUNC_19(VAR_60, VAR_0);
  if (FUNC_29(VAR_69 != 0)) {
   FUNC_22(VAR_60);
   return -VAR_6;
  }
 }
 VAR_61 = FUNC_18(VAR_60);

 FUNC_17(VAR_60, &VAR_62);
 FUNC_22(VAR_60);

 switch (VAR_58->format->format) {
 case 134:
  VAR_63 = (FUNC_7(VAR_12) |
        FUNC_9(VAR_23));
  break;
 case 129:
 case 140:
  VAR_63 = (FUNC_7(VAR_10) |
        FUNC_9(VAR_18));



  break;
 case 131:
 case 142:
  VAR_63 = (FUNC_7(VAR_10) |
        FUNC_9(VAR_16));



  break;
 case 135:
 case 137:
  VAR_63 = (FUNC_7(VAR_10) |
        FUNC_9(VAR_22));



  break;
 case 133:
  VAR_63 = (FUNC_7(VAR_10) |
        FUNC_9(VAR_19));



  break;
 case 128:
 case 139:
  VAR_63 = (FUNC_7(VAR_11) |
        FUNC_9(VAR_20));



  break;
 case 130:
 case 141:
  VAR_63 = (FUNC_7(VAR_11) |
        FUNC_9(VAR_17));




  VAR_70 = 1;
  break;
 case 136:
 case 138:
  VAR_63 = (FUNC_7(VAR_11) |
        FUNC_9(VAR_21));




  VAR_70 = 1;
  break;
 case 132:
 case 143:
  VAR_63 = (FUNC_7(VAR_11) |
        FUNC_9(VAR_20));
  VAR_66 = (FUNC_13(VAR_26) |
      FUNC_6(VAR_9));



  break;
 default:
  FUNC_2("Unsupported screen format %s\n",
            FUNC_26(VAR_58->format->format, &VAR_71));
  return -VAR_6;
 }

 if (FUNC_0(VAR_62, VAR_3) == VAR_2) {
  unsigned VAR_72, VAR_73, VAR_74, VAR_75, VAR_76;

  VAR_72 = FUNC_0(VAR_62, VAR_5);
  VAR_73 = FUNC_0(VAR_62, VAR_4);
  VAR_74 = FUNC_0(VAR_62, VAR_27);
  VAR_75 = FUNC_0(VAR_62, VAR_30);
  VAR_76 = FUNC_0(VAR_62, VAR_28);

  VAR_63 |= FUNC_11(VAR_76);
  VAR_63 |= FUNC_3(VAR_8);
  VAR_63 |= FUNC_14(VAR_75);
  VAR_63 |= FUNC_5(VAR_72);
  VAR_63 |= FUNC_4(VAR_73);
  VAR_63 |= FUNC_10(VAR_74);
 } else if (FUNC_0(VAR_62, VAR_3) == VAR_1) {
  VAR_63 |= FUNC_3(VAR_7);
 }

 VAR_65 = FUNC_0(VAR_62, VAR_29);
 VAR_63 |= FUNC_12(VAR_65);

 FUNC_25(VAR_50, 0);




 FUNC_15(VAR_33 + VAR_55->crtc_offset, 0);

 FUNC_15(VAR_37 + VAR_55->crtc_offset,
        FUNC_30(VAR_61));
 FUNC_15(VAR_39 + VAR_55->crtc_offset,
        FUNC_30(VAR_61));
 FUNC_15(VAR_36 + VAR_55->crtc_offset,
        (u32)VAR_61 & VAR_25);
 FUNC_15(VAR_38 + VAR_55->crtc_offset,
        (u32) VAR_61 & VAR_25);
 FUNC_15(VAR_32 + VAR_55->crtc_offset, VAR_63);
 FUNC_15(VAR_42 + VAR_55->crtc_offset, VAR_66);






 FUNC_16(VAR_34 + VAR_55->crtc_offset,
   (VAR_70 ? VAR_24 : 0),
   ~VAR_24);

 if (VAR_70)
  FUNC_1("Bypassing hardware LUT due to 10 bit fb scanout.\n");

 FUNC_15(VAR_40 + VAR_55->crtc_offset, 0);
 FUNC_15(VAR_41 + VAR_55->crtc_offset, 0);
 FUNC_15(VAR_44 + VAR_55->crtc_offset, 0);
 FUNC_15(VAR_46 + VAR_55->crtc_offset, 0);
 FUNC_15(VAR_43 + VAR_55->crtc_offset, VAR_58->width);
 FUNC_15(VAR_45 + VAR_55->crtc_offset, VAR_58->height);

 VAR_64 = VAR_58->pitches[0] / VAR_58->format->cpp[0];
 FUNC_15(VAR_35 + VAR_55->crtc_offset, VAR_64);

 FUNC_24(VAR_50, 1);

 FUNC_15(VAR_31 + VAR_55->crtc_offset,
         VAR_58->height);
 VAR_52 &= ~3;
 VAR_53 &= ~1;
 FUNC_15(VAR_49 + VAR_55->crtc_offset,
        (VAR_52 << 16) | VAR_53);
 VAR_67 = VAR_50->mode.hdisplay;
 VAR_68 = (VAR_50->mode.vdisplay + 1) & ~1;

 FUNC_15(VAR_48 + VAR_55->crtc_offset,
        (VAR_67 << 16) | VAR_68);


 FUNC_15(VAR_47 + VAR_55->crtc_offset, 0);

 if (!VAR_54 && VAR_51 && VAR_51 != VAR_50->primary->fb) {
  VAR_60 = FUNC_27(VAR_51->obj[0]);
  VAR_69 = FUNC_20(VAR_60, 1);
  if (FUNC_29(VAR_69 != 0))
   return VAR_69;
  FUNC_21(VAR_60);
  FUNC_22(VAR_60);
 }


 FUNC_23(VAR_57);

 return 0;

}
