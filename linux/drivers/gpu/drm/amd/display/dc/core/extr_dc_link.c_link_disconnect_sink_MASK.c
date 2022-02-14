
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link {scalar_t__ dpcd_sink_count; int * local_sink; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dc_link *VAR_0)
{
 if (VAR_0->local_sink) {
  FUNC_0(VAR_0->local_sink);
  VAR_0->local_sink = ((void*)0);
 }

 VAR_0->dpcd_sink_count = 0;
}
