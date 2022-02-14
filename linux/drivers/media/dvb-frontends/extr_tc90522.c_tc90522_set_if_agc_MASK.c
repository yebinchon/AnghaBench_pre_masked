
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc90522_state {int dummy; } ;
struct reg_val {int member_0; int member_1; int val; } ;
struct TYPE_2__ {scalar_t__* delsys; } ;
struct dvb_frontend {TYPE_1__ ops; struct tc90522_state* demodulator_priv; } ;


 int FUNC_0 (struct reg_val*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tc90522_state*,struct reg_val*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, bool VAR_2)
{
 struct reg_val VAR_3[] = {
  { 0x0a, 0x00 },
  { 0x10, 0x30 },
  { 0x11, 0x00 },
  { 0x03, 0x01 },
 };
 struct reg_val VAR_4[] = {
  { 0x25, 0x00 },
  { 0x23, 0x4c },
  { 0x01, 0x40 },
 };
 struct tc90522_state *VAR_5;
 struct reg_val *VAR_6;
 int VAR_7;

 VAR_5 = VAR_1->demodulator_priv;
 if (VAR_1->ops.delsys[0] == VAR_0) {
  VAR_3[0].val = VAR_2 ? 0xff : 0x00;
  VAR_3[1].val |= 0x80;
  VAR_3[1].val |= VAR_2 ? 0x01 : 0x00;
  VAR_3[2].val |= VAR_2 ? 0x40 : 0x00;
  VAR_6 = VAR_3;
  VAR_7 = FUNC_0(VAR_3);
 } else {
  VAR_4[0].val = VAR_2 ? 0x40 : 0x00;
  VAR_4[1].val |= VAR_2 ? 0x00 : 0x01;
  VAR_6 = VAR_4;
  VAR_7 = FUNC_0(VAR_4);
 }
 return FUNC_1(VAR_5, VAR_6, VAR_7);
}
