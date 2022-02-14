
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dtv_frontend_properties {int isdbt_partial_reception; int guard_interval; int isdbt_sb_mode; int isdbt_sb_subchannel; TYPE_2__* layer; } ;
struct dib8000_state {int mode; int seg_diff_mask; int layer_b_nb_seg; int layer_c_nb_seg; int differential_constellation; int seg_mask; scalar_t__ isdbt_cfg_loaded; TYPE_1__** fe; } ;
struct TYPE_4__ {scalar_t__ modulation; int segment_count; } ;
struct TYPE_3__ {struct dtv_frontend_properties dtv_property_cache; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*,int ) ;
 int FUNC_3 (struct dib8000_state*,int) ;
 int FUNC_4 (struct dib8000_state*) ;
 int FUNC_5 (struct dib8000_state*,int,int) ;
 int FUNC_6 (struct dib8000_state*) ;
 int FUNC_7 (struct dib8000_state*,int) ;
 int FUNC_8 (struct dib8000_state*) ;
 int FUNC_9 (struct dib8000_state*,int) ;
 int FUNC_10 (struct dib8000_state*,int,int) ;
 int FUNC_11 (struct dib8000_state*) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_12(struct dib8000_state *VAR_4, u8 VAR_5, u8 VAR_6)
{
 u16 VAR_7 = 0, VAR_8 = 0;
 u16 VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0 ;
 u16 VAR_14 = VAR_0;
 int VAR_15;
 struct dtv_frontend_properties *VAR_16 = &VAR_4->fe[0]->dtv_property_cache;

 if (VAR_6)
  VAR_16->isdbt_partial_reception = 1;


 FUNC_10(VAR_4, 10, (VAR_5 << 4));


 VAR_4->mode = FUNC_11(VAR_4);


 VAR_11 = FUNC_3(VAR_4, 1);
 FUNC_10(VAR_4, 1, (VAR_11&0xfffc) | (VAR_16->guard_interval & 0x3));

 FUNC_10(VAR_4, 274, (FUNC_3(VAR_4, 274) & 0xffcf) | ((VAR_16->isdbt_partial_reception & 1) << 5) | ((VAR_16->isdbt_sb_mode & 1) << 4));


 if (VAR_16->isdbt_partial_reception) {
  VAR_4->seg_diff_mask = (VAR_16->layer[0].modulation == VAR_0) << VAR_3[0];
  for (VAR_12 = 1; VAR_12 < 3; VAR_12++)
   VAR_13 += (VAR_16->layer[VAR_12].modulation == VAR_0) * VAR_16->layer[VAR_12].segment_count;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_4->seg_diff_mask |= 1 << VAR_3[VAR_12+1];
 } else {
  for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
   VAR_13 += (VAR_16->layer[VAR_12].modulation == VAR_0) * VAR_16->layer[VAR_12].segment_count;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_4->seg_diff_mask |= 1 << VAR_3[VAR_12];
 }

 if (VAR_4->seg_diff_mask)
  FUNC_10(VAR_4, 268, (FUNC_3(VAR_4, 268) & 0xF9FF) | 0x0200);
 else
  FUNC_10(VAR_4, 268, (2 << 9) | 39);

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  VAR_14 = FUNC_5(VAR_4, VAR_12, VAR_14);
 if (VAR_6 == 0) {
  VAR_4->layer_b_nb_seg = VAR_16->layer[1].segment_count;
  VAR_4->layer_c_nb_seg = VAR_16->layer[2].segment_count;
 }


 FUNC_10(VAR_4, 0, (VAR_4->mode << 13) | VAR_4->seg_diff_mask);

 VAR_4->differential_constellation = (VAR_4->seg_diff_mask != 0);


 VAR_10 = FUNC_0(VAR_4, VAR_14);


 FUNC_9(VAR_4, VAR_10);


 if (VAR_16->isdbt_partial_reception)
  FUNC_2(VAR_4, VAR_2);
 else
  FUNC_2(VAR_4, VAR_1);


 if (VAR_16->isdbt_sb_mode) {
  FUNC_6(VAR_4);
  if (VAR_16->isdbt_sb_subchannel < 14)
   VAR_15 = FUNC_1(VAR_4, VAR_16->isdbt_sb_subchannel);
  else
   VAR_15 = 0;
 } else {
  FUNC_4(VAR_4);
  VAR_15 = 0xfff;
 }


 FUNC_8(VAR_4);

 FUNC_7(VAR_4, VAR_15);


 for (VAR_12 = 0; VAR_12 < 13; VAR_12++) {
  if ((((~VAR_4->seg_diff_mask) >> VAR_12) & 1) == 1) {
   VAR_7 += (1 << VAR_12) * ((VAR_12 == 0) || ((((VAR_4->seg_mask & (~VAR_4->seg_diff_mask)) >> (VAR_12 - 1)) & 1) == 0));
   VAR_8 += (1 << VAR_12) * ((VAR_12 == 12) || ((((VAR_4->seg_mask & (~VAR_4->seg_diff_mask)) >> (VAR_12 + 1)) & 1) == 0));
  }
 }
 FUNC_10(VAR_4, 222, VAR_7);
 FUNC_10(VAR_4, 223, VAR_8);


 FUNC_10(VAR_4, 189, ~VAR_4->seg_mask | VAR_4->seg_diff_mask);
 FUNC_10(VAR_4, 192, ~VAR_4->seg_mask | VAR_4->seg_diff_mask);
 FUNC_10(VAR_4, 225, ~VAR_4->seg_mask | VAR_4->seg_diff_mask);

 if (!VAR_6)
  FUNC_10(VAR_4, 288, (~VAR_4->seg_mask | VAR_4->seg_diff_mask) & 0x1fff);
 else
  FUNC_10(VAR_4, 288, 0x1fff);

 FUNC_10(VAR_4, 211, VAR_4->seg_mask & (~VAR_4->seg_diff_mask));
 FUNC_10(VAR_4, 287, ~VAR_4->seg_mask | 0x1000);

 FUNC_10(VAR_4, 178, 32);


 for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
  VAR_9 += (((VAR_16->layer[VAR_12].modulation == VAR_0) * 4 + 1) * VAR_16->layer[VAR_12].segment_count) ;



 VAR_9 *= (1 << (9-2));
 FUNC_10(VAR_4, 290, VAR_9);
 FUNC_10(VAR_4, 291, VAR_9);
 FUNC_10(VAR_4, 292, VAR_9);



 if (VAR_4->isdbt_cfg_loaded == 0)
  FUNC_10(VAR_4, 250, 3285);

 VAR_4->isdbt_cfg_loaded = 0;
}
