
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ alpha_en; int depth; } ;
struct TYPE_7__ {int width; } ;
struct TYPE_6__ {int width; } ;
struct TYPE_5__ {int width; } ;
struct scaler_data {TYPE_4__ lb_params; TYPE_3__ recout; TYPE_2__ viewport_c; TYPE_1__ viewport; } ;
typedef enum lb_memory_config { ____Placeholder_lb_memory_config } lb_memory_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(
  const struct scaler_data *VAR_3,
  enum lb_memory_config VAR_4,
  int *VAR_5,
  int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10,
 VAR_11, VAR_12, VAR_13, VAR_14;

 int VAR_15 = VAR_3->viewport.width < VAR_3->recout.width ?
   VAR_3->viewport.width : VAR_3->recout.width;
 int VAR_16 = VAR_3->viewport_c.width < VAR_3->recout.width ?
   VAR_3->viewport_c.width : VAR_3->recout.width;

 if (VAR_15 == 0)
  VAR_15 = 1;

 if (VAR_16 == 0)
  VAR_16 = 1;


 VAR_11 = FUNC_0(VAR_3->lb_params.depth);
 VAR_12 = (VAR_15 * VAR_11 + 71) / 72;
 VAR_13 = (VAR_16 * VAR_11 + 71) / 72;
 VAR_14 = (VAR_15 + 5) / 6;

 if (VAR_4 == VAR_0) {
  VAR_7 = 816;
  VAR_8 = 816;
  VAR_9 = 984;
 } else if (VAR_4 == VAR_1) {
  VAR_7 = 1088;
  VAR_8 = 1088;
  VAR_9 = 1312;
 } else if (VAR_4 == VAR_2) {

  VAR_7 = 816 + 1088 + 848 + 848 + 848;
  VAR_8 = 816 + 1088;
  VAR_9 = 984 + 1312 + 456;
 } else {
  VAR_7 = 816 + 1088 + 848;
  VAR_8 = 816 + 1088 + 848;
  VAR_9 = 984 + 1312 + 456;
 }
 *VAR_5 = VAR_7 / VAR_12;
 *VAR_6 = VAR_8 / VAR_13;
 VAR_10 = VAR_9 / VAR_14;

 if (VAR_3->lb_params.alpha_en
   && (VAR_10 < *VAR_5))
  *VAR_5 = VAR_10;

 if (*VAR_5 > 64)
  *VAR_5 = 64;
 if (*VAR_6 > 64)
  *VAR_6 = 64;

}
