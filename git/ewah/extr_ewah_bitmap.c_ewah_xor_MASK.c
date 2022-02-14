
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ running_len; int literal_words; int running_bit; } ;
struct rlw_iterator {int* buffer; size_t literal_word_start; TYPE_1__ rlw; } ;
struct ewah_bitmap {int bit_size; } ;


 int FUNC_0 (struct ewah_bitmap*,int) ;
 int FUNC_1 (struct ewah_bitmap*,int,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rlw_iterator*,size_t) ;
 size_t FUNC_5 (struct rlw_iterator*,struct ewah_bitmap*,scalar_t__,int) ;
 int FUNC_6 (struct rlw_iterator*,struct ewah_bitmap*) ;
 scalar_t__ FUNC_7 (struct rlw_iterator*) ;

void FUNC_8(
 struct ewah_bitmap *VAR_0,
 struct ewah_bitmap *VAR_1,
 struct ewah_bitmap *VAR_2)
{
 struct rlw_iterator VAR_3;
 struct rlw_iterator VAR_4;
 size_t VAR_5;

 FUNC_6(&VAR_3, VAR_0);
 FUNC_6(&VAR_4, VAR_1);

 while (FUNC_7(&VAR_3) > 0 && FUNC_7(&VAR_4) > 0) {
  while (VAR_3.rlw.running_len > 0 || VAR_4.rlw.running_len > 0) {
   struct rlw_iterator *VAR_6, *VAR_7;
   size_t VAR_8;
   int VAR_9;

   if (VAR_3.rlw.running_len < VAR_4.rlw.running_len) {
    VAR_6 = &VAR_3;
    VAR_7 = &VAR_4;
   } else {
    VAR_6 = &VAR_4;
    VAR_7 = &VAR_3;
   }

   VAR_9 = !!VAR_7->rlw.running_bit;
   VAR_8 = FUNC_5(VAR_6, VAR_2,
    VAR_7->rlw.running_len, VAR_9);

   FUNC_1(VAR_2, VAR_9,
    VAR_7->rlw.running_len - VAR_8);

   FUNC_4(VAR_7,
    VAR_7->rlw.running_len);
  }

  VAR_5 = FUNC_3(
   VAR_3.rlw.literal_words,
   VAR_4.rlw.literal_words);

  if (VAR_5) {
   size_t VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
    FUNC_0(VAR_2,
     VAR_3.buffer[VAR_3.literal_word_start + VAR_10] ^
     VAR_4.buffer[VAR_4.literal_word_start + VAR_10]
    );
   }

   FUNC_4(&VAR_3, VAR_5);
   FUNC_4(&VAR_4, VAR_5);
  }
 }

 if (FUNC_7(&VAR_3) > 0)
  FUNC_5(&VAR_3, VAR_2, ~0, 0);
 else
  FUNC_5(&VAR_4, VAR_2, ~0, 0);

 VAR_2->bit_size = FUNC_2(VAR_0->bit_size, VAR_1->bit_size);
}
