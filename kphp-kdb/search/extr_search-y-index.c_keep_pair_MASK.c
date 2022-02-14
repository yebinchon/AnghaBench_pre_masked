
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int doc_id; int position; int word; } ;
typedef TYPE_1__ pair_t ;
typedef int hash_t ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_2 (int VAR_4, hash_t VAR_5, int VAR_6) {
  if (VAR_1 >= VAR_2) {
    FUNC_1 (VAR_3, "\nThere are too many pairs (max_pairs = %ld).\n"
                     "Try increase max_pairs using -P command line switch.\n", VAR_2);
    FUNC_0 (1);
  }
  pair_t *VAR_7 = &VAR_0[VAR_1++];
  VAR_7->word = VAR_5;
  VAR_7->doc_id = VAR_4;
  VAR_7->position = VAR_6;
}
