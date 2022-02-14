
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tv_mode {int hsync_end; int htotal; int hburst_start; int hburst_len; int hblank_start; int hblank_end; int nbr_end; int vi_end_f1; int vi_end_f2; int vsync_len; int vsync_start_f1; int vsync_start_f2; int veq_len; int veq_start_f1; int veq_start_f2; int vburst_start_f1; int vburst_end_f1; int vburst_start_f2; int vburst_end_f2; int vburst_start_f3; int vburst_end_f3; int vburst_start_f4; int vburst_end_f4; scalar_t__ veq_ena; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

__attribute__((used)) static void
FUNC_1(struct drm_i915_private *VAR_34,
      const struct tv_mode *VAR_35,
      bool VAR_36)
{
 u32 VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41, VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;

 VAR_37 = (VAR_35->hsync_end << VAR_5) |
  (VAR_35->htotal << VAR_6);

 VAR_38 = (VAR_35->hburst_start << 16) |
  (VAR_35->hburst_len << VAR_4);

 if (VAR_36)
  VAR_38 |= VAR_0;

 VAR_39 = (VAR_35->hblank_start << VAR_3) |
  (VAR_35->hblank_end << VAR_2);

 VAR_40 = (VAR_35->nbr_end << VAR_10) |
  (VAR_35->vi_end_f1 << VAR_22) |
  (VAR_35->vi_end_f2 << VAR_23);

 VAR_41 = (VAR_35->vsync_len << VAR_24) |
  (VAR_35->vsync_start_f1 << VAR_25) |
  (VAR_35->vsync_start_f2 << VAR_26);

 VAR_42 = (VAR_35->veq_len << VAR_19) |
  (VAR_35->veq_start_f1 << VAR_20) |
  (VAR_35->veq_start_f2 << VAR_21);

 if (VAR_35->veq_ena)
  VAR_42 |= VAR_1;

 VAR_43 = (VAR_35->vburst_start_f1 << VAR_15) |
  (VAR_35->vburst_end_f1 << VAR_11);

 VAR_44 = (VAR_35->vburst_start_f2 << VAR_16) |
  (VAR_35->vburst_end_f2 << VAR_12);

 VAR_45 = (VAR_35->vburst_start_f3 << VAR_17) |
  (VAR_35->vburst_end_f3 << VAR_13);

 VAR_46 = (VAR_35->vburst_start_f4 << VAR_18) |
  (VAR_35->vburst_end_f4 << VAR_14);

 FUNC_0(VAR_7, VAR_37);
 FUNC_0(VAR_8, VAR_38);
 FUNC_0(VAR_9, VAR_39);
 FUNC_0(VAR_27, VAR_40);
 FUNC_0(VAR_28, VAR_41);
 FUNC_0(VAR_29, VAR_42);
 FUNC_0(VAR_30, VAR_43);
 FUNC_0(VAR_31, VAR_44);
 FUNC_0(VAR_32, VAR_45);
 FUNC_0(VAR_33, VAR_46);
}
