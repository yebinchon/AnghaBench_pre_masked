
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dtv_frontend_properties {scalar_t__ symbol_rate; int frequency; } ;
struct dvb_frontend {struct cx24123_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct cx24123_state {int pllarg; int bandselectarg; int FILTune; int VGAarg; int VCAarg; } ;
struct cx24123_bandselect_val {int VCOdivider; scalar_t__ symbolrate_low; scalar_t__ symbolrate_high; int freq_low; int freq_high; int progdata; int FILTune; int VGAprogdata; int VCAprogdata; } ;
struct cx24123_AGC_val {int VCOdivider; scalar_t__ symbolrate_low; scalar_t__ symbolrate_high; int freq_low; int freq_high; int progdata; int FILTune; int VGAprogdata; int VCAprogdata; } ;


 int FUNC_0 (struct cx24123_bandselect_val*) ;
 int VAR_0 ;
 struct cx24123_bandselect_val* VAR_1 ;
 struct cx24123_bandselect_val* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct cx24123_state *VAR_6 = VAR_4->demodulator_priv;
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 2;
 int VAR_12 = 0;
 int VAR_13 = FUNC_0(VAR_2);
 struct cx24123_bandselect_val *VAR_14 = ((void*)0);
 struct cx24123_AGC_val *VAR_15 = ((void*)0);


 VAR_6->VCAarg = VAR_1[0].VCAprogdata;
 VAR_6->VGAarg = VAR_1[0].VGAprogdata;
 VAR_6->bandselectarg = VAR_2[0].progdata;
 VAR_9 = VAR_2[0].VCOdivider;



 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++) {
  VAR_15 = &VAR_1[VAR_10];
  if ((VAR_15->symbolrate_low <= VAR_5->symbol_rate) &&
      (VAR_15->symbolrate_high >= VAR_5->symbol_rate)) {
   VAR_6->VCAarg = VAR_15->VCAprogdata;
   VAR_6->VGAarg = VAR_15->VGAprogdata;
   VAR_6->FILTune = VAR_15->FILTune;
  }
 }


 if (VAR_3 < 1 || VAR_3 > VAR_13) {
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
   VAR_14 = &VAR_2[VAR_10];
   if ((VAR_14->freq_low <= VAR_5->frequency) &&
    (VAR_14->freq_high >= VAR_5->frequency))
    VAR_12 = VAR_10;
  }
 } else
  VAR_12 = VAR_3 - 1;

 VAR_6->bandselectarg = VAR_2[VAR_12].progdata;
 VAR_9 = VAR_2[VAR_12].VCOdivider;


 if (VAR_5->frequency < (VAR_2[VAR_12].freq_low +
  VAR_2[VAR_12].freq_high) / 2)
  VAR_11 = 0x01;
 else
  VAR_11 = 0x02;




 VAR_7 = (((VAR_5->frequency * VAR_9 * 10) /
  (2 * VAR_0 / 1000)) / 32) & 0x1ff;
 VAR_8 = (((VAR_5->frequency * VAR_9 * 10) /
  (2 * VAR_0 / 1000)) % 32) & 0x1f;

 if (VAR_8 == 0 && VAR_7 > 0)
  VAR_7--;



 VAR_6->pllarg = (3 << 19) | (3 << 17) | (1 << 16) |
  (VAR_11 << 14) | (VAR_7 << 5) | VAR_8;

 return 0;
}
