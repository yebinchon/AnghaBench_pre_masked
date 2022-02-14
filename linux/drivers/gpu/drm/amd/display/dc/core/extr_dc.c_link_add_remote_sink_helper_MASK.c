
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_sink {int dummy; } ;
struct dc_link {size_t sink_count; struct dc_sink** remote_sinks; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (struct dc_sink*) ;

__attribute__((used)) static bool FUNC_2(struct dc_link *VAR_1, struct dc_sink *VAR_2)
{
 if (VAR_1->sink_count >= VAR_0) {
  FUNC_0();
  return 0;
 }

 FUNC_1(VAR_2);

 VAR_1->remote_sinks[VAR_1->sink_count] = VAR_2;
 VAR_1->sink_count++;

 return 1;
}
