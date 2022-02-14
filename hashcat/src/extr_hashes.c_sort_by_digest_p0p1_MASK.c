
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {size_t dgst_pos0; size_t dgst_pos1; size_t dgst_pos2; size_t dgst_pos3; } ;
typedef TYPE_1__ hashconfig_t ;



int FUNC_0 (const void *VAR_0, const void *VAR_1, void *VAR_2)
{
  const u32 *VAR_3 = (const u32 *) VAR_0;
  const u32 *VAR_4 = (const u32 *) VAR_1;

  hashconfig_t *VAR_5 = (hashconfig_t *) VAR_2;

  const u32 VAR_6 = VAR_5->dgst_pos0;
  const u32 VAR_7 = VAR_5->dgst_pos1;
  const u32 VAR_8 = VAR_5->dgst_pos2;
  const u32 VAR_9 = VAR_5->dgst_pos3;

  if (VAR_3[VAR_9] > VAR_4[VAR_9]) return 1;
  if (VAR_3[VAR_9] < VAR_4[VAR_9]) return -1;
  if (VAR_3[VAR_8] > VAR_4[VAR_8]) return 1;
  if (VAR_3[VAR_8] < VAR_4[VAR_8]) return -1;
  if (VAR_3[VAR_7] > VAR_4[VAR_7]) return 1;
  if (VAR_3[VAR_7] < VAR_4[VAR_7]) return -1;
  if (VAR_3[VAR_6] > VAR_4[VAR_6]) return 1;
  if (VAR_3[VAR_6] < VAR_4[VAR_6]) return -1;

  return 0;
}
