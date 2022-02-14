
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int release; } ;
struct TYPE_4__ {int release; } ;
struct TYPE_6__ {TYPE_2__ analog_ops; TYPE_1__ tuner_ops; int release_sec; } ;
struct dvb_frontend {TYPE_3__ ops; } ;


 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*) ;

void FUNC_2(struct dvb_frontend *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->ops.release_sec);
 FUNC_0(VAR_0, VAR_0->ops.tuner_ops.release);
 FUNC_0(VAR_0, VAR_0->ops.analog_ops.release);
 FUNC_1(VAR_0);
}
