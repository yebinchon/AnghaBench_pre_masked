
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dtv_frontend_properties {int isdbt_sb_mode; int transmission_mode; TYPE_2__* layer; int isdbt_partial_reception; } ;
struct dib8000_state {int const seg_diff_mask; int const seg_mask; TYPE_1__** fe; } ;
typedef int s16 ;
struct TYPE_4__ {int modulation; } ;
struct TYPE_3__ {struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;




 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int FUNC_0 (struct dib8000_state*,int,int const) ;

__attribute__((used)) static void FUNC_1(struct dib8000_state *VAR_19)
{
 u16 VAR_20;
 const s16 *VAR_21;
 struct dtv_frontend_properties *VAR_22 = &VAR_19->fe[0]->dtv_property_cache;

 FUNC_0(VAR_19, 352, VAR_19->seg_diff_mask);
 FUNC_0(VAR_19, 353, VAR_19->seg_mask);


 FUNC_0(VAR_19, 351, (VAR_22->isdbt_sb_mode << 9) | (VAR_22->isdbt_sb_mode << 8) | (13 << 4) | 5);

 if (VAR_22->isdbt_sb_mode) {

  switch (VAR_22->transmission_mode) {
  case 131:
    if (VAR_22->isdbt_partial_reception == 0) {
     if (VAR_22->layer[0].modulation == VAR_0)
      VAR_21 = VAR_2;
     else
      VAR_21 = VAR_1;
    } else {
     if (VAR_22->layer[0].modulation == VAR_0) {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_5;
      else
       VAR_21 = VAR_4;
     } else {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_6;
      else
       VAR_21 = VAR_3;
     }
    }
    break;
  case 130:
    if (VAR_22->isdbt_partial_reception == 0) {
     if (VAR_22->layer[0].modulation == VAR_0)
      VAR_21 = VAR_8;
     else
      VAR_21 = VAR_7;
    } else {
     if (VAR_22->layer[0].modulation == VAR_0) {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_11;
      else
       VAR_21 = VAR_10;
     } else {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_12;
      else
       VAR_21 = VAR_9;
     }
    }
    break;
  case 128:
  case 129:
  default:
    if (VAR_22->isdbt_partial_reception == 0) {
     if (VAR_22->layer[0].modulation == VAR_0)
      VAR_21 = VAR_14;
     else
      VAR_21 = VAR_13;
    } else {
     if (VAR_22->layer[0].modulation == VAR_0) {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_17;
      else
       VAR_21 = VAR_16;
     } else {
      if (VAR_22->layer[1].modulation == VAR_0)
       VAR_21 = VAR_18;
      else
       VAR_21 = VAR_15;
     }
    }
    break;
  }

  for (VAR_20 = 0; VAR_20 < 8; VAR_20++)
   FUNC_0(VAR_19, 343 + VAR_20, VAR_21[VAR_20]);
 }
}
