
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct TYPE_2__ {int SNR_EST0; int SNR_EST1; } ;
struct bcm3510_state {TYPE_1__ status1; } ;


 int FUNC_0 (struct bcm3510_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u16* VAR_1)
{
 struct bcm3510_state* VAR_2 = VAR_0->demodulator_priv;
 FUNC_0(VAR_2);

 *VAR_1 = VAR_2->status1.SNR_EST0*1000 + ((VAR_2->status1.SNR_EST1*1000) >> 8);
 return 0;
}
