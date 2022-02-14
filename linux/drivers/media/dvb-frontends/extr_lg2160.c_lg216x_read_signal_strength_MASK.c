
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lg216x_state {int snr; } ;
struct TYPE_2__ {int (* read_snr ) (struct dvb_frontend*,int*) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct lg216x_state* demodulator_priv; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0,
           u16 *VAR_1)
{
 *VAR_1 = 0;
 return 0;

}
