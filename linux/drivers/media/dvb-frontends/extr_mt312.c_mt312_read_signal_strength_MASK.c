
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mt312_state {int dummy; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
typedef int s16 ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct mt312_state*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1,
          u16 *VAR_2)
{
 struct mt312_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;
 u8 VAR_5[3];
 u16 VAR_6;
 s16 VAR_7;

 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = (VAR_5[0] << 6) | (VAR_5[1] >> 2);
 VAR_7 = (s16) (((VAR_5[1] & 0x03) << 14) | VAR_5[2] << 6) >> 6;

 *VAR_2 = VAR_6;

 FUNC_0("agc=%08x err_db=%hd\n", VAR_6, VAR_7);

 return 0;
}
