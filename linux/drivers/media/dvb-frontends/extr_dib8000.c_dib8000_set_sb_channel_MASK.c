
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dtv_frontend_properties {scalar_t__ transmission_mode; int isdbt_partial_reception; } ;
struct dib8000_state {int seg_mask; int mode; int seg_diff_mask; TYPE_1__** fe; } ;
struct TYPE_2__ {struct dtv_frontend_properties dtv_property_cache; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int const) ;

__attribute__((used)) static void FUNC_2(struct dib8000_state *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->fe[0]->dtv_property_cache;
 const u16 *VAR_6;
 u16 VAR_7;

 if (VAR_5->transmission_mode == VAR_0 || VAR_5->transmission_mode == VAR_1) {
  FUNC_1(VAR_4, 219, FUNC_0(VAR_4, 219) | 0x1);
  FUNC_1(VAR_4, 190, FUNC_0(VAR_4, 190) | (0x1 << 14));
 } else {
  FUNC_1(VAR_4, 219, FUNC_0(VAR_4, 219) & 0xfffe);
  FUNC_1(VAR_4, 190, FUNC_0(VAR_4, 190) & 0xbfff);
 }

 if (VAR_5->isdbt_partial_reception == 1)
  VAR_4->seg_mask = 0x00E0;
 else
  VAR_4->seg_mask = 0x0040;

 FUNC_1(VAR_4, 268, (FUNC_0(VAR_4, 268) & 0xF9FF) | 0x0200);



 FUNC_1(VAR_4, 187, (4 << 12) | (0 << 11) | (63 << 5) | (0x3 << 3) | ((~VAR_5->isdbt_partial_reception & 1) << 2) | 0x3);

 FUNC_1(VAR_4, 340, (16 << 6) | (8 << 0));
 FUNC_1(VAR_4, 341, (6 << 3) | (1 << 2) | (1 << 1) | (1 << 0));


 if (VAR_5->isdbt_partial_reception == 0) {

  if (VAR_4->mode == 3)
   FUNC_1(VAR_4, 180, 0x1fcf | ((VAR_4->mode - 1) << 14));
  else
   FUNC_1(VAR_4, 180, 0x0fcf | ((VAR_4->mode - 1) << 14));


  FUNC_1(VAR_4, 338, (1 << 12) | (1 << 10) | (0 << 9) | (5 << 5) | 4);
  VAR_6 = &VAR_2[0];
 } else {
  FUNC_1(VAR_4, 180, 0x1fcf | (1 << 14));

  FUNC_1(VAR_4, 338, (1 << 12) | (1 << 10) | (0 << 9) | (4 << 5) | 4);
  VAR_6 = &VAR_3[0];
 }

 FUNC_1(VAR_4, 228, 1);
 FUNC_1(VAR_4, 205, FUNC_0(VAR_4, 205) & 0xfff0);

 if (VAR_5->isdbt_partial_reception == 0 && VAR_5->transmission_mode == VAR_0)
  FUNC_1(VAR_4, 265, 15);


 for (VAR_7 = 0 ; VAR_7 < 3; VAR_7++) {
  FUNC_1(VAR_4, 181+VAR_7, VAR_6[VAR_7]);
  FUNC_1(VAR_4, 184+VAR_7, VAR_6[VAR_7]);
 }






 FUNC_1(VAR_4, 266, ~VAR_4->seg_mask | VAR_4->seg_diff_mask);

 if (VAR_5->isdbt_partial_reception == 0)
  FUNC_1(VAR_4, 178, 64);
 else
  FUNC_1(VAR_4, 178, 32);
}
