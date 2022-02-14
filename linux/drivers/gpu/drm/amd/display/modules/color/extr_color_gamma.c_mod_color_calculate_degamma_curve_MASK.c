
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct pwl_float_data_ex {int b; int g; int r; } ;
struct dc_transfer_func_distributed_points {int x_point_at_y1_red; int x_point_at_y1_green; int x_point_at_y1_blue; scalar_t__ end_exponent; int * blue; int * green; int * red; } ;
typedef enum dc_transfer_func_predefined { ____Placeholder_dc_transfer_func_predefined } dc_transfer_func_predefined ;
struct TYPE_5__ {int x; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct pwl_float_data_ex*,size_t,TYPE_1__*) ;
 int FUNC_1 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int) ;
 int FUNC_2 (struct pwl_float_data_ex*,size_t,TYPE_1__*,int,int) ;
 TYPE_1__* VAR_12 ;
 struct pwl_float_data_ex* FUNC_3 (scalar_t__,int,int ) ;
 int FUNC_4 (struct pwl_float_data_ex*) ;

bool FUNC_5(enum dc_transfer_func_predefined VAR_13,
    struct dc_transfer_func_distributed_points *VAR_14)
{
 uint32_t VAR_15;
 bool VAR_16 = 0;
 struct pwl_float_data_ex *VAR_17 = ((void*)0);

 if (VAR_13 == VAR_10 ||
  VAR_13 == VAR_7) {

  for (VAR_15 = 0; VAR_15 <= VAR_1 ; VAR_15++) {
   VAR_14->red[VAR_15] = VAR_12[VAR_15].x;
   VAR_14->green[VAR_15] = VAR_12[VAR_15].x;
   VAR_14->blue[VAR_15] = VAR_12[VAR_15].x;
  }
  VAR_16 = 1;
 } else if (VAR_13 == VAR_8) {
  VAR_17 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_17),
           VAR_0);
  if (!VAR_17)
   goto rgb_degamma_alloc_fail;


  FUNC_0(VAR_17,
    VAR_1,
    VAR_12);
  for (VAR_15 = 0; VAR_15 <= VAR_1 ; VAR_15++) {
   VAR_14->red[VAR_15] = VAR_17[VAR_15].r;
   VAR_14->green[VAR_15] = VAR_17[VAR_15].g;
   VAR_14->blue[VAR_15] = VAR_17[VAR_15].b;
  }
  VAR_16 = 1;

  FUNC_4(VAR_17);
 } else if (VAR_13 == VAR_9 ||
  VAR_13 == VAR_2 ||
  VAR_13 == VAR_3 ||
  VAR_13 == VAR_4 ||
  VAR_13 == VAR_5) {
  VAR_17 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_17),
           VAR_0);
  if (!VAR_17)
   goto rgb_degamma_alloc_fail;

  FUNC_1(VAR_17,
    VAR_1,
    VAR_12,
    VAR_13);
  for (VAR_15 = 0; VAR_15 <= VAR_1 ; VAR_15++) {
   VAR_14->red[VAR_15] = VAR_17[VAR_15].r;
   VAR_14->green[VAR_15] = VAR_17[VAR_15].g;
   VAR_14->blue[VAR_15] = VAR_17[VAR_15].b;
  }
  VAR_16 = 1;

  FUNC_4(VAR_17);
 } else if (VAR_13 == VAR_6) {
  VAR_17 = FUNC_3(VAR_1 + VAR_11,
           sizeof(*VAR_17),
           VAR_0);
  if (!VAR_17)
   goto rgb_degamma_alloc_fail;

  FUNC_2(VAR_17,
    VAR_1,
    VAR_12,
    80, 1000);
  for (VAR_15 = 0; VAR_15 <= VAR_1 ; VAR_15++) {
   VAR_14->red[VAR_15] = VAR_17[VAR_15].r;
   VAR_14->green[VAR_15] = VAR_17[VAR_15].g;
   VAR_14->blue[VAR_15] = VAR_17[VAR_15].b;
  }
  VAR_16 = 1;
  FUNC_4(VAR_17);
 }
 VAR_14->end_exponent = 0;
 VAR_14->x_point_at_y1_red = 1;
 VAR_14->x_point_at_y1_green = 1;
 VAR_14->x_point_at_y1_blue = 1;

rgb_degamma_alloc_fail:
 return VAR_16;
}
