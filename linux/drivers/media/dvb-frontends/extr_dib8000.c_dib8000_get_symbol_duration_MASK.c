
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct dtv_frontend_properties {int transmission_mode; int bandwidth_hz; } ;
struct dib8000_state {TYPE_1__** fe; } ;
struct TYPE_2__ {struct dtv_frontend_properties dtv_property_cache; } ;


 int* VAR_0 ;





__attribute__((used)) static u32 FUNC_0(struct dib8000_state *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->fe[0]->dtv_property_cache;
 u16 VAR_3;

 switch (VAR_2->transmission_mode) {
 case 131:
   VAR_3 = 0;
   break;
 case 130:
   VAR_3 = 2;
   break;
 default:
 case 128:
 case 129:
   VAR_3 = 1;
   break;
 }

 return (VAR_0[VAR_3] / (VAR_2->bandwidth_hz / 1000)) + 1;
}
