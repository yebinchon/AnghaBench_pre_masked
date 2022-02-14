
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct si2165_state {TYPE_3__* client; scalar_t__ ber_prev; } ;
struct TYPE_14__ {TYPE_6__* stat; } ;
struct TYPE_12__ {TYPE_4__* stat; } ;
struct TYPE_9__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {int delivery_system; TYPE_7__ post_bit_count; TYPE_5__ post_bit_error; TYPE_2__ cnr; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct si2165_state* demodulator_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;
struct TYPE_13__ {void* scale; scalar_t__ uvalue; } ;
struct TYPE_11__ {scalar_t__ scale; int uvalue; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int svalue; scalar_t__ scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;


 int FUNC_0 (int *,char*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct si2165_state*,int ,int*) ;
 int FUNC_3 (struct si2165_state*,int ,int*) ;
 int FUNC_4 (struct si2165_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_16, enum fe_status *VAR_17)
{
 int VAR_18;
 u8 VAR_19;
 u32 VAR_20;
 struct si2165_state *VAR_21 = VAR_16->demodulator_priv;
 struct dtv_frontend_properties *VAR_22 = &VAR_16->dtv_property_cache;
 u32 VAR_23 = VAR_22->delivery_system;

 *VAR_17 = 0;

 switch (VAR_23) {
 case 128:

  VAR_18 = FUNC_3(VAR_21, VAR_11, &VAR_19);
  if (VAR_18 < 0)
   return VAR_18;
  switch (VAR_19 & 0x3) {
  case 0:
  case 1:
   break;
  case 2:
   *VAR_17 |= VAR_2 | VAR_0;
   break;
  }
  break;
 case 129:

  VAR_18 = FUNC_3(VAR_21, VAR_14, &VAR_19);
  if (VAR_18 < 0)
   return VAR_18;
  if (VAR_19 & 0x01) {
   *VAR_17 |= VAR_2;
   *VAR_17 |= VAR_0;
   *VAR_17 |= VAR_4;
   *VAR_17 |= VAR_3;
  }
  break;
 }


 VAR_18 = FUNC_3(VAR_21, VAR_13, &VAR_19);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_19 & 0x01) {
  *VAR_17 |= VAR_2;
  *VAR_17 |= VAR_0;
  *VAR_17 |= VAR_4;
  *VAR_17 |= VAR_3;
  *VAR_17 |= VAR_1;
 }


 if (VAR_23 == 129 && *VAR_17 & VAR_4) {
  VAR_18 = FUNC_2(VAR_21, VAR_12, &VAR_20);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_20 = (1000 * 10 * (121210686 - (u64)FUNC_1(VAR_20)))
    >> 24;
  VAR_22->cnr.stat[0].scale = VAR_6;
  VAR_22->cnr.stat[0].svalue = VAR_20;
 } else
  VAR_22->cnr.stat[0].scale = VAR_7;


 if (*VAR_17 & VAR_4) {
  if (VAR_22->post_bit_error.stat[0].scale == VAR_7) {

   VAR_18 = FUNC_4(VAR_21, VAR_10, 0x01);
   if (VAR_18 < 0)
    return VAR_18;


   VAR_22->post_bit_error.stat[0].scale = VAR_5;
   VAR_22->post_bit_count.stat[0].scale = VAR_5;
   VAR_22->post_bit_error.stat[0].uvalue = 0;
   VAR_22->post_bit_count.stat[0].uvalue = 0;





   VAR_21->ber_prev = 0;

  } else {
   VAR_18 = FUNC_3(VAR_21, VAR_8, &VAR_19);
   if (VAR_18 < 0)
    return VAR_18;

   if (VAR_19 & 1) {
    u32 VAR_24;

    VAR_18 = FUNC_2(VAR_21, VAR_9,
       &VAR_24);
    if (VAR_18 < 0)
     return VAR_18;

    VAR_22->post_bit_error.stat[0].uvalue +=
     VAR_24;
    VAR_22->post_bit_count.stat[0].uvalue +=
     VAR_15;


    VAR_18 = FUNC_4(VAR_21,
       VAR_10, 0x01);
    if (VAR_18 < 0)
     return VAR_18;

    FUNC_0(&VAR_21->client->dev,
     "post_bit_error=%u post_bit_count=%u\n",
     VAR_24, VAR_15);
   }
  }
 } else {
  VAR_22->post_bit_error.stat[0].scale = VAR_7;
  VAR_22->post_bit_count.stat[0].scale = VAR_7;
 }

 return 0;
}
