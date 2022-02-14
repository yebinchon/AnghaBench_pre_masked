
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buckets; int ** table; } ;
typedef TYPE_1__ hashtable_t ;
typedef int hashchain_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static hashchain_t *FUNC_1 (hashtable_t *VAR_0, int VAR_1)
{
  VAR_1 = (FUNC_0(VAR_1) % VAR_0->buckets);
  return (VAR_0->table[VAR_1]);
}
