
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct config_id_state {scalar_t__ target_id; int log_drv_count; scalar_t__* volumes; } ;



__attribute__((used)) static uint8_t
FUNC_0(struct config_id_state *VAR_0)
{
 int VAR_1;


 VAR_0->target_id++;


 for (VAR_1 = 0; VAR_1 < VAR_0->log_drv_count; VAR_1++)
  if (VAR_0->volumes[VAR_1] == VAR_0->target_id)
   VAR_0->target_id++;
 return (VAR_0->target_id);
}
