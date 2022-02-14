
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dtv_frontend_properties {int guard_interval; int transmission_mode; TYPE_2__* layer; } ;
struct dib8000_state {TYPE_1__** fe; } ;
struct TYPE_4__ {int segment_count; int modulation; int fec; int interleaving; } ;
struct TYPE_3__ {struct dtv_frontend_properties dtv_property_cache; } ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dib8000_state *VAR_2 = VAR_0->demodulator_priv;
 struct dtv_frontend_properties *VAR_3 = &VAR_2->fe[0]->dtv_property_cache;
 int VAR_4, VAR_5, VAR_6;
 u64 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = 1, VAR_14, VAR_15;
 int VAR_16 = 0, VAR_17;

 if (VAR_1 >= 0) {
  VAR_4 = VAR_1;
  VAR_5 = VAR_1 + 1;
 } else {
  VAR_4 = 0;
  VAR_5 = 3;
 }

 switch (VAR_3->guard_interval) {
 case 135:
  VAR_11 = 4;
  break;
 case 134:
  VAR_11 = 8;
  break;
 case 137:
  VAR_11 = 16;
  break;
 default:
 case 136:
  VAR_11 = 32;
  break;
 }

 switch (VAR_3->transmission_mode) {
 case 130:
  VAR_17 = 4;
  break;
 case 129:
  VAR_17 = 2;
  break;
 default:
 case 128:
  VAR_17 = 1;
  break;
 }

 VAR_10 = 0;
 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
  VAR_15 = VAR_3->layer[VAR_6].segment_count;
  if (VAR_15 == 0 || VAR_15 > 13)
   continue;

  switch (VAR_3->layer[VAR_6].modulation) {
  case 143:
  case 131:
   VAR_14 = 2;
   break;
  case 133:
   VAR_14 = 4;
   break;
  default:
  case 132:
   VAR_14 = 6;
   break;
  }

  switch (VAR_3->layer[VAR_6].fec) {
  case 142:
   VAR_12 = 1;
   VAR_13 = 2;
   break;
  case 141:
   VAR_12 = 2;
   VAR_13 = 3;
   break;
  case 140:
   VAR_12 = 3;
   VAR_13 = 4;
   break;
  case 139:
   VAR_12 = 5;
   VAR_13 = 6;
   break;
  default:
  case 138:
   VAR_12 = 7;
   VAR_13 = 8;
   break;
  }

  VAR_16 = VAR_3->layer[VAR_6].interleaving;

  VAR_10 += VAR_14 * VAR_12 * VAR_17 * VAR_15 * 384;
 }


 if (!VAR_10)
  return 0;


 VAR_7 = VAR_13 * (1008 * 1562500L);
 VAR_8 = VAR_7;
 FUNC_0(VAR_8, VAR_11);
 VAR_7 = VAR_7 + VAR_8;
 VAR_7 += VAR_10 / 2;
 FUNC_0(VAR_7, VAR_10);

 VAR_9 = 1008 * 96 * VAR_16;
 VAR_7 += VAR_9 + VAR_9 / VAR_11;

 return VAR_7;
}
