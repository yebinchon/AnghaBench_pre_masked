
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
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_35 ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct amdgpu_bo*,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (struct amdgpu_bo*,int ) ;
 int FUNC_9 (struct amdgpu_bo*,int) ;
 int FUNC_10 (struct amdgpu_bo*) ;
 int FUNC_11 (struct amdgpu_bo*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct drm_crtc*,int) ;
 int FUNC_14 (struct drm_crtc*,int) ;
 int FUNC_15 (int,struct drm_format_name_buf*) ;
 struct amdgpu_bo* FUNC_16 (struct drm_gem_object*) ;
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
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 struct amdgpu_crtc* FUNC_17 (struct drm_crtc*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (scalar_t__) ;

__attribute__((used)) static int FUNC_20(struct drm_crtc *VAR_55,
         struct drm_framebuffer *VAR_56,
         int VAR_57, int VAR_58, int VAR_59)
{
 struct amdgpu_crtc *VAR_60 = FUNC_17(VAR_55);
 struct drm_device *VAR_61 = VAR_55->dev;
 struct amdgpu_device *VAR_62 = VAR_61->dev_private;
 struct drm_framebuffer *VAR_63;
 struct drm_gem_object *VAR_64;
 struct amdgpu_bo *VAR_65;
 uint64_t VAR_66, VAR_67;
 uint32_t VAR_68, VAR_69;
 u32 VAR_70 = FUNC_3(0, VAR_30, VAR_17, VAR_10);
 u32 VAR_71;
 u32 VAR_72, VAR_73, VAR_74;
 int VAR_75;
 bool VAR_76 = 0;
 struct drm_format_name_buf VAR_77;


 if (!VAR_59 && !VAR_55->primary->fb) {
  FUNC_1("No FB bound\n");
  return 0;
 }

 if (VAR_59)
  VAR_63 = VAR_56;
 else
  VAR_63 = VAR_55->primary->fb;




 VAR_64 = VAR_63->obj[0];
 VAR_65 = FUNC_16(VAR_64);
 VAR_75 = FUNC_9(VAR_65, 0);
 if (FUNC_18(VAR_75 != 0))
  return VAR_75;

 if (!VAR_59) {
  VAR_75 = FUNC_8(VAR_65, VAR_1);
  if (FUNC_18(VAR_75 != 0)) {
   FUNC_11(VAR_65);
   return -VAR_7;
  }
 }
 VAR_66 = FUNC_7(VAR_65);

 FUNC_6(VAR_65, &VAR_67);
 FUNC_11(VAR_65);

 VAR_71 = FUNC_0(VAR_67, VAR_34);

 switch (VAR_63->format->format) {
 case 134:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 0);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 0);
  break;
 case 129:
 case 140:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 1);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 2);




  break;
 case 131:
 case 142:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 1);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 0);




  break;
 case 135:
 case 137:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 1);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 5);




  break;
 case 133:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 1);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 1);




  break;
 case 128:
 case 139:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 2);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 0);




  break;
 case 130:
 case 141:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 2);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 1);





  VAR_76 = 1;
  break;
 case 136:
 case 138:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 2);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 4);





  VAR_76 = 1;
  break;
 case 132:
 case 143:
  VAR_68 = FUNC_3(0, VAR_15, VAR_16, 2);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_19, 0);
  VAR_70 = FUNC_3(VAR_70, VAR_30, VAR_27, 2);
  VAR_70 = FUNC_3(VAR_70, VAR_30, VAR_14, 2);




  break;
 default:
  FUNC_2("Unsupported screen format %s\n",
            FUNC_15(VAR_63->format->format, &VAR_77));
  return -VAR_7;
 }

 if (FUNC_0(VAR_67, VAR_4) == VAR_3) {
  unsigned VAR_78, VAR_79, VAR_80, VAR_81, VAR_82;

  VAR_78 = FUNC_0(VAR_67, VAR_6);
  VAR_79 = FUNC_0(VAR_67, VAR_5);
  VAR_80 = FUNC_0(VAR_67, VAR_32);
  VAR_81 = FUNC_0(VAR_67, VAR_35);
  VAR_82 = FUNC_0(VAR_67, VAR_33);

  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_24, VAR_82);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_11,
       VAR_3);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_31,
       VAR_81);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_13, VAR_78);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_12, VAR_79);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_22,
       VAR_80);
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_23,
       VAR_0);
 } else if (FUNC_0(VAR_67, VAR_4) == VAR_2) {
  VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_11,
       VAR_2);
 }

 VAR_68 = FUNC_3(VAR_68, VAR_15, VAR_25,
      VAR_71);

 FUNC_14(VAR_55, 0);




 VAR_72 = FUNC_4(VAR_37 + VAR_60->crtc_offset);
 VAR_72 = FUNC_3(VAR_72, VAR_18,
       VAR_29, 0);
 FUNC_5(VAR_37 + VAR_60->crtc_offset, VAR_72);

 FUNC_5(VAR_41 + VAR_60->crtc_offset,
        FUNC_19(VAR_66));
 FUNC_5(VAR_43 + VAR_60->crtc_offset,
        FUNC_19(VAR_66));
 FUNC_5(VAR_40 + VAR_60->crtc_offset,
        (u32)VAR_66 & VAR_26);
 FUNC_5(VAR_42 + VAR_60->crtc_offset,
        (u32) VAR_66 & VAR_28);
 FUNC_5(VAR_36 + VAR_60->crtc_offset, VAR_68);
 FUNC_5(VAR_46 + VAR_60->crtc_offset, VAR_70);






 VAR_72 = FUNC_4(VAR_38 + VAR_60->crtc_offset);
 if (VAR_76)
  VAR_72 = FUNC_3(VAR_72, VAR_20, VAR_21, 1);
 else
  VAR_72 = FUNC_3(VAR_72, VAR_20, VAR_21, 0);
 FUNC_5(VAR_38 + VAR_60->crtc_offset, VAR_72);

 if (VAR_76)
  FUNC_1("Bypassing hardware LUT due to 10 bit fb scanout.\n");

 FUNC_5(VAR_44 + VAR_60->crtc_offset, 0);
 FUNC_5(VAR_45 + VAR_60->crtc_offset, 0);
 FUNC_5(VAR_48 + VAR_60->crtc_offset, 0);
 FUNC_5(VAR_50 + VAR_60->crtc_offset, 0);
 FUNC_5(VAR_47 + VAR_60->crtc_offset, VAR_63->width);
 FUNC_5(VAR_49 + VAR_60->crtc_offset, VAR_63->height);

 VAR_69 = VAR_63->pitches[0] / VAR_63->format->cpp[0];
 FUNC_5(VAR_39 + VAR_60->crtc_offset, VAR_69);

 FUNC_13(VAR_55, 1);

 FUNC_5(VAR_51 + VAR_60->crtc_offset,
        VAR_63->height);

 VAR_57 &= ~3;
 VAR_58 &= ~1;
 FUNC_5(VAR_54 + VAR_60->crtc_offset,
        (VAR_57 << 16) | VAR_58);
 VAR_73 = VAR_55->mode.hdisplay;
 VAR_74 = (VAR_55->mode.vdisplay + 1) & ~1;
 FUNC_5(VAR_53 + VAR_60->crtc_offset,
        (VAR_73 << 16) | VAR_74);


 FUNC_5(VAR_52 + VAR_60->crtc_offset, 0);

 if (!VAR_59 && VAR_56 && VAR_56 != VAR_55->primary->fb) {
  VAR_65 = FUNC_16(VAR_56->obj[0]);
  VAR_75 = FUNC_9(VAR_65, 1);
  if (FUNC_18(VAR_75 != 0))
   return VAR_75;
  FUNC_10(VAR_65);
  FUNC_11(VAR_65);
 }


 FUNC_12(VAR_62);

 return 0;
}
