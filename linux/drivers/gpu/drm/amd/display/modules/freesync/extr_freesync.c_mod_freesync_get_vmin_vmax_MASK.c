
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mod_freesync {int dummy; } ;
struct TYPE_2__ {unsigned int v_total_min; unsigned int v_total_max; } ;
struct dc_stream_state {TYPE_1__ adjust; } ;



bool FUNC_0(struct mod_freesync *VAR_0,
  const struct dc_stream_state *VAR_1,
  unsigned int *VAR_2,
  unsigned int *VAR_3)
{
 *VAR_2 = VAR_1->adjust.v_total_min;
 *VAR_3 = VAR_1->adjust.v_total_max;

 return 1;
}
