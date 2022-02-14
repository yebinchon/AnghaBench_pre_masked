
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct dtv_frontend_properties {int isdbt_sb_mode; TYPE_2__* layer; } ;
struct dib8000_state {TYPE_1__** fe; } ;
struct TYPE_4__ {int modulation; int fec; int segment_count; int interleaving; } ;
struct TYPE_3__ {struct dtv_frontend_properties dtv_property_cache; } ;
 int FUNC_0 (struct dib8000_state*,int,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct dib8000_state *VAR_0, u8 VAR_1, u16 VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 struct dtv_frontend_properties *VAR_6 = &VAR_0->fe[0]->dtv_property_cache;

 switch (VAR_6->layer[VAR_1].modulation) {
 case 136:
   VAR_4 = 0;
   break;
 case 128:
   VAR_4 = 1;
   break;
 case 130:
   VAR_4 = 2;
   break;
 case 129:
 default:
   VAR_4 = 3;
   break;
 }

 switch (VAR_6->layer[VAR_1].fec) {
 case 135:
   VAR_3 = 1;
   break;
 case 134:
   VAR_3 = 2;
   break;
 case 133:
   VAR_3 = 3;
   break;
 case 132:
   VAR_3 = 5;
   break;
 case 131:
 default:
   VAR_3 = 7;
   break;
 }

 VAR_5 = FUNC_1(VAR_6->layer[VAR_1].interleaving);
 if (VAR_5 > 3 && !(VAR_5 == 4 && VAR_6->isdbt_sb_mode == 1))
  VAR_5 = 0;

 FUNC_0(VAR_0, 2 + VAR_1, (VAR_4 << 10) | ((VAR_6->layer[VAR_1].segment_count & 0xf) << 6) | (VAR_3 << 3) | VAR_5);
 if (VAR_6->layer[VAR_1].segment_count > 0) {
  switch (VAR_2) {
  case 136:
  case 128:
    if (VAR_6->layer[VAR_1].modulation == 130 || VAR_6->layer[VAR_1].modulation == 129)
     VAR_2 = VAR_6->layer[VAR_1].modulation;
    break;
  case 130:
    if (VAR_6->layer[VAR_1].modulation == 129)
     VAR_2 = VAR_6->layer[VAR_1].modulation;
    break;
  }
 }

 return VAR_2;
}
