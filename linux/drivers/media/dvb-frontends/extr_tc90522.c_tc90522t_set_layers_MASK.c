
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct reg_val {int reg; int val; } ;
struct TYPE_2__ {int isdbt_layer_enabled; } ;
struct dvb_frontend {int demodulator_priv; TYPE_1__ dtv_property_cache; } ;


 int FUNC_0 (int ,struct reg_val*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct reg_val VAR_1;
 u8 VAR_2;

 VAR_2 = ~VAR_0->dtv_property_cache.isdbt_layer_enabled & 0x07;
 VAR_2 = (VAR_2 & 0x01) << 2 | (VAR_2 & 0x02) | (VAR_2 & 0x04) >> 2;
 VAR_1.reg = 0x71;
 VAR_1.val = VAR_2;
 return FUNC_0(VAR_0->demodulator_priv, &VAR_1, 1);
}
