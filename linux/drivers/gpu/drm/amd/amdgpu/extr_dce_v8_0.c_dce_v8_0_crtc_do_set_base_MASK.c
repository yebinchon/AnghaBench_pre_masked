
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef unsigned int uint32_t ;
typedef unsigned int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {unsigned int width; unsigned int height; unsigned int* pitches; struct drm_gem_object** obj; TYPE_3__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_4__ {unsigned int hdisplay; int vdisplay; } ;
struct drm_crtc {TYPE_2__* primary; TYPE_1__ mode; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_6__ {int format; unsigned int* cpp; } ;
struct TYPE_5__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct amdgpu_bo*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (struct amdgpu_bo*,int ) ;
 int FUNC_8 (struct amdgpu_bo*,int) ;
 int FUNC_9 (struct amdgpu_bo*) ;
 int FUNC_10 (struct amdgpu_bo*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct drm_crtc*,int) ;
 int FUNC_13 (struct drm_crtc*,int) ;
 int FUNC_14 (int,struct drm_format_name_buf*) ;
 struct amdgpu_bo* FUNC_15 (struct drm_gem_object*) ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 struct amdgpu_crtc* FUNC_16 (struct drm_crtc*) ;
 scalar_t__ FUNC_17 (int) ;
 unsigned int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct drm_crtc *VAR_65,
         struct drm_framebuffer *VAR_66,
         int VAR_67, int VAR_68, int VAR_69)
{
 struct amdgpu_crtc *VAR_70 = FUNC_16(VAR_65);
 struct drm_device *VAR_71 = VAR_65->dev;
 struct amdgpu_device *VAR_72 = VAR_71->dev_private;
 struct drm_framebuffer *VAR_73;
 struct drm_gem_object *VAR_74;
 struct amdgpu_bo *VAR_75;
 uint64_t VAR_76, VAR_77;
 uint32_t VAR_78, VAR_79;
 u32 VAR_80 = (VAR_26 << VAR_39);
 u32 VAR_81;
 u32 VAR_82, VAR_83;
 int VAR_84;
 bool VAR_85 = 0;
 struct drm_format_name_buf VAR_86;


 if (!VAR_69 && !VAR_65->primary->fb) {
  FUNC_1("No FB bound\n");
  return 0;
 }

 if (VAR_69)
  VAR_73 = VAR_66;
 else
  VAR_73 = VAR_65->primary->fb;




 VAR_74 = VAR_73->obj[0];
 VAR_75 = FUNC_15(VAR_74);
 VAR_84 = FUNC_8(VAR_75, 0);
 if (FUNC_17(VAR_84 != 0))
  return VAR_84;

 if (!VAR_69) {
  VAR_84 = FUNC_7(VAR_75, VAR_0);
  if (FUNC_17(VAR_84 != 0)) {
   FUNC_10(VAR_75);
   return -VAR_7;
  }
 }
 VAR_76 = FUNC_6(VAR_75);

 FUNC_5(VAR_75, &VAR_77);
 FUNC_10(VAR_75);

 VAR_81 = FUNC_0(VAR_77, VAR_44);

 switch (VAR_73->format->format) {
 case 134:
  VAR_78 = ((VAR_23 << VAR_14) |
        (VAR_34 << VAR_15));
  break;
 case 129:
 case 140:
  VAR_78 = ((VAR_21 << VAR_14) |
        (VAR_29 << VAR_15));



  break;
 case 131:
 case 142:
  VAR_78 = ((VAR_21 << VAR_14) |
        (VAR_27 << VAR_15));



  break;
 case 135:
 case 137:
  VAR_78 = ((VAR_21 << VAR_14) |
        (VAR_33 << VAR_15));



  break;
 case 133:
  VAR_78 = ((VAR_21 << VAR_14) |
        (VAR_30 << VAR_15));



  break;
 case 128:
 case 139:
  VAR_78 = ((VAR_22 << VAR_14) |
        (VAR_31 << VAR_15));



  break;
 case 130:
 case 141:
  VAR_78 = ((VAR_22 << VAR_14) |
        (VAR_28 << VAR_15));




  VAR_85 = 1;
  break;
 case 136:
 case 138:
  VAR_78 = ((VAR_22 << VAR_14) |
        (VAR_32 << VAR_15));




  VAR_85 = 1;
  break;
 case 132:
 case 143:
  VAR_78 = ((VAR_22 << VAR_14) |
               (VAR_31 << VAR_15));
  VAR_80 = ((VAR_36 << VAR_40) |
             (VAR_10 << VAR_38));



  break;
 default:
  FUNC_2("Unsupported screen format %s\n",
            FUNC_14(VAR_73->format->format, &VAR_86));
  return -VAR_7;
 }

 if (FUNC_0(VAR_77, VAR_3) == VAR_2) {
  unsigned VAR_87, VAR_88, VAR_89, VAR_90, VAR_91;

  VAR_87 = FUNC_0(VAR_77, VAR_5);
  VAR_88 = FUNC_0(VAR_77, VAR_4);
  VAR_89 = FUNC_0(VAR_77, VAR_42);
  VAR_90 = FUNC_0(VAR_77, VAR_45);
  VAR_91 = FUNC_0(VAR_77, VAR_43);

  VAR_78 |= (VAR_91 << VAR_18);
  VAR_78 |= (VAR_9 << VAR_11);
  VAR_78 |= (VAR_90 << VAR_20);
  VAR_78 |= (VAR_87 << VAR_13);
  VAR_78 |= (VAR_88 << VAR_12);
  VAR_78 |= (VAR_89 << VAR_16);
  VAR_78 |= (VAR_6 << VAR_17);
 } else if (FUNC_0(VAR_77, VAR_3) == VAR_1) {
  VAR_78 |= (VAR_8 << VAR_11);
 }

 VAR_78 |= (VAR_81 << VAR_19);

 FUNC_13(VAR_65, 0);




 FUNC_3(VAR_47 + VAR_70->crtc_offset, 0);

 FUNC_3(VAR_51 + VAR_70->crtc_offset,
        FUNC_18(VAR_76));
 FUNC_3(VAR_53 + VAR_70->crtc_offset,
        FUNC_18(VAR_76));
 FUNC_3(VAR_50 + VAR_70->crtc_offset,
        (u32)VAR_76 & VAR_35);
 FUNC_3(VAR_52 + VAR_70->crtc_offset,
        (u32) VAR_76 & VAR_37);
 FUNC_3(VAR_46 + VAR_70->crtc_offset, VAR_78);
 FUNC_3(VAR_56 + VAR_70->crtc_offset, VAR_80);






 FUNC_4(VAR_48 + VAR_70->crtc_offset,
   (VAR_85 ? VAR_41 : 0),
   ~VAR_41);

 if (VAR_85)
  FUNC_1("Bypassing hardware LUT due to 10 bit fb scanout.\n");

 FUNC_3(VAR_54 + VAR_70->crtc_offset, 0);
 FUNC_3(VAR_55 + VAR_70->crtc_offset, 0);
 FUNC_3(VAR_58 + VAR_70->crtc_offset, 0);
 FUNC_3(VAR_60 + VAR_70->crtc_offset, 0);
 FUNC_3(VAR_57 + VAR_70->crtc_offset, VAR_73->width);
 FUNC_3(VAR_59 + VAR_70->crtc_offset, VAR_73->height);

 VAR_79 = VAR_73->pitches[0] / VAR_73->format->cpp[0];
 FUNC_3(VAR_49 + VAR_70->crtc_offset, VAR_79);

 FUNC_12(VAR_65, 1);

 FUNC_3(VAR_61 + VAR_70->crtc_offset,
        VAR_73->height);

 VAR_67 &= ~3;
 VAR_68 &= ~1;
 FUNC_3(VAR_64 + VAR_70->crtc_offset,
        (VAR_67 << 16) | VAR_68);
 VAR_82 = VAR_65->mode.hdisplay;
 VAR_83 = (VAR_65->mode.vdisplay + 1) & ~1;
 FUNC_3(VAR_63 + VAR_70->crtc_offset,
        (VAR_82 << 16) | VAR_83);


 FUNC_3(VAR_62 + VAR_70->crtc_offset, 0);

 if (!VAR_69 && VAR_66 && VAR_66 != VAR_65->primary->fb) {
  VAR_75 = FUNC_15(VAR_66->obj[0]);
  VAR_84 = FUNC_8(VAR_75, 1);
  if (FUNC_17(VAR_84 != 0))
   return VAR_84;
  FUNC_9(VAR_75);
  FUNC_10(VAR_75);
 }


 FUNC_11(VAR_72);

 return 0;
}
