
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg216x_state {int last_reset; TYPE_1__* cfg; int parade_id; int fic_ver; int current_frequency; } ;
struct dvb_frontend {struct lg216x_state* demodulator_priv; } ;
struct dtv_frontend_properties {int atscmh_crc_err; int atscmh_rs_err; int atscmh_fic_err; int atscmh_sccc_code_mode_d; int atscmh_sccc_code_mode_c; int atscmh_sccc_code_mode_b; int atscmh_sccc_code_mode_a; int atscmh_sccc_block_mode; int atscmh_rs_code_mode_sec; int atscmh_rs_code_mode_pri; int atscmh_rs_frame_ensemble; int atscmh_rs_frame_mode; int atscmh_prc; int atscmh_sgn; int atscmh_tnog; int atscmh_nog; int atscmh_parade_id; int atscmh_fic_ver; int delivery_system; int frequency; int modulation; } ;
typedef enum atscmh_sccc_code_mode { ____Placeholder_atscmh_sccc_code_mode } atscmh_sccc_code_mode ;
typedef enum atscmh_sccc_block_mode { ____Placeholder_atscmh_sccc_block_mode } atscmh_sccc_block_mode ;
typedef enum atscmh_rs_frame_mode { ____Placeholder_atscmh_rs_frame_mode } atscmh_rs_frame_mode ;
typedef enum atscmh_rs_frame_ensemble { ____Placeholder_atscmh_rs_frame_ensemble } atscmh_rs_frame_ensemble ;
typedef enum atscmh_rs_code_mode { ____Placeholder_atscmh_rs_code_mode } atscmh_rs_code_mode ;
struct TYPE_2__ {int lg_chip; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lg216x_state*,int *) ;
 int FUNC_2 (struct lg216x_state*,int *) ;
 int FUNC_3 (struct lg216x_state*,int *) ;
 int FUNC_4 (struct lg216x_state*,int *) ;
 int FUNC_5 (struct lg216x_state*,int*,int*) ;
 int FUNC_6 (struct lg216x_state*,int*) ;
 int FUNC_7 (struct lg216x_state*,int*) ;
 int FUNC_8 (struct lg216x_state*,int*) ;
 int FUNC_9 (struct lg216x_state*,int*,int*,int*,int*) ;
 int FUNC_10 (struct lg216x_state*,int *) ;
 int FUNC_11 (struct lg216x_state*,int *) ;
 int FUNC_12 (struct lg216x_state*,int*) ;
 int FUNC_13 (struct lg216x_state*,int *) ;
 int FUNC_14 (struct lg216x_state*,int*) ;
 int FUNC_15 (struct lg216x_state*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct dvb_frontend *VAR_3,
          struct dtv_frontend_properties *VAR_4)
{
 struct lg216x_state *VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;

 FUNC_16("\n");

 VAR_4->modulation = VAR_1;
 VAR_4->frequency = VAR_5->current_frequency;
 VAR_4->delivery_system = VAR_0;

 VAR_6 = FUNC_2(VAR_5,
         &VAR_4->atscmh_fic_ver);
 if (FUNC_17(VAR_6))
  goto fail;
 if (VAR_5->fic_ver != VAR_4->atscmh_fic_ver) {
  VAR_5->fic_ver = VAR_4->atscmh_fic_ver;
  VAR_6 = FUNC_3(VAR_5,
         &VAR_4->atscmh_nog);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_11(VAR_5,
          &VAR_4->atscmh_tnog);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_10(VAR_5,
         &VAR_4->atscmh_sgn);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_4(VAR_5,
         &VAR_4->atscmh_prc);
  if (FUNC_17(VAR_6))
   goto fail;

  VAR_6 = FUNC_7(VAR_5,
   (enum atscmh_rs_frame_mode *)
   &VAR_4->atscmh_rs_frame_mode);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_6(VAR_5,
   (enum atscmh_rs_frame_ensemble *)
   &VAR_4->atscmh_rs_frame_ensemble);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_5(VAR_5,
   (enum atscmh_rs_code_mode *)
   &VAR_4->atscmh_rs_code_mode_pri,
   (enum atscmh_rs_code_mode *)
   &VAR_4->atscmh_rs_code_mode_sec);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_8(VAR_5,
   (enum atscmh_sccc_block_mode *)
   &VAR_4->atscmh_sccc_block_mode);
  if (FUNC_17(VAR_6))
   goto fail;
  VAR_6 = FUNC_9(VAR_5,
   (enum atscmh_sccc_code_mode *)
   &VAR_4->atscmh_sccc_code_mode_a,
   (enum atscmh_sccc_code_mode *)
   &VAR_4->atscmh_sccc_code_mode_b,
   (enum atscmh_sccc_code_mode *)
   &VAR_4->atscmh_sccc_code_mode_c,
   (enum atscmh_sccc_code_mode *)
   &VAR_4->atscmh_sccc_code_mode_d);
  if (FUNC_17(VAR_6))
   goto fail;
 }
fail:
 return VAR_6;
}
