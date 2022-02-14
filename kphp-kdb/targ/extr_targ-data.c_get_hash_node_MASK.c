
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_word {scalar_t__ word; struct hash_word* next; } ;
typedef scalar_t__ hash_t ;


 int VAR_0 ;
 struct hash_word** VAR_1 ;
 int VAR_2 ;
 struct hash_word* FUNC_0 (int) ;

struct hash_word *FUNC_1 (hash_t VAR_3, int VAR_4) {
  int VAR_5 = (unsigned) VAR_3 & (VAR_0 - 1);
  struct hash_word *VAR_6 = VAR_1[VAR_5];
  while (VAR_6) {
    if (VAR_6->word == VAR_3) {
      return VAR_6;
    }
    VAR_6 = VAR_6->next;
  }
  if (!VAR_4) {
    return 0;
  }
  VAR_2++;
  VAR_6 = FUNC_0 (sizeof (struct hash_word));
  VAR_6->word = VAR_3;
  VAR_6->next = VAR_1[VAR_5];
  VAR_1[VAR_5] = VAR_6;
  return VAR_6;
}
