
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct targ_index_word_directory_entry {int dummy; } ;
struct hash_word {int word_tree; int word; int num; struct hash_word* next; } ;
typedef TYPE_1__* iterator_t ;
typedef int hash_t ;
struct TYPE_9__ {int word; } ;
struct TYPE_8__ {int word; int data_offset; } ;
struct TYPE_7__ {int pos; } ;


 int VAR_0 ;
 struct hash_word** VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct hash_word* FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__*,int) ;

void FUNC_9 (void) {
  int VAR_8, VAR_9 = 0;
  struct hash_word *VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    for (VAR_10 = VAR_1[VAR_8]; VAR_10; VAR_10 = VAR_10->next) {
      if (VAR_10->word_tree) {
 ++VAR_9;
 FUNC_0 ((unsigned) VAR_9 < 0x7fffffff / sizeof (struct targ_index_word_directory_entry) - 1);
      }
    }
  }
  VAR_6 = VAR_9;
  VAR_7 = (VAR_6 + VAR_5 + 1) * sizeof (struct targ_index_word_directory_entry);
  VAR_3 = FUNC_7 (VAR_7);
  for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_0; VAR_8++) {
    for (VAR_10 = VAR_1[VAR_8]; VAR_10; VAR_10 = VAR_10->next) {
      if (VAR_10->word_tree) {
 FUNC_2 ();
 int VAR_11 = FUNC_6 (VAR_10->word);
 if (VAR_11 == VAR_10->num) {
   FUNC_3 (0);
   iterator_t VAR_12 = FUNC_1 (VAR_10->word);
   int VAR_13 = VAR_12->pos;
   FUNC_4 (0);
   if (VAR_13 == VAR_2) {
     continue;
   }
 }
 VAR_3[VAR_9].word = VAR_10->word;
 VAR_3[VAR_9].data_offset = VAR_10->word_tree;
 ++VAR_9;
      }
    }
  }
  FUNC_0 (VAR_9 <= VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    hash_t VAR_14 = VAR_4[VAR_8].word;
    VAR_10 = FUNC_5 (VAR_14, 0);
    if (!VAR_10 || !VAR_10->word_tree) {
      VAR_3[VAR_9].word = VAR_14;
      VAR_3[VAR_9].data_offset = 0;
      VAR_9++;
    }
  }

  FUNC_0 (VAR_9 <= VAR_6 + VAR_5);
  VAR_6 = VAR_9;

  VAR_3[VAR_9].word = -1;
  VAR_3[VAR_9].data_offset = -1;
  VAR_7 = (VAR_6 + 1) * sizeof (struct targ_index_word_directory_entry);

  FUNC_8 (VAR_3, VAR_9 - 1);
}
