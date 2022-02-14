
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash_category; scalar_t__ hash_mode; scalar_t__ hash_name; } ;
typedef TYPE_1__ usage_sort_t ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const usage_sort_t *VAR_2 = (const usage_sort_t *) VAR_0;
  const usage_sort_t *VAR_3 = (const usage_sort_t *) VAR_1;

  if (VAR_2->hash_category > VAR_3->hash_category) return 1;
  if (VAR_2->hash_category < VAR_3->hash_category) return -1;

  const int VAR_4 = FUNC_0 (VAR_2->hash_name + 1, VAR_3->hash_name + 1, 15);

  if (VAR_4 > 0) return 1;
  if (VAR_4 < 0) return -1;

  if (VAR_2->hash_mode > VAR_3->hash_mode) return 1;
  if (VAR_2->hash_mode < VAR_3->hash_mode) return -1;

  return 0;
}
