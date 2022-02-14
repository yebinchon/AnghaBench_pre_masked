
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_encoder {int preferred_engine; int output_signals; int transmitter; int connector; int hpd_source; int id; int ctx; int * funcs; } ;
struct encoder_init_data {int transmitter; int connector; int hpd_source; int encoder; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool FUNC_0(
 struct link_encoder *VAR_3, const struct encoder_init_data *VAR_4)
{
 VAR_3->funcs = &VAR_2;
 VAR_3->ctx = VAR_4->ctx;
 VAR_3->id = VAR_4->encoder;

 VAR_3->hpd_source = VAR_4->hpd_source;
 VAR_3->connector = VAR_4->connector;

 VAR_3->transmitter = VAR_4->transmitter;

 VAR_3->output_signals = VAR_1;

 VAR_3->preferred_engine = VAR_0;

 return 1;
}
