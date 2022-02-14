
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct text_index_header {int dummy; } ;
struct file_user_list_entry {int dummy; } ;
struct file_char_dictionary {int dummy; } ;
struct TYPE_3__ {scalar_t__ magic; int sublists_num; int tot_users; scalar_t__ last_global_id; int sublists_descr_offset; int word_char_dictionary_offset; int notword_char_dictionary_offset; int word_dictionary_offset; int notword_dictionary_offset; int user_list_offset; int user_data_offset; long long extra_data_offset; long long data_end_offset; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,TYPE_1__*,int) ;

int FUNC_2 (int VAR_5, long long VAR_6) {
  int VAR_7;

  VAR_7 = FUNC_1 (VAR_5, &VAR_0, sizeof (struct text_index_header));
  FUNC_0 (VAR_7 == sizeof (struct text_index_header));
  FUNC_0 (VAR_0.magic == VAR_4);

  FUNC_0 ((unsigned) VAR_0.sublists_num <= VAR_2);
  FUNC_0 ((unsigned) VAR_0.tot_users <= VAR_3);
  FUNC_0 (VAR_0.last_global_id >= 0);


  int VAR_8 = sizeof (struct file_user_list_entry) + 4 * VAR_0.sublists_num;

  FUNC_0 (VAR_0.sublists_descr_offset >= sizeof (struct text_index_header));
  FUNC_0 (VAR_0.sublists_descr_offset + VAR_0.sublists_num * 4 <= VAR_0.word_char_dictionary_offset);
  FUNC_0 (VAR_0.word_char_dictionary_offset + sizeof (struct file_char_dictionary) <= VAR_0.notword_char_dictionary_offset);
  FUNC_0 (VAR_0.notword_char_dictionary_offset + sizeof (struct file_char_dictionary) <= VAR_0.word_dictionary_offset);
  FUNC_0 (VAR_0.notword_dictionary_offset >= VAR_0.word_dictionary_offset + 4);
  FUNC_0 (VAR_0.notword_dictionary_offset <= VAR_0.word_dictionary_offset + VAR_1);
  FUNC_0 (VAR_0.user_list_offset >= VAR_0.notword_dictionary_offset + 4);
  FUNC_0 (VAR_0.user_list_offset <= VAR_0.notword_dictionary_offset + VAR_1);

  FUNC_0 (VAR_0.user_list_offset + VAR_0.tot_users * VAR_8 + 16 <= VAR_0.user_data_offset);
  FUNC_0 (VAR_0.user_data_offset <= VAR_0.extra_data_offset);
  FUNC_0 (VAR_0.extra_data_offset <= VAR_0.data_end_offset);
  FUNC_0 (VAR_0.data_end_offset == VAR_6);

  return 0;
}
