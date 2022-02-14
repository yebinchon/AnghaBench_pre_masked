
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reg_val {int member_0; int member_1; int val; } ;
struct TYPE_2__ {int stream_id; } ;
struct dvb_frontend {int demodulator_priv; TYPE_1__ dtv_property_cache; } ;


 int FUNC_0 (struct reg_val*) ;
 int FUNC_1 (int ,struct reg_val*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct reg_val VAR_1[] = {
  { 0x8f, 00 },
  { 0x90, 00 }
 };

 VAR_1[0].val = (VAR_0->dtv_property_cache.stream_id & 0xff00) >> 8;
 VAR_1[1].val = VAR_0->dtv_property_cache.stream_id & 0xff;
 return FUNC_1(VAR_0->demodulator_priv, VAR_1, FUNC_0(VAR_1));
}
