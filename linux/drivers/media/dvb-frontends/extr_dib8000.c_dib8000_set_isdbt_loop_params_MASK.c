
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dtv_frontend_properties {int isdbt_partial_reception; int isdbt_sb_mode; } ;
struct dib8000_state {int mode; TYPE_1__** fe; } ;
typedef enum param_loop_step { ____Placeholder_param_loop_step } param_loop_step ;
struct TYPE_2__ {struct dtv_frontend_properties dtv_property_cache; } ;




 int FUNC_0 (struct dib8000_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib8000_state *VAR_0, enum param_loop_step VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_0->fe[0]->dtv_property_cache;
 u16 VAR_3 = 0, VAR_4 = 0;

 switch (VAR_1) {
 case 129:
   if (VAR_2->isdbt_sb_mode) {
    if (VAR_2->isdbt_partial_reception == 0) {
     VAR_3 = ((11 - VAR_0->mode) << 12) | (6 << 8) | 0x40;
     VAR_4 = (3 << 5) | (0 << 4) | (10 - VAR_0->mode);
    } else {
     VAR_3 = ((10 - VAR_0->mode) << 12) | (6 << 8) | 0x60;
     VAR_4 = (3 << 5) | (0 << 4) | (9 - VAR_0->mode);
    }
   } else {
    VAR_3 = ((9 - VAR_0->mode) << 12) | (6 << 8) | 0x80;
    VAR_4 = (3 << 5) | (0 << 4) | (8 - VAR_0->mode);
   }
   break;
 case 128:
   if (VAR_2->isdbt_sb_mode) {
    if (VAR_2->isdbt_partial_reception == 0) {
     VAR_3 = ((13-VAR_0->mode) << 12) | (6 << 8) | 0x40;
     VAR_4 = (12-VAR_0->mode) | ((5 + VAR_0->mode) << 5);
    } else {
     VAR_3 = ((12-VAR_0->mode) << 12) | (6 << 8) | 0x60;
     VAR_4 = (11-VAR_0->mode) | ((5 + VAR_0->mode) << 5);
    }
   } else {
    VAR_3 = ((11-VAR_0->mode) << 12) | (6 << 8) | 0x80;
    VAR_4 = ((5+VAR_0->mode) << 5) | (10 - VAR_0->mode);
   }
   break;
 }
 FUNC_0(VAR_0, 32, VAR_3);
 FUNC_0(VAR_0, 37, VAR_4);
}
