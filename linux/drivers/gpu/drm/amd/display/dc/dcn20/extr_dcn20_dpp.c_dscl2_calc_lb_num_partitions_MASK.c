
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ alpha_en; } ;
struct TYPE_7__ {int width; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_5__ {int width; } ;
struct scaler_data {TYPE_4__ lb_params; TYPE_3__ recout; TYPE_2__ viewport_c; TYPE_1__ viewport; } ;
typedef enum lb_memory_config { ____Placeholder_lb_memory_config } lb_memory_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(
  const struct scaler_data *VAR_3,
  enum lb_memory_config VAR_4,
  int *VAR_5,
  int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9,
 VAR_10, VAR_11, VAR_12, VAR_13;

 int VAR_14 = VAR_3->viewport.width < VAR_3->recout.width ?
   VAR_3->viewport.width : VAR_3->recout.width;
 int VAR_15 = VAR_3->viewport_c.width < VAR_3->recout.width ?
   VAR_3->viewport_c.width : VAR_3->recout.width;

 if (VAR_14 == 0)
  VAR_14 = 1;

 if (VAR_15 == 0)
  VAR_15 = 1;

 VAR_7 = (VAR_14 + 5) / 6;
 VAR_8 = (VAR_15 + 5) / 6;
 VAR_9 = (VAR_14 + 5) / 6;

 if (VAR_4 == VAR_0) {
  VAR_10 = 970;
  VAR_11 = 970;
  VAR_12 = 970;
 } else if (VAR_4 == VAR_1) {
  VAR_10 = 1290;
  VAR_11 = 1290;
  VAR_12 = 1290;
 } else if (VAR_4 == VAR_2) {

  VAR_10 = 970 + 1290 + 484 + 484 + 484;
  VAR_11 = 970 + 1290;
  VAR_12 = 970 + 1290 + 484;
 } else {
  VAR_10 = 970 + 1290 + 484;
  VAR_11 = 970 + 1290 + 484;
  VAR_12 = 970 + 1290 + 484;
 }
 *VAR_5 = VAR_10 / VAR_7;
 *VAR_6 = VAR_11 / VAR_8;
 VAR_13 = VAR_12 / VAR_9;

 if (VAR_3->lb_params.alpha_en
   && (VAR_13 < *VAR_5))
  *VAR_5 = VAR_13;

 if (*VAR_5 > 64)
  *VAR_5 = 64;
 if (*VAR_6 > 64)
  *VAR_6 = 64;
}
