
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t running_len; size_t literal_words; scalar_t__ literal_word_offset; } ;
struct rlw_iterator {TYPE_1__ rlw; scalar_t__ literal_word_start; } ;


 int FUNC_0 (struct rlw_iterator*) ;
 scalar_t__ FUNC_1 (struct rlw_iterator*) ;
 scalar_t__ FUNC_2 (struct rlw_iterator*) ;

void FUNC_3(struct rlw_iterator *VAR_0, size_t VAR_1)
{
 while (VAR_1 > 0) {
  size_t VAR_2;

  if (VAR_0->rlw.running_len > VAR_1) {
   VAR_0->rlw.running_len -= VAR_1;
   return;
  }

  VAR_1 -= VAR_0->rlw.running_len;
  VAR_0->rlw.running_len = 0;

  VAR_2 = (VAR_1 > VAR_0->rlw.literal_words) ? VAR_0->rlw.literal_words : VAR_1;

  VAR_0->literal_word_start += VAR_2;
  VAR_0->rlw.literal_words -= VAR_2;
  VAR_1 -= VAR_2;

  if (VAR_1 > 0 || FUNC_2(VAR_0) == 0) {
   if (!FUNC_0(VAR_0))
    break;

   VAR_0->literal_word_start =
    FUNC_1(VAR_0) + VAR_0->rlw.literal_word_offset;
  }
 }
}
