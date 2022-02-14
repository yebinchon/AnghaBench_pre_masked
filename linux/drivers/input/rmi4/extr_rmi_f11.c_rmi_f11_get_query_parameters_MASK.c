
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rmi_device {int dummy; } ;
struct f11_data {int has_acm; scalar_t__ has_query28; scalar_t__ has_query27; scalar_t__ has_query12; scalar_t__ has_query11; scalar_t__ has_query9; } ;
struct f11_2d_sensor_queries {int nr_fingers; int has_rel; int has_abs; int has_gestures; int has_sensitivity_adjust; int configurable; int nr_x_electrodes; int nr_y_electrodes; int max_electrodes; int abs_data_size; int has_anchored_finger; int has_adj_hyst; int has_dribble; int has_bending_correction; int has_large_object_suppression; int has_jitter_filter; int f11_2d_query6; int has_single_tap; int has_tap_n_hold; int has_double_tap; int has_early_tap; int has_flick; int has_press; int has_pinch; int has_chiral; int has_palm_det; int has_rotate; int has_touch_shapes; int has_scroll_zones; int has_individual_scroll_zones; int has_mf_scroll; int has_mf_edge_motion; int has_mf_scroll_inertia; int query7_nonzero; int query8_nonzero; int has_pen; int has_proximity; int has_palm_det_sensitivity; int has_suppress_on_palm_detect; int has_two_pen_thresholds; int has_contact_geometry; int has_pen_hover_discrimination; int has_pen_filters; int nr_touch_shapes; int has_z_tuning; int has_algorithm_selection; int has_w_tuning; int has_pitch_info; int has_finger_size; int has_segmentation_aggressiveness; int has_XY_clip; int has_drumming_filter; int has_gapless_finger; int has_gapless_finger_tuning; int has_8bit_w; int has_adjustable_mapping; int has_info2; int has_physical_props; int has_finger_limit; int has_linear_coeff_2; int jitter_window_size; int jitter_filter_type; int light_control; int is_clear; int clickpad_props; int mouse_buttons; int has_advanced_gestures; int x_sensor_size_mm; int y_sensor_size_mm; } ;


 int FUNC_0 (int) ;
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
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int FUNC_1 (struct rmi_device*,scalar_t__,int*) ;
 int FUNC_2 (struct rmi_device*,scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_3(struct rmi_device *VAR_67,
   struct f11_data *VAR_68,
   struct f11_2d_sensor_queries *VAR_69,
   u16 VAR_70)
{
 int VAR_71;
 int VAR_72;
 u8 VAR_73[VAR_66];
 bool VAR_74 = 0;

 VAR_72 = FUNC_2(VAR_67, VAR_70, VAR_73,
    VAR_66);
 if (VAR_72 < 0)
  return VAR_72;

 VAR_69->nr_fingers = VAR_73[0] & VAR_63;
 VAR_69->has_rel = !!(VAR_73[0] & VAR_42);
 VAR_69->has_abs = !!(VAR_73[0] & VAR_5);
 VAR_69->has_gestures = !!(VAR_73[0] & VAR_23);
 VAR_69->has_sensitivity_adjust =
  !!(VAR_73[0] & VAR_46);
 VAR_69->configurable = !!(VAR_73[0] & VAR_3);

 VAR_69->nr_x_electrodes =
    VAR_73[1] & VAR_62;
 VAR_69->nr_y_electrodes =
    VAR_73[2] & VAR_62;
 VAR_69->max_electrodes =
    VAR_73[3] & VAR_62;

 VAR_71 = VAR_66;

 if (VAR_69->has_abs) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->abs_data_size =
   VAR_73[0] & VAR_0;
  VAR_69->has_anchored_finger =
   !!(VAR_73[0] & VAR_10);
  VAR_69->has_adj_hyst =
   !!(VAR_73[0] & VAR_7);
  VAR_69->has_dribble =
   !!(VAR_73[0] & VAR_15);
  VAR_69->has_bending_correction =
   !!(VAR_73[0] & VAR_11);
  VAR_69->has_large_object_suppression =
   !!(VAR_73[0] & VAR_27);
  VAR_69->has_jitter_filter =
   !!(VAR_73[0] & VAR_26);
  VAR_71++;
 }

 if (VAR_69->has_rel) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71,
     &VAR_69->f11_2d_query6);
  if (VAR_72 < 0)
   return VAR_72;
  VAR_71++;
 }

 if (VAR_69->has_gestures) {
  VAR_72 = FUNC_2(VAR_67, VAR_70 + VAR_71,
     VAR_73, VAR_65);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->has_single_tap =
   !!(VAR_73[0] & VAR_47);
  VAR_69->has_tap_n_hold =
   !!(VAR_73[0] & VAR_49);
  VAR_69->has_double_tap =
   !!(VAR_73[0] & VAR_14);
  VAR_69->has_early_tap =
   !!(VAR_73[0] & VAR_17);
  VAR_69->has_flick =
   !!(VAR_73[0] & VAR_20);
  VAR_69->has_press =
   !!(VAR_73[0] & VAR_40);
  VAR_69->has_pinch =
   !!(VAR_73[0] & VAR_38);
  VAR_69->has_chiral =
   !!(VAR_73[0] & VAR_12);


  VAR_69->has_palm_det =
   !!(VAR_73[1] & VAR_32);
  VAR_69->has_rotate =
   !!(VAR_73[1] & VAR_43);
  VAR_69->has_touch_shapes =
   !!(VAR_73[1] & VAR_50);
  VAR_69->has_scroll_zones =
   !!(VAR_73[1] & VAR_44);
  VAR_69->has_individual_scroll_zones =
   !!(VAR_73[1] & VAR_24);
  VAR_69->has_mf_scroll =
   !!(VAR_73[1] & VAR_30);
  VAR_69->has_mf_edge_motion =
   !!(VAR_73[1] & VAR_29);
  VAR_69->has_mf_scroll_inertia =
   !!(VAR_73[1] & VAR_31);

  VAR_69->query7_nonzero = !!(VAR_73[0]);
  VAR_69->query8_nonzero = !!(VAR_73[1]);

  VAR_71 += 2;
 }

 if (VAR_68->has_query9) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->has_pen =
   !!(VAR_73[0] & VAR_34);
  VAR_69->has_proximity =
   !!(VAR_73[0] & VAR_41);
  VAR_69->has_palm_det_sensitivity =
   !!(VAR_73[0] & VAR_33);
  VAR_69->has_suppress_on_palm_detect =
   !!(VAR_73[0] & VAR_48);
  VAR_69->has_two_pen_thresholds =
   !!(VAR_73[0] & VAR_51);
  VAR_69->has_contact_geometry =
   !!(VAR_73[0] & VAR_13);
  VAR_69->has_pen_hover_discrimination =
   !!(VAR_73[0] & VAR_36);
  VAR_69->has_pen_filters =
   !!(VAR_73[0] & VAR_35);

  VAR_71++;
 }

 if (VAR_69->has_touch_shapes) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->nr_touch_shapes = VAR_73[0] &
    VAR_64;

  VAR_71++;
 }

 if (VAR_68->has_query11) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->has_z_tuning =
   !!(VAR_73[0] & VAR_54);
  VAR_69->has_algorithm_selection =
   !!(VAR_73[0] & VAR_9);
  VAR_69->has_w_tuning =
   !!(VAR_73[0] & VAR_52);
  VAR_69->has_pitch_info =
   !!(VAR_73[0] & VAR_39);
  VAR_69->has_finger_size =
   !!(VAR_73[0] & VAR_19);
  VAR_69->has_segmentation_aggressiveness =
   !!(VAR_73[0] &
    VAR_45);
  VAR_69->has_XY_clip =
   !!(VAR_73[0] & VAR_53);
  VAR_69->has_drumming_filter =
   !!(VAR_73[0] & VAR_16);

  VAR_71++;
 }

 if (VAR_68->has_query12) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->has_gapless_finger =
   !!(VAR_73[0] & VAR_21);
  VAR_69->has_gapless_finger_tuning =
   !!(VAR_73[0] & VAR_22);
  VAR_69->has_8bit_w =
   !!(VAR_73[0] & VAR_4);
  VAR_69->has_adjustable_mapping =
   !!(VAR_73[0] & VAR_6);
  VAR_69->has_info2 =
   !!(VAR_73[0] & VAR_25);
  VAR_69->has_physical_props =
   !!(VAR_73[0] & VAR_37);
  VAR_69->has_finger_limit =
   !!(VAR_73[0] & VAR_18);
  VAR_69->has_linear_coeff_2 =
   !!(VAR_73[0] & VAR_28);

  VAR_71++;
 }

 if (VAR_69->has_jitter_filter) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->jitter_window_size = VAR_73[0] &
   VAR_58;
  VAR_69->jitter_filter_type = (VAR_73[0] &
   VAR_56) >>
   VAR_57;

  VAR_71++;
 }

 if (VAR_69->has_info2) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71, VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->light_control =
   VAR_73[0] & VAR_59;
  VAR_69->is_clear =
   !!(VAR_73[0] & VAR_55);
  VAR_69->clickpad_props =
   (VAR_73[0] & VAR_1) >>
   VAR_2;
  VAR_69->mouse_buttons =
   (VAR_73[0] & VAR_60) >>
   VAR_61;
  VAR_69->has_advanced_gestures =
   !!(VAR_73[0] & VAR_8);

  VAR_71++;
 }

 if (VAR_69->has_physical_props) {
  VAR_72 = FUNC_2(VAR_67, VAR_70
   + VAR_71, VAR_73, 4);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_69->x_sensor_size_mm =
   (VAR_73[0] | (VAR_73[1] << 8)) / 10;
  VAR_69->y_sensor_size_mm =
   (VAR_73[2] | (VAR_73[3] << 8)) / 10;





  VAR_71 += 12;
 }

 if (VAR_68->has_query27)
  ++VAR_71;

 if (VAR_68->has_query28) {
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71,
    VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  VAR_74 = !!(VAR_73[0] & FUNC_0(6));
 }

 if (VAR_74) {
  VAR_71 += 2;
  VAR_72 = FUNC_1(VAR_67, VAR_70 + VAR_71,
    VAR_73);
  if (VAR_72 < 0)
   return VAR_72;

  if (!!(VAR_73[0] & FUNC_0(5)))
   VAR_68->has_acm = 1;
 }

 return VAR_71;
}
