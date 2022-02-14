
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







__attribute__((used)) static u16 FUNC_0(struct dib8000_state *VAR_0)
{
 u16 VAR_1;
 switch (VAR_0->fe[0]->dtv_property_cache.transmission_mode) {
 case 131:
  VAR_1 = 1;
  break;
 case 130:
  VAR_1 = 2;
  break;
 default:
 case 128:
 case 129:
  VAR_1 = 3;
  break;
 }
 return VAR_1;
}
