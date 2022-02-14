
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct m88rs2000_state {int dummy; } ;
struct dvb_frontend {struct m88rs2000_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct m88rs2000_state*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1, u32 VAR_2)
{
 struct m88rs2000_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;
 u64 VAR_5;
 u32 VAR_6;
 u8 VAR_7[3];

 if ((VAR_2 < 1000000) || (VAR_2 > 45000000))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_2 / 1000;
 VAR_5 *= 1 << 24;

 FUNC_1(VAR_5, VAR_6);

 VAR_7[0] = (u8) (VAR_5 >> 16) & 0xff;
 VAR_7[1] = (u8) (VAR_5 >> 8) & 0xff;
 VAR_7[2] = (u8) VAR_5 & 0xff;

 VAR_4 = FUNC_3(VAR_3, 0x93, VAR_7[2]);
 VAR_4 |= FUNC_3(VAR_3, 0x94, VAR_7[1]);
 VAR_4 |= FUNC_3(VAR_3, 0x95, VAR_7[0]);

 if (VAR_2 > 10000000)
  VAR_4 |= FUNC_3(VAR_3, 0xa0, 0x20);
 else
  VAR_4 |= FUNC_3(VAR_3, 0xa0, 0x60);

 VAR_4 |= FUNC_3(VAR_3, 0xa1, 0xe0);

 if (VAR_2 > 12000000)
  VAR_4 |= FUNC_3(VAR_3, 0xa3, 0x20);
 else if (VAR_2 > 2800000)
  VAR_4 |= FUNC_3(VAR_3, 0xa3, 0x98);
 else
  VAR_4 |= FUNC_3(VAR_3, 0xa3, 0x90);

 FUNC_0("m88rs2000: m88rs2000_set_symbolrate\n");
 return VAR_4;
}
