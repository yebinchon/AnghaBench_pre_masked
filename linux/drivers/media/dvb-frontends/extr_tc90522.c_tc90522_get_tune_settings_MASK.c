
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; int max_drift; } ;
struct TYPE_2__ {scalar_t__* delsys; } ;
struct dvb_frontend {TYPE_1__ ops; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1,
 struct dvb_frontend_tune_settings *VAR_2)
{
 if (VAR_1->ops.delsys[0] == VAR_0) {
  VAR_2->min_delay_ms = 250;
  VAR_2->step_size = 1000;
  VAR_2->max_drift = VAR_2->step_size * 2;
 } else {
  VAR_2->min_delay_ms = 400;
  VAR_2->step_size = 142857;
  VAR_2->max_drift = VAR_2->step_size;
 }
 return 0;
}
