
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_float_data {int b; int g; int r; } ;
struct gamma_point {size_t left_index; size_t right_index; scalar_t__ pos; int coeff; } ;
struct pixel_gamma_point {struct gamma_point b; struct gamma_point g; struct gamma_point r; } ;
struct fixed31_32 {int dummy; } ;
typedef enum channel_name { ____Placeholder_channel_name } channel_name ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct fixed31_32 FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct fixed31_32 VAR_4 ;
 int FUNC_3 (int ,int ) ;
 struct fixed31_32 VAR_5 ;

__attribute__((used)) static struct fixed31_32 FUNC_4(
 struct pwl_float_data *VAR_6,
 const struct pixel_gamma_point *VAR_7,
 enum channel_name VAR_8,
 uint32_t VAR_9)
{
 const struct gamma_point *VAR_10;

 struct fixed31_32 VAR_11;

 if (VAR_8 == VAR_1)
  VAR_10 = &VAR_7->r;
 else if (VAR_8 == VAR_0)
  VAR_10 = &VAR_7->g;
 else
  VAR_10 = &VAR_7->b;

 if ((VAR_10->left_index < 0) || (VAR_10->left_index > VAR_9)) {
  FUNC_0();
  return VAR_5;
 }

 if ((VAR_10->right_index < 0) || (VAR_10->right_index > VAR_9)) {
  FUNC_0();
  return VAR_5;
 }

 if (VAR_10->pos == VAR_3)
  if (VAR_8 == VAR_1)
   VAR_11 = FUNC_1(
    FUNC_2(
     VAR_10->coeff,
     FUNC_3(
      VAR_6[VAR_10->right_index].r,
      VAR_6[VAR_10->left_index].r)),
    VAR_6[VAR_10->left_index].r);
  else if (VAR_8 == VAR_0)
   VAR_11 = FUNC_1(
    FUNC_2(
     VAR_10->coeff,
     FUNC_3(
      VAR_6[VAR_10->right_index].g,
      VAR_6[VAR_10->left_index].g)),
    VAR_6[VAR_10->left_index].g);
  else
   VAR_11 = FUNC_1(
    FUNC_2(
     VAR_10->coeff,
     FUNC_3(
      VAR_6[VAR_10->right_index].b,
      VAR_6[VAR_10->left_index].b)),
    VAR_6[VAR_10->left_index].b);
 else if (VAR_10->pos == VAR_2) {
  FUNC_0();
  VAR_11 = VAR_5;
 } else {
  FUNC_0();
  VAR_11 = VAR_4;
 }

 return VAR_11;
}
