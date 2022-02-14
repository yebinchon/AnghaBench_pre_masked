
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_link {scalar_t__ type; TYPE_1__* local_sink; int connector_signal; TYPE_1__** remote_sinks; } ;
struct TYPE_2__ {int sink_signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dc_link*,int ) ;
 int FUNC_1 (struct dc_link*,int ) ;
 int FUNC_2 (struct dc_link*,int) ;

__attribute__((used)) static void FUNC_3(struct dc_link *VAR_4, bool VAR_5)
{
 if (VAR_5 == 0 &&
  VAR_4->type == VAR_2) {

  FUNC_1(VAR_4, VAR_4->connector_signal);

  VAR_4->type = VAR_3;
  VAR_4->local_sink = VAR_4->remote_sinks[0];
  VAR_4->local_sink->sink_signal = VAR_0;
 } else if (VAR_5 == 1 &&
   VAR_4->type == VAR_3 &&
   VAR_4->remote_sinks[0] != ((void*)0)) {

  FUNC_0(VAR_4, VAR_4->connector_signal);
  FUNC_2(VAR_4, 1);

  VAR_4->type = VAR_2;
  VAR_4->local_sink->sink_signal = VAR_1;
 }
}
