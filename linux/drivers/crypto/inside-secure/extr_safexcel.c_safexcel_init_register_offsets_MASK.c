
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_register_offsets {int global; int pe; int hia_gen_cfg; int hia_dse_thr; int hia_dse; int hia_dfe_thr; int hia_dfe; int hia_aic_xdr; int hia_aic_r; int hia_aic_g; int hia_aic; } ;
struct safexcel_crypto_priv {int flags; struct safexcel_register_offsets offsets; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_0(struct safexcel_crypto_priv *VAR_23)
{
 struct safexcel_register_offsets *VAR_24 = &VAR_23->offsets;

 if (VAR_23->flags & VAR_22) {
  VAR_24->hia_aic = VAR_1;
  VAR_24->hia_aic_g = VAR_2;
  VAR_24->hia_aic_r = VAR_3;
  VAR_24->hia_aic_xdr = VAR_4;
  VAR_24->hia_dfe = VAR_5;
  VAR_24->hia_dfe_thr = VAR_6;
  VAR_24->hia_dse = VAR_7;
  VAR_24->hia_dse_thr = VAR_8;
  VAR_24->hia_gen_cfg = VAR_9;
  VAR_24->pe = VAR_10;
  VAR_24->global = VAR_0;
 } else {
  VAR_24->hia_aic = VAR_12;
  VAR_24->hia_aic_g = VAR_13;
  VAR_24->hia_aic_r = VAR_14;
  VAR_24->hia_aic_xdr = VAR_15;
  VAR_24->hia_dfe = VAR_16;
  VAR_24->hia_dfe_thr = VAR_17;
  VAR_24->hia_dse = VAR_18;
  VAR_24->hia_dse_thr = VAR_19;
  VAR_24->hia_gen_cfg = VAR_20;
  VAR_24->pe = VAR_21;
  VAR_24->global = VAR_11;
 }
}
