
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt312_state {int dummy; } ;
struct dvb_frontend {struct mt312_state* demodulator_priv; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (struct mt312_state*,int ,int*) ;
 int FUNC_1 (struct mt312_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3,
     const enum fe_sec_tone_mode VAR_4)
{
 struct mt312_state *VAR_5 = VAR_3->demodulator_priv;
 const u8 VAR_6[2] = { 0x01, 0x00 };

 int VAR_7;
 u8 VAR_8;

 if (VAR_4 > VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0,
        (VAR_8 & 0x40) | VAR_6[VAR_4]);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
