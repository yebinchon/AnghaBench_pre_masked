
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_4__ {int if_drives; } ;
struct TYPE_5__ {TYPE_1__ cfg; } ;
struct TYPE_6__ {TYPE_2__ d9; } ;
struct dib9000_state {int reg_offs; TYPE_3__ chip; int i2c_master; int i2c; int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dib9000_state*,int) ;
 int FUNC_2 (struct dib9000_state*,int ) ;
 int FUNC_3 (struct dib9000_state*,int,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_3)
{
 struct dib9000_state *VAR_4 = VAR_3->demodulator_priv;

 FUNC_3(VAR_4, 1817, 0x0003);

 FUNC_3(VAR_4, 1227, 1);
 FUNC_3(VAR_4, 1227, 0);

 switch ((VAR_4->revision = FUNC_0(&VAR_4->i2c))) {
 case 0x4003:
 case 0x4004:
 case 0x4005:
  VAR_4->reg_offs = 1;
  break;
 default:
  return -VAR_2;
 }


 FUNC_4(&VAR_4->i2c_master);

 FUNC_2(VAR_4, VAR_0);


 FUNC_3(VAR_4, 1794, FUNC_1(VAR_4, 1794) & ~(1 << 1));
 FUNC_3(VAR_4, 1796, 0);
 FUNC_3(VAR_4, 1805, 0x805);


 FUNC_3(VAR_4, 898, 0xffff);
 FUNC_3(VAR_4, 899, 0xffff);
 FUNC_3(VAR_4, 900, 0x0001);
 FUNC_3(VAR_4, 901, 0xff19);
 FUNC_3(VAR_4, 902, 0x003c);

 FUNC_3(VAR_4, 898, 0);
 FUNC_3(VAR_4, 899, 0);
 FUNC_3(VAR_4, 900, 0);
 FUNC_3(VAR_4, 901, 0);
 FUNC_3(VAR_4, 902, 0);

 FUNC_3(VAR_4, 911, VAR_4->chip.d9.cfg.if_drives);

 FUNC_2(VAR_4, VAR_1);

 return 0;
}
