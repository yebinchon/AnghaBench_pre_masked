
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct radeon_tv_mode_constants {unsigned int hor_total; unsigned int ver_total; int def_restart; int hor_resolution; scalar_t__ pix_to_tv; } ;
struct TYPE_2__ {scalar_t__* h_code_timing; int hrestart; int vrestart; int frestart; int timing_cntl; } ;
struct radeon_encoder_tv_dac {scalar_t__ tv_std; int h_pos; int v_pos; int h_size; TYPE_1__ tv; } ;
struct radeon_encoder {struct radeon_encoder_tv_dac* enc_priv; } ;
struct drm_encoder {int dummy; } ;
typedef scalar_t__ PAL_TV_H_SIZE_UNIT ;
typedef scalar_t__ NTSC_TV_H_SIZE_UNIT ;


 int FUNC_0 (char*,int,scalar_t__,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 struct radeon_tv_mode_constants* FUNC_1 (struct radeon_encoder*,int *) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_3(struct drm_encoder *VAR_19)
{
 struct radeon_encoder *VAR_20 = FUNC_2(VAR_19);
 struct radeon_encoder_tv_dac *VAR_21 = VAR_20->enc_priv;
 int VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;
 u16 VAR_28, VAR_29, VAR_30;
 bool VAR_31;
 const struct radeon_tv_mode_constants *VAR_32;

 VAR_32 = FUNC_1(VAR_20, ((void*)0));
 if (!VAR_32)
  return 0;

 VAR_23 = VAR_32->hor_total;
 VAR_24 = VAR_32->ver_total;

 if (VAR_21->tv_std == VAR_13 ||
     VAR_21->tv_std == VAR_14 ||
     VAR_21->tv_std == VAR_16 ||
     VAR_21->tv_std == VAR_15)
  VAR_25 = VAR_5 + 1;
 else
  VAR_25 = VAR_9 + 1;


 VAR_27 = VAR_21->h_pos * VAR_0;

 if (VAR_21->tv_std == VAR_13 ||
     VAR_21->tv_std == VAR_14 ||
     VAR_21->tv_std == VAR_16) {
  VAR_27 -= 50;
  VAR_28 = VAR_17[VAR_1];
  VAR_29 = VAR_17[VAR_2];
 } else {
  VAR_28 = VAR_18[VAR_1];
  VAR_29 = VAR_18[VAR_2];
 }

 VAR_28 = (u16)((int)VAR_28 + VAR_27);
 VAR_29 = (u16)((int)VAR_29 - VAR_27);

 VAR_31 = (VAR_28 != VAR_21->tv.h_code_timing[VAR_1] ||
       VAR_29 != VAR_21->tv.h_code_timing[VAR_2]);

 VAR_21->tv.h_code_timing[VAR_1] = VAR_28;
 VAR_21->tv.h_code_timing[VAR_2] = VAR_29;


 VAR_27 = (VAR_27 * (int)(VAR_32->pix_to_tv)) / 1000;


 VAR_22 = VAR_32->def_restart;




 if (VAR_21->tv_std == VAR_13 ||
     VAR_21->tv_std == VAR_14 ||
     VAR_21->tv_std == VAR_16 ||
     VAR_21->tv_std == VAR_15)
  VAR_26 = ((int)(VAR_24 * VAR_23) * 2 * VAR_21->v_pos) / (int)(VAR_4);
 else
  VAR_26 = ((int)(VAR_24 * VAR_23) * 2 * VAR_21->v_pos) / (int)(VAR_8);

 VAR_22 -= VAR_26 + VAR_27;

 FUNC_0("compute_restarts: def = %u h = %d v = %d, p1 = %04x, p2 = %04x, restart = %d\n",
    VAR_32->def_restart, VAR_21->h_pos, VAR_21->v_pos, VAR_28, VAR_29, VAR_22);

 VAR_21->tv.hrestart = VAR_22 % VAR_23;
 VAR_22 /= VAR_23;
 VAR_21->tv.vrestart = VAR_22 % VAR_24;
 VAR_22 /= VAR_24;
 VAR_21->tv.frestart = VAR_22 % VAR_25;

 FUNC_0("compute_restart: F/H/V=%u,%u,%u\n",
    (unsigned)VAR_21->tv.frestart,
    (unsigned)VAR_21->tv.vrestart,
    (unsigned)VAR_21->tv.hrestart);


 if (VAR_21->tv_std == VAR_13 ||
     VAR_21->tv_std == VAR_14 ||
     VAR_21->tv_std == VAR_16)
  VAR_30 = (u16)((int)(VAR_32->hor_resolution * 4096 * VAR_3) /
         (VAR_21->h_size * (int)(NTSC_TV_H_SIZE_UNIT) + (int)(VAR_6)));
 else
  VAR_30 = (u16)((int)(VAR_32->hor_resolution * 4096 * VAR_7) /
         (VAR_21->h_size * (int)(PAL_TV_H_SIZE_UNIT) + (int)(VAR_10)));

 VAR_21->tv.timing_cntl = (VAR_21->tv.timing_cntl & ~VAR_11) |
  ((u32)VAR_30 << VAR_12);

 FUNC_0("compute_restart: h_size = %d h_inc = %d\n", VAR_21->h_size, VAR_30);

 return VAR_31;
}
