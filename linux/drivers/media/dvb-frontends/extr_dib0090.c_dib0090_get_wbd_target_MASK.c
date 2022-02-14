
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_wbd_slope {int max_freq; int wbd_gain; int offset_hot; int offset_cold; scalar_t__ slope_cold; scalar_t__ slope_hot; } ;
struct dib0090_state {int temperature; int wbdmux; int wbd_offset; scalar_t__ wbd_target; struct dib0090_wbd_slope* current_wbd_table; TYPE_2__* fe; } ;
typedef int s32 ;
struct TYPE_3__ {int frequency; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;


 scalar_t__ FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;
 int FUNC_2 (char*,int) ;

u16 FUNC_3(struct dvb_frontend *VAR_0)
{
 struct dib0090_state *VAR_1 = VAR_0->tuner_priv;
 u32 VAR_2 = VAR_1->fe->dtv_property_cache.frequency / 1000000;
 s32 VAR_3 = VAR_1->temperature;
 s32 VAR_4, VAR_5;
 const struct dib0090_wbd_slope *VAR_6 = VAR_1->current_wbd_table;

 while (VAR_2 > VAR_6->max_freq)
  VAR_6++;

 FUNC_2("using wbd-table-entry with max freq %d\n", VAR_6->max_freq);

 if (VAR_3 < 0)
  VAR_3 = 0;
 if (VAR_3 > 128)
  VAR_3 = 128;

 VAR_1->wbdmux &= ~(7 << 13);
 if (VAR_6->wbd_gain != 0)
  VAR_1->wbdmux |= (VAR_6->wbd_gain << 13);
 else
  VAR_1->wbdmux |= (4 << 13);

 FUNC_1(VAR_1, 0x10, VAR_1->wbdmux);

 VAR_4 = VAR_6->offset_hot - (((u32) VAR_6->slope_hot * VAR_2) >> 6);
 VAR_5 = VAR_6->offset_cold - (((u32) VAR_6->slope_cold * VAR_2) >> 6);

 VAR_5 += ((VAR_4 - VAR_5) * VAR_3) >> 7;

 VAR_1->wbd_target = FUNC_0(VAR_1, VAR_1->wbd_offset + VAR_5);
 FUNC_2("wbd-target: %d dB\n", (u32) VAR_1->wbd_target);
 FUNC_2("wbd offset applied is %d\n", VAR_5);

 return VAR_1->wbd_offset + VAR_5;
}
