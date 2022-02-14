
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_state {int dummy; } ;
struct dc_link {TYPE_1__* local_sink; } ;
struct dc {int link_count; struct dc_link** links; } ;
struct TYPE_2__ {scalar_t__ sink_signal; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct dc_link *FUNC_0(
  struct dc *VAR_1,
  struct dc_state *VAR_2)
{
 int VAR_3;
 struct dc_link *VAR_4 = ((void*)0);


 for (VAR_3 = 0; VAR_3 < VAR_1->link_count; VAR_3++) {
  if (VAR_1->links[VAR_3]->local_sink &&
   VAR_1->links[VAR_3]->local_sink->sink_signal == VAR_0) {
   VAR_4 = VAR_1->links[VAR_3];
   break;
  }
 }

 return VAR_4;
}
