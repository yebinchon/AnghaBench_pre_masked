
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; } ;
typedef TYPE_1__ brain_server_attack_short_t ;



int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const brain_server_attack_short_t *VAR_2 = (const brain_server_attack_short_t *) VAR_0;
  const brain_server_attack_short_t *VAR_3 = (const brain_server_attack_short_t *) VAR_1;

  if (VAR_2->offset > VAR_3->offset) return 1;
  if (VAR_2->offset < VAR_3->offset) return -1;

  return 0;
}
