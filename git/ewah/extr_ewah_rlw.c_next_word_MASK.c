
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ literal_word_offset; int * word; int running_bit; int running_len; scalar_t__ literal_words; } ;
struct rlw_iterator {size_t pointer; size_t size; TYPE_1__ rlw; int * buffer; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct rlw_iterator *VAR_0)
{
 if (VAR_0->pointer >= VAR_0->size)
  return 0;

 VAR_0->rlw.word = &VAR_0->buffer[VAR_0->pointer];
 VAR_0->pointer += FUNC_0(VAR_0->rlw.word) + 1;

 VAR_0->rlw.literal_words = FUNC_0(VAR_0->rlw.word);
 VAR_0->rlw.running_len = FUNC_2(VAR_0->rlw.word);
 VAR_0->rlw.running_bit = FUNC_1(VAR_0->rlw.word);
 VAR_0->rlw.literal_word_offset = 0;

 return 1;
}
