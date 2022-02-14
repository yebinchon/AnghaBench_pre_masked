
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* H; int words; scalar_t__ minus_flag; } ;
typedef TYPE_1__ watchcat_query_phrase_t ;
typedef int hash_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

inline int FUNC_1 (const void *VAR_0, const void *VAR_1) {
  const watchcat_query_phrase_t *VAR_2 = VAR_0;
  const watchcat_query_phrase_t *VAR_3 = VAR_1;
  if (VAR_2->H[0] != VAR_3->H[0]) {
    return VAR_2->H[0] < VAR_3->H[0] ? -1 : +1;
  }
  if (VAR_2->words != VAR_3->words) {
    return VAR_2->words - VAR_3->words;
  }
  if (VAR_2->minus_flag != VAR_3->minus_flag) {
    return VAR_2->minus_flag - VAR_3->minus_flag;
  }
  return FUNC_0 (VAR_2->H, VAR_3->H, sizeof (hash_t) * VAR_2->words);
}
