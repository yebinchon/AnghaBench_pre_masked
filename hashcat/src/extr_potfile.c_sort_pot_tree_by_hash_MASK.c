
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * hashconfig; TYPE_1__* nodes; } ;
typedef TYPE_2__ pot_tree_entry_t ;
typedef int hashconfig_t ;
typedef int hash_t ;
struct TYPE_3__ {scalar_t__ hash_buf; } ;


 int FUNC_0 (int const*,int const*,int *) ;

int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const pot_tree_entry_t *VAR_2 = (const pot_tree_entry_t *) VAR_0;
  const pot_tree_entry_t *VAR_3 = (const pot_tree_entry_t *) VAR_1;

  const hash_t *VAR_4 = (const hash_t *) VAR_2->nodes->hash_buf;
  const hash_t *VAR_5 = (const hash_t *) VAR_3->nodes->hash_buf;

  hashconfig_t *VAR_6 = VAR_2->hashconfig;

  return FUNC_0 (VAR_4, VAR_5, VAR_6);
}
