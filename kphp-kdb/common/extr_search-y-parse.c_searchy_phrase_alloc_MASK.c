
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* last_phrase; scalar_t__ words_buf; TYPE_2__** phrases; } ;
typedef TYPE_1__ searchy_query_t ;
struct TYPE_7__ {int type; scalar_t__ words; scalar_t__ H; struct TYPE_7__* next; } ;
typedef TYPE_2__ searchy_query_phrase_t ;
typedef enum searchy_query_phrase_type { ____Placeholder_searchy_query_phrase_type } searchy_query_phrase_type ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static searchy_query_phrase_t *FUNC_2 (searchy_query_t *VAR_0, enum searchy_query_phrase_type VAR_1, int VAR_2) {
  FUNC_0 (!(VAR_2 & -2));
  searchy_query_phrase_t *VAR_3 = FUNC_1 (sizeof (*VAR_3));
  VAR_3->type = VAR_1;
  VAR_3->words = 0;
  VAR_3->next = VAR_0->phrases[VAR_2];
  VAR_0->phrases[VAR_2] = VAR_3;
  VAR_3->H = VAR_0->last_phrase ? VAR_0->last_phrase->H + VAR_0->last_phrase->words : VAR_0->words_buf;
  return VAR_0->last_phrase = VAR_3;
}
