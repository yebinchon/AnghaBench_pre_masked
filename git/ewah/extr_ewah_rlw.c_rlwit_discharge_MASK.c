
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t running_len; int running_bit; size_t literal_words; } ;
struct rlw_iterator {scalar_t__ literal_word_start; scalar_t__ buffer; TYPE_1__ rlw; } ;
struct ewah_bitmap {int dummy; } ;


 int FUNC_0 (struct ewah_bitmap*,scalar_t__,size_t,int) ;
 int FUNC_1 (struct ewah_bitmap*,int,size_t) ;
 int FUNC_2 (struct rlw_iterator*,size_t) ;
 scalar_t__ FUNC_3 (struct rlw_iterator*) ;

size_t FUNC_4(
 struct rlw_iterator *VAR_0, struct ewah_bitmap *VAR_1, size_t VAR_2, int VAR_3)
{
 size_t VAR_4 = 0;

 while (VAR_4 < VAR_2 && FUNC_3(VAR_0) > 0) {
  size_t VAR_5, VAR_6 = VAR_0->rlw.running_len;

  if (VAR_4 + VAR_6 > VAR_2)
   VAR_6 = VAR_2 - VAR_4;

  FUNC_1(VAR_1, VAR_0->rlw.running_bit ^ VAR_3, VAR_6);
  VAR_4 += VAR_6;

  VAR_5 = VAR_0->rlw.literal_words;
  if (VAR_5 + VAR_4 > VAR_2)
   VAR_5 = VAR_2 - VAR_4;

  FUNC_0(VAR_1,
   VAR_0->buffer + VAR_0->literal_word_start, VAR_5, VAR_3);

  FUNC_2(VAR_0, VAR_5 + VAR_6);
  VAR_4 += VAR_5;
 }

 return VAR_4;
}
