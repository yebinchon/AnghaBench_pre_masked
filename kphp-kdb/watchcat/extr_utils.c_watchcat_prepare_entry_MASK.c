
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_3__* by_hash; int by_pos; } ;
typedef TYPE_1__ watchcat_entry_t ;
typedef int searchy_pair_word_position_t ;
struct TYPE_6__ {int position; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__**,int *,int) ;
 int FUNC_1 (TYPE_3__**,int,int,int ) ;
 int FUNC_2 (char const*,int,int ,int ,int ,int ,int ,int*) ;

void FUNC_3 (watchcat_entry_t *VAR_2, const char *VAR_3, int VAR_4) {
  int VAR_5 = 0;
  int VAR_6 = FUNC_2 (VAR_3, VAR_4, VAR_2->by_pos, VAR_0, 0, 0, 0, &VAR_5);
  VAR_2->n = VAR_6;
  FUNC_0 (&VAR_2->by_hash, &VAR_2->by_pos, sizeof (searchy_pair_word_position_t) * VAR_6);

  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    VAR_2->by_hash[VAR_7].position = VAR_7;
  }

  FUNC_1 (&VAR_2->by_hash, VAR_6, sizeof (searchy_pair_word_position_t), VAR_1);
}
