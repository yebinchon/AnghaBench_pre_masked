
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_4__ {int output_mpeg2_in_188_bytes; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
struct TYPE_6__ {TYPE_2__ d9; } ;
struct dib9000_state {TYPE_3__ chip; int * fe; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int ,int*,int) ;
 int FUNC_1 (struct dib9000_state*,int) ;
 int FUNC_2 (struct dib9000_state*,int,int) ;
 int FUNC_3 (char*,struct dvb_frontend*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_2, int VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_2->demodulator_priv;
 u16 VAR_5, VAR_6;

 FUNC_3("setting output mode for demod %p to %d\n", VAR_2, VAR_3);

 switch (VAR_3) {
 case 129:
  VAR_5 = (1 << 10);
  break;
 case 130:
  VAR_5 = (1 << 10) | (1 << 6);
  break;
 case 128:
  VAR_5 = (1 << 10) | (2 << 6) | (0 << 1);
  break;
 case 133:
  VAR_5 = (1 << 10) | (4 << 6);
  break;
 case 131:
  VAR_5 = (1 << 10) | (5 << 6);
  break;
 case 132:
  VAR_5 = 0;
  break;
 default:
  FUNC_3("Unhandled output_mode passed to be set for demod %p\n", &VAR_4->fe[0]);
  return -VAR_0;
 }

 FUNC_2(VAR_4, 1795, VAR_5);

 switch (VAR_3) {
 case 129:
 case 130:
 case 128:
 case 131:
  VAR_6 = (FUNC_1(VAR_4, 295) & 0x0010) | (1 << 1);
  if (VAR_4->chip.d9.cfg.output_mpeg2_in_188_bytes)
   VAR_6 |= (1 << 5);
  FUNC_2(VAR_4, 295, VAR_6);
  break;
 }

 VAR_5 = FUNC_4(VAR_3);
 return FUNC_0(VAR_4, VAR_1, &VAR_5, 1);
}
