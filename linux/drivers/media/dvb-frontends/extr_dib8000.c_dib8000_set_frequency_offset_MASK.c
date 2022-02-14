
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct dtv_frontend_properties {int frequency; int inversion; int isdbt_sb_subchannel; scalar_t__ isdbt_sb_mode; } ;
struct TYPE_9__ {TYPE_3__* pll; } ;
struct dib8000_state {TYPE_4__ cfg; int subchannel; TYPE_5__** fe; } ;
struct TYPE_6__ {int (* get_frequency ) (TYPE_5__*,int*) ;} ;
struct TYPE_7__ {TYPE_1__ tuner_ops; } ;
struct TYPE_10__ {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_8__ {scalar_t__ ifreq; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int) ;
 int FUNC_2 (struct dib8000_state*,int,int) ;
 int FUNC_3 (char*,int,int,int,int) ;
 int FUNC_4 (TYPE_5__*,int*) ;

__attribute__((used)) static void FUNC_5(struct dib8000_state *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->fe[0]->dtv_property_cache;
 int VAR_2;
 u32 VAR_3;
 int VAR_4;

 if (VAR_0->fe[0]->ops.tuner_ops.get_frequency)
  VAR_0->fe[0]->ops.tuner_ops.get_frequency(VAR_0->fe[0], &VAR_3);
 else
  VAR_3 = VAR_1->frequency;
 VAR_3 /= 1000;
 VAR_4 = (int)VAR_3 - (int)VAR_1->frequency / 1000;

 if (VAR_1->isdbt_sb_mode) {
  VAR_0->subchannel = VAR_1->isdbt_sb_subchannel;

  VAR_2 = FUNC_0(VAR_0, 26) & 1;
  FUNC_2(VAR_0, 26, VAR_1->inversion ^ VAR_2);

  if (VAR_0->cfg.pll->ifreq == 0) {
   if ((VAR_1->inversion ^ VAR_2) == 0)
    FUNC_2(VAR_0, 26, FUNC_0(VAR_0, 26) | 1);
  } else {
   if ((VAR_1->inversion ^ VAR_2) == 0)
    VAR_4 *= -1;
  }
 }

 FUNC_3("%dkhz tuner offset (frequency = %dHz & current_rf = %dHz) total_dds_offset_hz = %d\n", VAR_1->frequency - VAR_3, VAR_1->frequency, VAR_3, VAR_4);


 FUNC_1(VAR_0, VAR_4);
}
