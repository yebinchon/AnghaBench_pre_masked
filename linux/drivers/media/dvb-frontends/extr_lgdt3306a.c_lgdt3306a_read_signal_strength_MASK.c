
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct lgdt3306a_state {int current_modulation; int snr; } ;
struct TYPE_2__ {int (* read_snr ) (struct dvb_frontend*,scalar_t__*) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct lgdt3306a_state* demodulator_priv; } ;


 int VAR_0 ;




 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_3 (struct dvb_frontend*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1,
      u16 *VAR_2)
{



 struct lgdt3306a_state *VAR_3 = VAR_1->demodulator_priv;
 u8 VAR_4;
 u16 VAR_5;
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 *VAR_2 = 0;

 switch (VAR_3->current_modulation) {
 case 128:
   VAR_7 = 1600;
   break;
 case 130:
 case 131:
 case 129:

  VAR_6 = FUNC_2(VAR_3, 0x00a6, &VAR_4);
  if (FUNC_1(VAR_6))
   goto fail;

  if(VAR_4 & 0x04)
   VAR_7 = 2800;
  else
   VAR_7 = 2200;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = VAR_1->ops.read_snr(VAR_1, &VAR_5);
 if (FUNC_1(VAR_6))
  goto fail;

 if (VAR_3->snr <= (VAR_7 - 100))
  VAR_8 = 0;
 else if (VAR_3->snr <= VAR_7)
  VAR_8 = (0xffff * 65) / 100;
 else {
  VAR_8 = VAR_3->snr - VAR_7;
  VAR_8 /= 50;
  VAR_8 += 78;
  if (VAR_8 > 100)
   VAR_8 = 100;
  VAR_8 = (0xffff * VAR_8) / 100;
 }
 *VAR_2 = (u16)VAR_8;
 FUNC_0("strength=%u\n", *VAR_2);

fail:
 return VAR_6;
}
