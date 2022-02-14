
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct TYPE_3__ {int frequency_stepsize_hz; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct dvb_frontend {TYPE_2__ ops; } ;



int FUNC_0(struct dvb_frontend *VAR_0,
 struct dvb_frontend_tune_settings *VAR_1)
{
 VAR_1->min_delay_ms = 1500;
 VAR_1->step_size = VAR_0->ops.info.frequency_stepsize_hz * 2;
 VAR_1->max_drift = (VAR_0->ops.info.frequency_stepsize_hz * 2) + 1;

 return 0;
}
