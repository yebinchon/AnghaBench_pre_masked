
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
typedef int u64 ;
typedef int u32 ;
struct vc4_plane_state {int dlist_count; int dlist_initialized; int src_y; int* src_h; int* offsets; int src_x; int pos0_offset; int crtc_x; int crtc_y; int crtc_w; int crtc_h; int pos2_offset; int* src_w; int ptr0_offset; scalar_t__* x_scaling; scalar_t__* y_scaling; int* dlist; int needs_bg_fill; scalar_t__ lbm_offset; scalar_t__ is_yuv; scalar_t__ is_unity; } ;
struct vc4_dev {TYPE_2__* hvs; } ;
struct hvs_format {int hvs; int pixel_order; } ;
struct drm_plane_state {int alpha; TYPE_4__* crtc; int rotation; struct drm_framebuffer* fb; } ;
struct drm_plane {int dev; } ;
struct drm_framebuffer {int* pitches; TYPE_5__* format; scalar_t__ modifier; } ;
struct TYPE_10__ {int num_planes; int hsub; int vsub; int* cpp; scalar_t__ has_alpha; int format; } ;
struct TYPE_8__ {int hdisplay; int vdisplay; } ;
struct TYPE_9__ {TYPE_3__ mode; } ;
struct TYPE_6__ {int start; } ;
struct TYPE_7__ {TYPE_1__ mitchell_netravali_filter; } ;


 int VAR_0 ;
 int FUNC_0 (char*,long long) ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct vc4_dev* FUNC_5 (int ) ;
 struct vc4_plane_state* FUNC_6 (struct drm_plane_state*) ;
 int FUNC_7 (struct vc4_plane_state*,int) ;
 struct hvs_format* FUNC_8 (int ) ;
 int FUNC_9 (struct drm_plane_state*,int) ;
 int FUNC_10 (struct drm_plane_state*) ;
 int FUNC_11 (struct drm_plane_state*) ;
 int FUNC_12 (struct drm_plane_state*,int) ;

__attribute__((used)) static int FUNC_13(struct drm_plane *VAR_49,
         struct drm_plane_state *VAR_50)
{
 struct vc4_dev *VAR_51 = FUNC_5(VAR_49->dev);
 struct vc4_plane_state *VAR_52 = FUNC_6(VAR_50);
 struct drm_framebuffer *VAR_53 = VAR_50->fb;
 u32 VAR_54 = VAR_52->dlist_count;
 const struct hvs_format *VAR_55 = FUNC_8(VAR_53->format->format);
 u64 VAR_56 = FUNC_3(VAR_53->modifier);
 int VAR_57 = VAR_53->format->num_planes;
 u32 VAR_58 = VAR_53->format->hsub;
 u32 VAR_59 = VAR_53->format->vsub;
 bool VAR_60;
 bool VAR_61;
 u32 VAR_62, VAR_63, VAR_64;
 u32 VAR_65, VAR_66;
 u32 VAR_67 = VAR_55->hvs;
 unsigned int VAR_68;
 int VAR_69, VAR_70;

 if (VAR_52->dlist_initialized)
  return 0;

 VAR_69 = FUNC_11(VAR_50);
 if (VAR_69)
  return VAR_69;







 if (VAR_57 == 1) {
  VAR_62 = FUNC_9(VAR_50, 0);
  VAR_63 = VAR_62;
 } else {
  VAR_62 = FUNC_9(VAR_50, 1);
  VAR_63 = FUNC_9(VAR_50, 0);
 }

 VAR_68 = FUNC_2(VAR_50->rotation,
      VAR_3 |
      VAR_1 |
      VAR_2);


 VAR_66 = VAR_52->src_y;
 if (VAR_68 & VAR_2)
  VAR_66 += VAR_52->src_h[0] - 1;

