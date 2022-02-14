
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend_tune_settings {int min_delay_ms; int step_size; scalar_t__ max_drift; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
        struct dvb_frontend_tune_settings *VAR_1)
{
 FUNC_0("\n");

 VAR_1->min_delay_ms = 400;
 VAR_1->step_size = 250000;
 VAR_1->max_drift = 0;
 return 0;
}
