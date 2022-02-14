
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ val; } ;
typedef TYPE_1__ hcstat_table_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const hcstat_table_t *VAR_2 = (const hcstat_table_t *) VAR_0;
  const hcstat_table_t *VAR_3 = (const hcstat_table_t *) VAR_1;

  const u64 VAR_4 = VAR_2->val;
  const u64 VAR_5 = VAR_3->val;

  if (VAR_4 < VAR_5) return 1;
  if (VAR_4 > VAR_5) return -1;

  return 0;
}