 switch (VAR_56) {
 case 128:
  VAR_65 = VAR_21;
  VAR_64 = FUNC_1(VAR_53->pitches[0], VAR_44);




  for (VAR_70 = 0; VAR_70 < VAR_57; VAR_70++) {
   VAR_52->offsets[VAR_70] += VAR_66 /
       (VAR_70 ? VAR_59 : 1) *
       VAR_53->pitches[VAR_70];

   VAR_52->offsets[VAR_70] += VAR_52->src_x /
       (VAR_70 ? VAR_58 : 1) *
       VAR_53->format->cpp[VAR_70];
  }

  break;

 case 129: {
  u32 VAR_71 = 12;

  u32 VAR_72 = VAR_53->format->cpp[0] == 2 ? 6 : 5;
  u32 VAR_73 = 5;
  u32 VAR_74 = (1 << VAR_72) - 1;



  u32 VAR_75 = (2 << VAR_73) - 1;





  u32 VAR_76 = VAR_53->pitches[0] >> (VAR_71 - VAR_73);
  u32 VAR_77 = VAR_52->src_x >> VAR_72;
  u32 VAR_78 = VAR_76 - VAR_77;
  u32 VAR_79 = VAR_66 >> VAR_73;




  u32 VAR_80 = (VAR_66 >> 4) & 1;
  u32 VAR_81 = (VAR_66 >> 2) & 3;
  u32 VAR_82 = VAR_66 & 3;
  u32 VAR_83 = VAR_52->src_x & VAR_74;
  u32 VAR_84 = VAR_66 & VAR_75;
  if (VAR_68 & VAR_2) {
   VAR_84 = VAR_75 - VAR_84;
   VAR_64 = VAR_27;
  } else {
   VAR_64 = 0;
  }

  VAR_65 = VAR_19;
  VAR_64 |= (FUNC_1(VAR_83, VAR_25) |
      FUNC_1(VAR_84, VAR_30) |
      FUNC_1(VAR_77, VAR_28) |
      FUNC_1(VAR_78, VAR_29));
  VAR_52->offsets[0] += VAR_79 * (VAR_76 << VAR_71);
  VAR_52->offsets[0] += VAR_81 << 8;
  VAR_52->offsets[0] += VAR_82 << 4;


  if (VAR_79 & 1) {
   VAR_64 |= VAR_26;
   VAR_52->offsets[0] += (VAR_76 - VAR_77) <<
       VAR_71;
   VAR_52->offsets[0] -= (1 + !VAR_80) << 10;
  } else {
   VAR_52->offsets[0] += VAR_77 << VAR_71;
   VAR_52->offsets[0] += VAR_80 << 10;
  }

  break;
 }

 case 130:
 case 132:
 case 131: {
  uint32_t VAR_85 = FUNC_4(VAR_53->modifier);
  u32 VAR_86, VAR_87, VAR_88, VAR_89;

  VAR_67 = VAR_5;

  switch (VAR_56) {
  case 130:
   VAR_65 = VAR_20;
   VAR_86 = 64;
   break;
  case 132:
   VAR_65 = VAR_18;
   VAR_86 = 128;
   break;
  case 131:
   VAR_65 = VAR_19;
   VAR_86 = 256;
   break;
  default:
   break;
  }

  if (VAR_85 > VAR_46) {
   FUNC_0("SAND height too large (%d)\n", VAR_85);
   return -VAR_4;
  }

  VAR_89 = VAR_86 / VAR_53->format->cpp[0];
  VAR_87 = VAR_52->src_x / VAR_89;
  VAR_88 = VAR_52->src_x % VAR_89;




  for (VAR_70 = 0; VAR_70 < VAR_57; VAR_70++) {
   VAR_52->offsets[VAR_70] += VAR_85 * VAR_86 * VAR_87;
   VAR_52->offsets[VAR_70] += VAR_66 /
       (VAR_70 ? VAR_59 : 1) *
       VAR_86;
   VAR_52->offsets[VAR_70] += VAR_88 /
       (VAR_70 ? VAR_58 : 1) *
       VAR_53->format->cpp[VAR_70];
  }

  VAR_64 = FUNC_1(VAR_85, VAR_45);
  break;
 }

 default:
  FUNC_0("Unsupported FB tiling flag 0x%16llx",
         (long long)VAR_53->modifier);
  return -VAR_4;
 }


 FUNC_7(VAR_52,
   VAR_23 |
   (VAR_68 & VAR_1 ? VAR_9 : 0) |
   (VAR_68 & VAR_2 ? VAR_24 : 0) |
   FUNC_1(VAR_13, VAR_12) |
   (VAR_55->pixel_order << VAR_10) |
   (VAR_67 << VAR_11) |
   FUNC_1(VAR_65, VAR_17) |
   (VAR_52->is_unity ? VAR_22 : 0) |
   FUNC_1(VAR_62, VAR_14) |
   FUNC_1(VAR_63, VAR_15));


