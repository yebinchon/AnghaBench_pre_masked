
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phrases_cnt; int words; struct TYPE_4__* words_buf; struct TYPE_4__* phrases; } ;
typedef TYPE_1__ watchcat_query_t ;
typedef int watchcat_query_phrase_t ;
typedef int hash_t ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1 (watchcat_query_t *VAR_0) {
  FUNC_0 (VAR_0->phrases, sizeof (watchcat_query_phrase_t) * VAR_0->phrases_cnt);
  FUNC_0 (VAR_0->words_buf, sizeof (hash_t) * VAR_0->words);
  FUNC_0 (VAR_0, sizeof (watchcat_query_t));
}
