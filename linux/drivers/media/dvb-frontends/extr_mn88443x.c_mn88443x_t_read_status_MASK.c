
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
struct mn88443x_priv {struct regmap* regmap_t; } ;
struct TYPE_16__ {int len; TYPE_7__* stat; } ;
struct TYPE_14__ {int len; TYPE_5__* stat; } ;
struct TYPE_12__ {int len; TYPE_3__* stat; } ;
struct TYPE_10__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_8__ post_bit_count; TYPE_6__ post_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
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
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct mn88443x_priv *VAR_24,
      struct dtv_frontend_properties *VAR_25,
      enum fe_status *VAR_26)
{
 struct regmap *VAR_27 = VAR_24->regmap_t;
 u32 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 u64 VAR_34;


 FUNC_2(VAR_27, VAR_20, &VAR_28);
 VAR_29 = VAR_28 & VAR_22;

 *VAR_26 = 0;
 if (VAR_29 >= VAR_23)
  *VAR_26 |= VAR_15 | VAR_14 | VAR_12;
 if (VAR_29 >= VAR_21)
  *VAR_26 |= VAR_13 | VAR_11;


 VAR_25->strength.stat[0].scale = VAR_18;

 if (*VAR_26 & VAR_13) {
  u32 VAR_35;

  FUNC_2(VAR_27, VAR_1, &VAR_31);
  FUNC_2(VAR_27, VAR_0, &VAR_33);
  VAR_35 = (VAR_31 << 8) | VAR_33;

  VAR_25->strength.len = 1;
  VAR_25->strength.stat[0].scale = VAR_19;
  VAR_25->strength.stat[0].uvalue = VAR_35;
 }


 VAR_25->cnr.stat[0].scale = VAR_18;

 if (*VAR_26 & VAR_15) {
  u32 VAR_36;

  FUNC_2(VAR_27, VAR_10, &VAR_31);
  FUNC_2(VAR_27, VAR_9, &VAR_33);

  if (VAR_31 || VAR_33) {


   VAR_34 = (u64)80807124 - FUNC_1((VAR_31 << 8) | VAR_33)
    + 3355443;
   VAR_36 = FUNC_0(VAR_34 * 10000, 1 << 24);
  } else {
   VAR_36 = 0;
  }

  VAR_25->cnr.len = 1;
  VAR_25->cnr.stat[0].scale = VAR_17;
  VAR_25->cnr.stat[0].uvalue = VAR_36;
 }


 VAR_25->post_bit_error.stat[0].scale = VAR_18;
 VAR_25->post_bit_count.stat[0].scale = VAR_18;

 FUNC_2(VAR_27, VAR_2, &VAR_30);

 if ((*VAR_26 & VAR_15) && (VAR_30 & VAR_3)) {
  u32 VAR_37, VAR_38;

  FUNC_2(VAR_27, VAR_8, &VAR_31);
  FUNC_2(VAR_27, VAR_7, &VAR_32);
  FUNC_2(VAR_27, VAR_6, &VAR_33);
  VAR_37 = (VAR_31 << 16) | (VAR_32 << 8) | VAR_33;

  FUNC_2(VAR_27, VAR_5, &VAR_31);
  FUNC_2(VAR_27, VAR_4, &VAR_33);
  VAR_38 = ((VAR_31 << 8) | VAR_33) * 203 * 8;

  if (VAR_38) {
   VAR_25->post_bit_error.len = 1;
   VAR_25->post_bit_error.stat[0].scale = VAR_16;
   VAR_25->post_bit_error.stat[0].uvalue = VAR_37;
   VAR_25->post_bit_count.len = 1;
   VAR_25->post_bit_count.stat[0].scale = VAR_16;
   VAR_25->post_bit_count.stat[0].uvalue = VAR_38;
  }
 }

 return 0;
}
