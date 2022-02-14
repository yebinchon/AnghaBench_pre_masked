
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct word_dictionary {int raw_data; long long raw_data_len; int word_num; int max_bits; long long* first_codes; struct file_word_dictionary_entry** words; scalar_t__* code_ptr; } ;
struct file_word_dictionary_entry {int str_len; int code_len; } ;
struct file_word_dictionary {int dict_size; int* offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,long long,long long,int ) ;
 struct file_word_dictionary_entry** FUNC_2 (int) ;

struct word_dictionary *FUNC_3 (struct word_dictionary *VAR_1, long long VAR_2, long long VAR_3) {
  int VAR_4, VAR_5, VAR_6, VAR_7;
  struct file_word_dictionary *VAR_8;
  long long VAR_9;
  VAR_1->raw_data = FUNC_1 (0, VAR_2, VAR_3, VAR_0);
  FUNC_0 (VAR_1->raw_data);
  VAR_1->raw_data_len = VAR_3;
  FUNC_0 (VAR_3 >= 4);
  VAR_8 = (struct file_word_dictionary *) VAR_1->raw_data;

  VAR_4 = VAR_8->dict_size;
  FUNC_0 (VAR_4 >= 0 && VAR_4 <= (VAR_3 >> 2) - 2);
  VAR_1->word_num = VAR_4;

  FUNC_0 (VAR_8->offset[0] >= (VAR_4+2)*4 && VAR_8->offset[0] <= VAR_3);
  FUNC_0 (VAR_8->offset[VAR_4] <= VAR_3);

  VAR_1->words = FUNC_2 (VAR_4*sizeof(void *));

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    struct file_word_dictionary_entry *VAR_10 = (struct file_word_dictionary_entry *) (VAR_1->raw_data + VAR_8->offset[VAR_5]);
    FUNC_0 (VAR_8->offset[VAR_5] < VAR_8->offset[VAR_5+1]);
    FUNC_0 (VAR_8->offset[VAR_5+1] <= VAR_3);
    FUNC_0 (VAR_8->offset[VAR_5] + VAR_10->str_len + 2 <= VAR_8->offset[VAR_5+1]);
    FUNC_0 (VAR_10->code_len <= 32 && VAR_10->code_len >= 1);
  }

  VAR_1->max_bits = 32;

  VAR_9 = 0;
  VAR_7 = 0;
  for (VAR_6 = 1; VAR_6 <= 32; VAR_6++) {
    if (VAR_9 < (1LL << 32)) {
      VAR_1->max_bits = VAR_6;
    }
    VAR_1->first_codes[VAR_6-1] = VAR_9;
    VAR_1->code_ptr[VAR_6-1] = VAR_1->words + VAR_7 - (VAR_9 >> (32 - VAR_6));
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
      struct file_word_dictionary_entry *VAR_11 = (struct file_word_dictionary_entry *) (VAR_1->raw_data + VAR_8->offset[VAR_5]);
      if (VAR_11->code_len == VAR_6) {
        VAR_1->words[VAR_7++] = VAR_11;
        VAR_9 += (1U << (32 - VAR_6));
        FUNC_0 (VAR_9 <= (1LL << 32));
      }
    }
  }
  FUNC_0 (VAR_7 == VAR_4 && (VAR_9 == (1LL << 32) || (!VAR_7 && !VAR_9)));
  return VAR_1;
}
