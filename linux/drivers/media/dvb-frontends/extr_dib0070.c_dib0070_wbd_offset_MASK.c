
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int frequency; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; struct dib0070_state* tuner_priv; } ;
struct dib0070_wbd_gain_cfg {int freq; int wbd_gain_val; } ;
struct dib0070_state {int wbd_gain_current; int * wbd_offset_3_3; TYPE_1__* cfg; } ;
struct TYPE_3__ {struct dib0070_wbd_gain_cfg* wbd_gain; } ;



u16 FUNC_0(struct dvb_frontend *VAR_0)
{
 struct dib0070_state *VAR_1 = VAR_0->tuner_priv;
 const struct dib0070_wbd_gain_cfg *VAR_2 = VAR_1->cfg->wbd_gain;
 u32 VAR_3 = VAR_0->dtv_property_cache.frequency/1000;

 if (VAR_2 != ((void*)0)) {
  while (VAR_3/1000 > VAR_2->freq)
   VAR_2++;
  VAR_1->wbd_gain_current = VAR_2->wbd_gain_val;
 } else
  VAR_1->wbd_gain_current = 6;

 return VAR_1->wbd_offset_3_3[VAR_1->wbd_gain_current - 6];
}
