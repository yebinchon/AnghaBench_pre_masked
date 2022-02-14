
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_sink_init_data {int sink_signal; TYPE_1__* link; int member_0; } ;
struct dc_sink {int sink_signal; } ;
struct amdgpu_dm_connector {TYPE_1__* dc_link; } ;
struct TYPE_2__ {int connector_signal; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct dc_sink* FUNC_1 (struct dc_sink_init_data*) ;

__attribute__((used)) static struct dc_sink *
FUNC_2(struct amdgpu_dm_connector *VAR_1)
{
 struct dc_sink_init_data VAR_2 = { 0 };
 struct dc_sink *VAR_3 = ((void*)0);
 VAR_2.link = VAR_1->dc_link;
 VAR_2.sink_signal = VAR_1->dc_link->connector_signal;

 VAR_3 = FUNC_1(&VAR_2);
 if (!VAR_3) {
  FUNC_0("Failed to create sink!\n");
  return ((void*)0);
 }
 VAR_3->sink_signal = VAR_0;

 return VAR_3;
}
