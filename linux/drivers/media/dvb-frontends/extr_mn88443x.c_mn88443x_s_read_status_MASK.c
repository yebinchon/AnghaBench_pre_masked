
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct mn88443x_priv {struct regmap* regmap_s; } ;
struct TYPE_16__ {int len; TYPE_7__* stat; } ;
struct TYPE_14__ {int len; TYPE_5__* stat; } ;
struct TYPE_12__ {int len; TYPE_3__* stat; } ;
struct TYPE_10__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
typedef int s64 ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_15__ {int uvalue; void* scale; } ;
struct TYPE_13__ {int uvalue; void* scale; } ;
struct TYPE_11__ {int uvalue; void* scale; } ;
struct TYPE_9__ {int uvalue; void* scale; } ;


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
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct mn88443x_priv *VAR_21,
      struct dtv_frontend_properties *VAR_22,
      enum fe_status *VAR_23)
{
 struct regmap *VAR_24 = VAR_21->regmap_s;
 u32 VAR_25, VAR_26, VAR_27, VAR_28;
 u64 VAR_29;


 FUNC_3(VAR_24, VAR_9, &VAR_25);

 *VAR_23 = 0;
 if (VAR_25 & VAR_10)
  *VAR_23 |= VAR_16 | VAR_15 | VAR_13;
 if (VAR_25 & VAR_11)
  *VAR_23 |= VAR_14 | VAR_12;


 VAR_22->strength.stat[0].scale = VAR_19;

 if (*VAR_23 & VAR_14) {
  u32 VAR_30;

  FUNC_3(VAR_24, VAR_0, &VAR_26);
  VAR_30 = VAR_26 << 8;

  VAR_22->strength.len = 1;
  VAR_22->strength.stat[0].scale = VAR_20;
  VAR_22->strength.stat[0].uvalue = VAR_30;
 }


 VAR_22->cnr.stat[0].scale = VAR_19;

 if (*VAR_23 & VAR_16) {
  u32 VAR_31 = 0, VAR_32, VAR_33, VAR_34;
  u64 VAR_35 = 0;

  FUNC_3(VAR_24, VAR_6, &VAR_26);
  FUNC_3(VAR_24, VAR_5, &VAR_27);
  VAR_32 = (VAR_26 << 8) | VAR_27;
  FUNC_3(VAR_24, VAR_8, &VAR_26);
  FUNC_3(VAR_24, VAR_7, &VAR_27);
  VAR_33 = (VAR_26 << 8) | VAR_27;



  VAR_34 = (VAR_33 << 15) - VAR_32 * VAR_32;
  if (VAR_34 > 0) {


   VAR_35 = FUNC_1(16 * VAR_32 * VAR_32, VAR_34);
   VAR_35 = VAR_35 * VAR_35 * VAR_35;
   if (VAR_35)
    VAR_35 = FUNC_1(211243671486ULL, VAR_35);
  }

  if (VAR_35) {

   VAR_29 = (s64)2 * FUNC_2(VAR_32) - FUNC_2(FUNC_0(VAR_34)) - VAR_35
    - 5033164;
   VAR_31 = FUNC_1(VAR_29 * 10000, 1 << 24);
  }

  if (VAR_31) {
   VAR_22->cnr.len = 1;
   VAR_22->cnr.stat[0].scale = VAR_18;
   VAR_22->cnr.stat[0].uvalue = VAR_31;
  }
 }


 VAR_22->post_bit_error.stat[0].scale = VAR_19;
 VAR_22->post_bit_count.stat[0].scale = VAR_19;

 FUNC_3(VAR_24, VAR_1, &VAR_28);

 if ((*VAR_23 & VAR_16) && (VAR_28 & VAR_2)) {
  u32 VAR_36, VAR_37;

  FUNC_3(VAR_24, VAR_4, &VAR_26);
  FUNC_3(VAR_24, VAR_3, &VAR_27);
  VAR_36 = (VAR_26 << 8) | VAR_27;
  VAR_37 = (1 << 13) * 204;

  if (VAR_37) {
   VAR_22->post_bit_error.len = 1;
   VAR_22->post_bit_error.stat[0].scale = VAR_17;
   VAR_22->post_bit_error.stat[0].uvalue = VAR_36;
   VAR_22->post_bit_count.len = 1;
   VAR_22->post_bit_count.stat[0].scale = VAR_17;
   VAR_22->post_bit_count.stat[0].uvalue = VAR_37;
  }
 }

 return 0;
}
