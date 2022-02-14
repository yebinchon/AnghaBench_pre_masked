
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct TYPE_2__ {int LDBER0; int LDBER1; int LDBER2; } ;
struct bcm3510_state {TYPE_1__ status2; } ;


 int FUNC_0 (struct bcm3510_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, u32* VAR_1)
{
 struct bcm3510_state* VAR_2 = VAR_0->demodulator_priv;
 FUNC_0(VAR_2);

 *VAR_1 = (VAR_2->status2.LDBER0 << 16) | (VAR_2->status2.LDBER1 << 8) | VAR_2->status2.LDBER2;
 return 0;
}
