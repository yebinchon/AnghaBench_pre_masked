
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct keep_mc_store {int dummy; } ;
struct connection {TYPE_1__* Tmp; } ;
typedef int nb_iterator_t ;
struct TYPE_7__ {scalar_t__ magic; scalar_t__ key_len; int key; } ;
struct TYPE_6__ {int total_bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int *,TYPE_3__*,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,scalar_t__) ;

int FUNC_5 (struct connection *VAR_2, int VAR_3) {
  if (VAR_2->Tmp) {
    nb_iterator_t VAR_4;
    FUNC_3 (&VAR_4, VAR_2->Tmp);
    int VAR_5 = FUNC_2 (&VAR_4, VAR_1, sizeof (struct keep_mc_store));
    if (VAR_5 > 0 && (VAR_3 || VAR_1->magic == VAR_0)) {
      FUNC_1 (VAR_5 == sizeof (struct keep_mc_store));
      FUNC_1 (VAR_1->magic == VAR_0);
      FUNC_1 (FUNC_0 (VAR_2->Tmp, sizeof (struct keep_mc_store)) == sizeof (struct keep_mc_store));
      FUNC_1 (FUNC_4 (VAR_2->Tmp, VAR_1->key, VAR_1->key_len) == VAR_1->key_len);
      FUNC_1 (!VAR_2->Tmp->total_bytes);

      return 1;
    }
    return 0;
  }
  return 0;
}
