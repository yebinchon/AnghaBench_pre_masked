
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_hqvdp_hvsrc {int hori_shift; int vert_shift; int cv_coef; int yv_coef; int ch_coef; int yh_coef; } ;
typedef enum sti_hvsrc_orient { ____Placeholder_sti_hvsrc_orient } sti_hvsrc_orient ;


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
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 int* VAR_22 ;
 int* VAR_23 ;
 int* VAR_24 ;
 int FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static void FUNC_1(enum sti_hvsrc_orient VAR_25, int VAR_26,
  struct sti_hqvdp_hvsrc *VAR_27)
{
 const int *VAR_28, *VAR_29;
 int VAR_30, VAR_31;


 if (VAR_26 < VAR_4) {
  VAR_29 = VAR_24;
  VAR_28 = VAR_23;
  VAR_31 = VAR_14;
  VAR_30 = VAR_13;
 } else if (VAR_26 < VAR_3) {
  VAR_29 = VAR_22;
  VAR_28 = VAR_21;
  VAR_31 = VAR_12;
  VAR_30 = VAR_11;
 } else if (VAR_26 < VAR_2) {
  VAR_29 = VAR_20;
  VAR_28 = VAR_19;
  VAR_31 = VAR_10;
  VAR_30 = VAR_9;
 } else if (VAR_26 < VAR_1) {
  VAR_29 = VAR_18;
  VAR_28 = VAR_17;
  VAR_31 = VAR_8;
  VAR_30 = VAR_7;
 } else if (VAR_26 == VAR_1) {
  VAR_29 = VAR_28 = VAR_16;
  VAR_31 = VAR_30 = VAR_6;
 } else {
  VAR_29 = VAR_28 = VAR_15;
  VAR_31 = VAR_30 = VAR_5;
 }

 if (VAR_25 == VAR_0) {
  VAR_27->hori_shift = (VAR_30 << 16) | VAR_31;
  FUNC_0(VAR_27->yh_coef, VAR_29, sizeof(VAR_27->yh_coef));
  FUNC_0(VAR_27->ch_coef, VAR_28, sizeof(VAR_27->ch_coef));
 } else {
  VAR_27->vert_shift = (VAR_30 << 16) | VAR_31;
  FUNC_0(VAR_27->yv_coef, VAR_29, sizeof(VAR_27->yv_coef));
  FUNC_0(VAR_27->cv_coef, VAR_28, sizeof(VAR_27->cv_coef));
 }
}
