
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ literal_word_offset; } ;
struct rlw_iterator {TYPE_1__ rlw; scalar_t__ literal_word_start; scalar_t__ pointer; int size; int buffer; } ;
struct ewah_bitmap {int buffer_size; int buffer; } ;


 int FUNC_0 (struct rlw_iterator*) ;
 scalar_t__ FUNC_1 (struct rlw_iterator*) ;

void FUNC_2(struct rlw_iterator *VAR_0, struct ewah_bitmap *VAR_1)
{
 VAR_0->buffer = VAR_1->buffer;
 VAR_0->size = VAR_1->buffer_size;
 VAR_0->pointer = 0;

 FUNC_0(VAR_0);

 VAR_0->literal_word_start = FUNC_1(VAR_0) +
  VAR_0->rlw.literal_word_offset;
}
