
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int minus_flag; int type; int words; int * H; } ;
typedef TYPE_1__ watchcat_query_phrase_t ;
struct TYPE_7__ {struct TYPE_7__* next; int type; int words; int * H; } ;
typedef TYPE_2__ searchy_query_phrase_t ;
typedef int hash_t ;



watchcat_query_phrase_t *FUNC_0 (watchcat_query_phrase_t *VAR_0, searchy_query_phrase_t *VAR_1,
  int VAR_2, hash_t *VAR_3, hash_t *VAR_4) {
  while (VAR_1 != ((void*)0)) {
    VAR_0->H = VAR_3 + (VAR_1->H - VAR_4);
    VAR_0->words = VAR_1->words;
    VAR_0->type = VAR_1->type;
    VAR_0->minus_flag = VAR_2;
    VAR_0++;
    VAR_1 = VAR_1->next;
  }
  return VAR_0;
}
