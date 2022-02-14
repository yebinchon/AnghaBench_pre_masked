
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lgdt3305_state {int snr; } ;
struct TYPE_2__ {int (* read_snr ) (struct dvb_frontend*,int*) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct lgdt3305_state* demodulator_priv; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
      u16 *VAR_1)
{







 struct lgdt3305_state *VAR_2 = VAR_0->demodulator_priv;
 u16 VAR_3;
 int VAR_4;

 *VAR_1 = 0;

 VAR_4 = VAR_0->ops.read_snr(VAR_0, &VAR_3);
 if (FUNC_0(VAR_4))
  goto fail;


 if (VAR_2->snr >= 8960 * 0x10000)
  *VAR_1 = 0xffff;
 else
  *VAR_1 = VAR_2->snr / 8960;
fail:
 return VAR_4;
}
