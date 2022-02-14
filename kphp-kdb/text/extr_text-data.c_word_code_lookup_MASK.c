
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct word_dictionary {int max_bits; unsigned int* first_codes; struct file_word_dictionary_entry*** code_ptr; } ;
struct file_word_dictionary_entry {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct file_word_dictionary_entry *FUNC_1 (struct word_dictionary *VAR_0, unsigned VAR_1, int *VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_0->max_bits, VAR_5;
  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_0->first_codes[VAR_5] <= VAR_1) { VAR_3 = VAR_5; } else { VAR_4 = VAR_5; }
  }
  FUNC_0 (VAR_3 >= 0);
  *VAR_2 = VAR_3 + 1;
  return VAR_0->code_ptr[VAR_3][VAR_1 >> (31 - VAR_3)];
}
