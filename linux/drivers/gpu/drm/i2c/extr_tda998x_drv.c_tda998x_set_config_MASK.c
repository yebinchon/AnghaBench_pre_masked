
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i2s_format; int ena_ap; int status; int sample_rate; int cea; int * route; } ;
struct tda998x_priv {int vip_cntrl_0; int vip_cntrl_1; int vip_cntrl_2; TYPE_2__ audio; } ;
struct TYPE_3__ {scalar_t__ format; int sample_width; int config; int status; int sample_rate; int cea; } ;
struct tda998x_encoder_params {TYPE_1__ audio_params; scalar_t__ mirr_f; int swap_f; scalar_t__ mirr_e; int swap_e; scalar_t__ mirr_d; int swap_d; scalar_t__ mirr_c; int swap_c; scalar_t__ mirr_b; int swap_b; scalar_t__ mirr_a; int swap_a; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,int) ;
 int * VAR_10 ;
 int FUNC_8 (struct tda998x_priv*,TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct tda998x_priv *VAR_11,
         const struct tda998x_encoder_params *VAR_12)
{
 VAR_11->vip_cntrl_0 = FUNC_0(VAR_12->swap_a) |
       (VAR_12->mirr_a ? VAR_4 : 0) |
       FUNC_1(VAR_12->swap_b) |
       (VAR_12->mirr_b ? VAR_5 : 0);
 VAR_11->vip_cntrl_1 = FUNC_2(VAR_12->swap_c) |
       (VAR_12->mirr_c ? VAR_6 : 0) |
       FUNC_3(VAR_12->swap_d) |
       (VAR_12->mirr_d ? VAR_7 : 0);
 VAR_11->vip_cntrl_2 = FUNC_4(VAR_12->swap_e) |
       (VAR_12->mirr_e ? VAR_8 : 0) |
       FUNC_5(VAR_12->swap_f) |
       (VAR_12->mirr_f ? VAR_9 : 0);

 if (VAR_12->audio_params.format != VAR_1) {
  unsigned int VAR_13, VAR_14;
  bool VAR_15 = VAR_12->audio_params.format == VAR_0;

  VAR_14 = VAR_2 + VAR_15;

  VAR_11->audio.route = &VAR_10[VAR_14];
  VAR_11->audio.cea = VAR_12->audio_params.cea;
  VAR_11->audio.sample_rate = VAR_12->audio_params.sample_rate;
  FUNC_6(VAR_11->audio.status, VAR_12->audio_params.status,
         FUNC_7(sizeof(VAR_11->audio.status),
      sizeof(VAR_12->audio_params.status)));
  VAR_11->audio.ena_ap = VAR_12->audio_params.config;
  VAR_11->audio.i2s_format = VAR_3;

  VAR_13 = VAR_15 ? 64 : VAR_12->audio_params.sample_width * 2;
  return FUNC_8(VAR_11, &VAR_11->audio, VAR_13);
 }

 return 0;
}