 VAR_52->pos0_offset = VAR_52->dlist_count;
 FUNC_7(VAR_52,
   FUNC_1(VAR_50->alpha >> 8, VAR_31) |
   FUNC_1(VAR_52->crtc_x, VAR_32) |
   FUNC_1(VAR_52->crtc_y, VAR_33));


 if (!VAR_52->is_unity) {
  FUNC_7(VAR_52,
    FUNC_1(VAR_52->crtc_w,
           VAR_35) |
    FUNC_1(VAR_52->crtc_h,
           VAR_34));
 }





 VAR_60 = VAR_50->alpha != VAR_0 &&
     VAR_53->format->has_alpha;


 VAR_52->pos2_offset = VAR_52->dlist_count;
 FUNC_7(VAR_52,
   FUNC_1(VAR_53->format->has_alpha ?
          VAR_39 :
          VAR_38,
          VAR_37) |
   (VAR_60 ? VAR_36 : 0) |
   (VAR_53->format->has_alpha ? VAR_40 : 0) |
   FUNC_1(VAR_52->src_w[0], VAR_42) |
   FUNC_1(VAR_52->src_h[0], VAR_41));


 FUNC_7(VAR_52, 0xc0c0c0c0);






 VAR_52->ptr0_offset = VAR_52->dlist_count;
 for (VAR_70 = 0; VAR_70 < VAR_57; VAR_70++)
  FUNC_7(VAR_52, VAR_52->offsets[VAR_70]);


 for (VAR_70 = 0; VAR_70 < VAR_57; VAR_70++)
  FUNC_7(VAR_52, 0xc0c0c0c0);


 FUNC_7(VAR_52, VAR_64);


 for (VAR_70 = 1; VAR_70 < VAR_57; VAR_70++) {
  if (VAR_67 != VAR_5) {
   FUNC_7(VAR_52,
     FUNC_1(VAR_53->pitches[VAR_70],
            VAR_44));
  } else {
   FUNC_7(VAR_52, VAR_64);
  }
 }


 if (VAR_52->is_yuv) {
  FUNC_7(VAR_52, VAR_6);
  FUNC_7(VAR_52, VAR_7);
  FUNC_7(VAR_52, VAR_8);
 }

 VAR_52->lbm_offset = 0;

 if (VAR_52->x_scaling[0] != VAR_47 ||
     VAR_52->x_scaling[1] != VAR_47 ||
     VAR_52->y_scaling[0] != VAR_47 ||
     VAR_52->y_scaling[1] != VAR_47) {



  if (VAR_52->y_scaling[0] != VAR_47 ||
      VAR_52->y_scaling[1] != VAR_47)
   VAR_52->lbm_offset = VAR_52->dlist_count++;

  if (VAR_57 > 1) {




   FUNC_12(VAR_50, 1);
  }
  FUNC_12(VAR_50, 0);




  if (VAR_52->x_scaling[0] == VAR_48 ||
      VAR_52->y_scaling[0] == VAR_48 ||
      VAR_52->x_scaling[1] == VAR_48 ||
      VAR_52->y_scaling[1] == VAR_48) {
   u32 VAR_90 = FUNC_1(VAR_51->hvs->mitchell_netravali_filter.start,
         VAR_43);


   FUNC_7(VAR_52, VAR_90);

   FUNC_7(VAR_52, VAR_90);

   FUNC_7(VAR_52, VAR_90);

   FUNC_7(VAR_52, VAR_90);
  }
 }

 VAR_52->dlist[VAR_54] |=
  FUNC_1(VAR_52->dlist_count, VAR_16);


 VAR_61 = VAR_52->crtc_x == 0 && VAR_52->crtc_y == 0 &&
   VAR_52->crtc_w == VAR_50->crtc->mode.hdisplay &&
   VAR_52->crtc_h == VAR_50->crtc->mode.vdisplay;




 VAR_52->needs_bg_fill = VAR_53->format->has_alpha || !VAR_61 ||
       VAR_50->alpha != VAR_0;






 VAR_52->dlist_initialized = 1;

 FUNC_10(VAR_50);

 return 0;
}
