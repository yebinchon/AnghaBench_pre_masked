
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int words; int phrases_cnt; int * phrases; void* words_buf; } ;
typedef TYPE_1__ watchcat_query_t ;
typedef int watchcat_query_phrase_t ;
struct TYPE_8__ {int words; int words_buf; int * phrases; } ;
typedef TYPE_2__ searchy_query_t ;
typedef int hash_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (void*,int ,size_t) ;
 int FUNC_4 (int *,int,int,int ) ;
 int * FUNC_5 (int *,int ,int,void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;

watchcat_query_t *FUNC_9 (char *VAR_1) {
  static searchy_query_t VAR_2;
  FUNC_8 (&VAR_2, VAR_1);

  searchy_query_t *VAR_3 = &VAR_2;
  watchcat_query_t *VAR_4 = FUNC_2 (sizeof (watchcat_query_t));
  VAR_4->words = VAR_3->words;
  size_t VAR_5 = sizeof (hash_t) * VAR_4->words;
  VAR_4->words_buf = FUNC_1 (VAR_5);
  FUNC_3 (VAR_4->words_buf, VAR_3->words_buf, VAR_5);

  int VAR_6 = FUNC_6 (VAR_3->phrases[0]);
  int VAR_7 = FUNC_6 (VAR_3->phrases[1]);
  VAR_4->phrases_cnt = VAR_6 + VAR_7;

  VAR_4->phrases = FUNC_1 (sizeof (watchcat_query_phrase_t) * VAR_4->phrases_cnt);
  watchcat_query_phrase_t *VAR_8 = VAR_4->phrases;
  VAR_8 = FUNC_5 (
      VAR_8, VAR_3->phrases[0], 0, VAR_4->words_buf, VAR_3->words_buf
  );
  VAR_8 = FUNC_5 (
      VAR_8, VAR_3->phrases[1], 1, VAR_4->words_buf, VAR_3->words_buf
  );
  FUNC_0 (VAR_8 == VAR_4->phrases + VAR_4->phrases_cnt);

  FUNC_4 (VAR_4->phrases, VAR_4->phrases_cnt, sizeof (watchcat_query_phrase_t), VAR_0);

  FUNC_7 (&VAR_2);
  return VAR_4;
}
