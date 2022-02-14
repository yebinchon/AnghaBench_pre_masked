
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gamma_point {size_t left_index; size_t right_index; int pos; int coeff; } ;
struct pixel_gamma_point {struct gamma_point b; struct gamma_point g; struct gamma_point r; } ;
struct fixed31_32 {int dummy; } ;
struct hw_x_point {struct fixed31_32 regamma_y_blue; struct fixed31_32 regamma_y_green; struct fixed31_32 regamma_y_red; } ;
struct gamma_pixel {struct fixed31_32 b; struct fixed31_32 g; struct fixed31_32 r; } ;
struct dc_gamma {size_t num_entries; } ;
typedef enum hw_point_position { ____Placeholder_hw_point_position } hw_point_position ;
typedef enum channel_name { ____Placeholder_channel_name } channel_name ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fixed31_32,struct fixed31_32) ;
 int VAR_5 ;
 int FUNC_4 (struct dc_gamma const*,struct gamma_pixel const*,struct fixed31_32,int,size_t*,size_t*,size_t*,int*) ;

__attribute__((used)) static bool FUNC_5(
 const struct dc_gamma *VAR_6,
 struct pixel_gamma_point *VAR_7,
 const struct hw_x_point *VAR_8,
 const struct gamma_pixel *VAR_9,
 enum channel_name VAR_10,
 uint32_t VAR_11)
{
 uint32_t VAR_12 = 0;

 while (VAR_12 <= VAR_11) {
  struct fixed31_32 VAR_13;

  uint32_t VAR_14 = 0;
  uint32_t VAR_15 = 0;
  uint32_t VAR_16 = 0;

  enum hw_point_position VAR_17;

  struct gamma_point *VAR_18;

  struct fixed31_32 VAR_19;
  struct fixed31_32 VAR_20;

  if (VAR_10 == VAR_1)
   VAR_13 = VAR_8[VAR_12].regamma_y_red;
  else if (VAR_10 == VAR_0)
   VAR_13 = VAR_8[VAR_12].regamma_y_green;
  else
   VAR_13 = VAR_8[VAR_12].regamma_y_blue;

  if (!FUNC_4(
   VAR_6, VAR_9, VAR_13, VAR_10,
   &VAR_14, &VAR_15, &VAR_16, &VAR_17)) {
   FUNC_0();
   return 0;
  }

  if (VAR_15 >= VAR_6->num_entries + 3) {
   FUNC_0();
   return 0;
  }

  if (VAR_16 >= VAR_6->num_entries + 3) {
   FUNC_0();
   return 0;
  }

  if (VAR_10 == VAR_1) {
   VAR_18 = &VAR_7[VAR_12].r;

   VAR_19 = VAR_9[VAR_15].r;
   VAR_20 = VAR_9[VAR_16].r;
  } else if (VAR_10 == VAR_0) {
   VAR_18 = &VAR_7[VAR_12].g;

   VAR_19 = VAR_9[VAR_15].g;
   VAR_20 = VAR_9[VAR_16].g;
  } else {
   VAR_18 = &VAR_7[VAR_12].b;

   VAR_19 = VAR_9[VAR_15].b;
   VAR_20 = VAR_9[VAR_16].b;
  }

  if (VAR_17 == VAR_3)
   VAR_18->coeff = FUNC_1(
    FUNC_3(
     VAR_13,
     VAR_19),
    FUNC_3(
     VAR_20,
     VAR_19));
  else if (VAR_17 == VAR_2)
   VAR_18->coeff = VAR_5;
  else if (VAR_17 == VAR_4)
   VAR_18->coeff = FUNC_2(2);
  else {
   FUNC_0();
   return 0;
  }

  VAR_18->left_index = VAR_15;
  VAR_18->right_index = VAR_16;
  VAR_18->pos = VAR_17;

  ++VAR_12;
 }

 return 1;
}
