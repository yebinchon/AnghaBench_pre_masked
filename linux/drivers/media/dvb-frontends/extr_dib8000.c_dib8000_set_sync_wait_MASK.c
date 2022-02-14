
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dtv_frontend_properties {int transmission_mode; int guard_interval; } ;
struct TYPE_3__ {int diversity_delay; } ;
struct dib8000_state {TYPE_1__ cfg; TYPE_2__** fe; } ;
struct TYPE_4__ {struct dtv_frontend_properties dtv_property_cache; } ;





 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib8000_state *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->fe[0]->dtv_property_cache;
 u16 VAR_2 = 64;


 switch (VAR_1->transmission_mode) {
 case 128:
   VAR_2 = 256;
   break;
 case 129:
   VAR_2 = 128;
   break;
 default:
 case 130:
   VAR_2 = 64;
   break;
 }

 if (VAR_0->cfg.diversity_delay == 0)
  VAR_2 = (VAR_2 * (1 << (VAR_1->guard_interval)) * 3) / 2 + 48;
 else
  VAR_2 = (VAR_2 * (1 << (VAR_1->guard_interval)) * 3) / 2 + VAR_0->cfg.diversity_delay;

 FUNC_1(VAR_0, 273, (FUNC_0(VAR_0, 273) & 0x000f) | (VAR_2 << 4));
}
