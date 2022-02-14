
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targ_index_word_directory_entry {scalar_t__ word; } ;
typedef scalar_t__ hash_t ;



__attribute__((used)) static void FUNC_0 (struct targ_index_word_directory_entry *VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  hash_t VAR_4;
  struct targ_index_word_directory_entry VAR_5;
  if (VAR_1 <= 0) {
    return;
  }
  VAR_2 = 0;
  VAR_3 = VAR_1;
  VAR_4 = VAR_0[VAR_1 >> 1].word;
  do {
    while (VAR_0[VAR_2].word < VAR_4) { VAR_2++; }
    while (VAR_0[VAR_3].word > VAR_4) { VAR_3--; }
    if (VAR_2 <= VAR_3) {
      VAR_5 = VAR_0[VAR_2];
      VAR_0[VAR_2++] = VAR_0[VAR_3];
      VAR_0[VAR_3--] = VAR_5;
    }
  } while (VAR_2 <= VAR_3);
  FUNC_0 (VAR_0, VAR_3);
  FUNC_0 (VAR_0 + VAR_2, VAR_1 - VAR_2);
}
