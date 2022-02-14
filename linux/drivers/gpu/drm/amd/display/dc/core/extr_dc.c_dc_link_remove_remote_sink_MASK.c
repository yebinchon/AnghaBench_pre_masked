
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_sink {int dummy; } ;
struct dc_link {int sink_count; struct dc_sink** remote_sinks; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct dc_sink*) ;

void FUNC_2(struct dc_link *VAR_0, struct dc_sink *VAR_1)
{
 int VAR_2;

 if (!VAR_0->sink_count) {
  FUNC_0();
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->sink_count; VAR_2++) {
  if (VAR_0->remote_sinks[VAR_2] == VAR_1) {
   FUNC_1(VAR_1);
   VAR_0->remote_sinks[VAR_2] = ((void*)0);


   while (VAR_2 < VAR_0->sink_count - 1) {
    VAR_0->remote_sinks[VAR_2] = VAR_0->remote_sinks[VAR_2+1];
    VAR_2++;
   }
   VAR_0->remote_sinks[VAR_2] = ((void*)0);
   VAR_0->sink_count--;
   return;
  }
 }
}
