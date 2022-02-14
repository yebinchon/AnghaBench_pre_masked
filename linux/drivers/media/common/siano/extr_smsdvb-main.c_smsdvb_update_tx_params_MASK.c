
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {int modulation; int hierarchy; void* code_rate_LP; void* code_rate_HP; int guard_interval; int transmission_mode; int bandwidth_hz; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct smsdvb_client_t {int fe_status; struct dvb_frontend frontend; } ;
struct sms_tx_stats {int constellation; int hierarchy; int lp_code_rate; int code_rate; int guard_interval; int transmission_mode; int bandwidth; int is_demod_locked; int frequency; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct smsdvb_client_t *VAR_0,
        struct sms_tx_stats *VAR_1)
{
 struct dvb_frontend *VAR_2 = &VAR_0->frontend;
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;

 VAR_3->frequency = VAR_1->frequency;
 VAR_0->fe_status = FUNC_6(VAR_1->is_demod_locked, 0);
 VAR_3->bandwidth_hz = FUNC_0(VAR_1->bandwidth);
 VAR_3->transmission_mode = FUNC_4(VAR_1->transmission_mode);
 VAR_3->guard_interval = FUNC_2(VAR_1->guard_interval);
 VAR_3->code_rate_HP = FUNC_1(VAR_1->code_rate);
 VAR_3->code_rate_LP = FUNC_1(VAR_1->lp_code_rate);
 VAR_3->hierarchy = FUNC_3(VAR_1->hierarchy);
 VAR_3->modulation = FUNC_5(VAR_1->constellation);
}
