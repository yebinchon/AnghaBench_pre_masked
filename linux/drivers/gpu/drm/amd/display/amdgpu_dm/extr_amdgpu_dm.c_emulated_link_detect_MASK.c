
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_sink_capability {int signal; void* transaction_type; int member_0; } ;
struct dc_sink_init_data {int sink_signal; struct dc_link* link; int member_0; } ;
struct dc_sink {int dummy; } ;
struct dc_link {int connector_signal; struct dc_context* ctx; struct dc_sink* local_sink; int type; } ;
struct dc_context {int dummy; } ;
typedef enum dc_edid_status { ____Placeholder_dc_edid_status } dc_edid_status ;


 int FUNC_0 (char*,...) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 struct dc_sink* FUNC_1 (struct dc_sink_init_data*) ;
 int FUNC_2 (struct dc_sink*) ;
 int FUNC_3 (struct dc_context*,struct dc_link*,struct dc_sink*) ;

__attribute__((used)) static void FUNC_4(struct dc_link *VAR_5)
{
 struct dc_sink_init_data VAR_6 = { 0 };
 struct display_sink_capability VAR_7 = { 0 };
 enum dc_edid_status VAR_8;
 struct dc_context *VAR_9 = VAR_5->ctx;
 struct dc_sink *VAR_10 = ((void*)0);
 struct dc_sink *VAR_11 = ((void*)0);

 VAR_5->type = VAR_4;
 VAR_11 = VAR_5->local_sink;

 if (VAR_11 != ((void*)0))
  FUNC_2(VAR_11);

 switch (VAR_5->connector_signal) {
 case 129: {
  VAR_7.transaction_type = VAR_0;
  VAR_7.signal = 129;
  break;
 }

 case 131: {
  VAR_7.transaction_type = VAR_0;
  VAR_7.signal = 131;
  break;
 }

 case 132: {
  VAR_7.transaction_type = VAR_0;
  VAR_7.signal = 132;
  break;
 }

 case 128: {
  VAR_7.transaction_type = VAR_0;
  VAR_7.signal = 128;
  break;
 }

 case 130: {
  VAR_7.transaction_type =
   VAR_1;
  VAR_7.signal = 130;
  break;
 }

 case 133: {
  VAR_7.transaction_type =
   VAR_1;
  VAR_7.signal = VAR_3;
  break;
 }

 default:
  FUNC_0("Invalid connector type! signal:%d\n",
   VAR_5->connector_signal);
  return;
 }

 VAR_6.link = VAR_5;
 VAR_6.sink_signal = VAR_7.signal;

 VAR_10 = FUNC_1(&VAR_6);
 if (!VAR_10) {
  FUNC_0("Failed to create sink!\n");
  return;
 }


 VAR_5->local_sink = VAR_10;

 VAR_8 = FUNC_3(
   VAR_5->ctx,
   VAR_5,
   VAR_10);

 if (VAR_8 != VAR_2)
  FUNC_0("Failed to read EDID");

}
