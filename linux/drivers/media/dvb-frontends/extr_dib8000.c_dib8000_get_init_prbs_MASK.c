
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dib8000_state {TYPE_2__** fe; } ;
struct TYPE_3__ {int transmission_mode; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;





 int FUNC_0 (char*,int,int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static u16 FUNC_1(struct dib8000_state *VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = (VAR_4 / 3) + 1;
 FUNC_0("sub_channel_prbs_group = %d , subchannel =%d prbs = 0x%04x\n", VAR_5, VAR_4, VAR_2[VAR_5]);

 switch (VAR_3->fe[0]->dtv_property_cache.transmission_mode) {
 case 130:
   return VAR_0[VAR_5];
 case 129:
   return VAR_1[VAR_5];
 default:
 case 128:
   return VAR_2[VAR_5];
 }
}
