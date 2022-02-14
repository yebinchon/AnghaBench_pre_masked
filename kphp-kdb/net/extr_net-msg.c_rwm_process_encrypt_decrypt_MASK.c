
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rwm_encrypt_decrypt_tmp {int buf_left; scalar_t__ left; int bp; void const* buf; int iv; int ctx; int (* crypt ) (int ,void const*,scalar_t__,int,int ) ;struct raw_message* raw; } ;
struct raw_message {int total_bytes; scalar_t__ last_offset; struct msg_part* last; } ;
struct msg_part {int len; TYPE_2__* part; struct msg_part* next; } ;
struct msg_buffer {TYPE_1__* chunk; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int buffer_size; } ;


 scalar_t__ VAR_0 ;
 struct msg_buffer* FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (void const*,void const*,int) ;
 struct msg_part* FUNC_2 (struct msg_part*,struct msg_buffer*) ;
 int FUNC_3 (int ,void const*,scalar_t__,int,int ) ;
 int FUNC_4 (int ,void const*,scalar_t__,int,int ) ;
 int FUNC_5 (int ,void const*,scalar_t__,int,int ) ;

void FUNC_6 (struct rwm_encrypt_decrypt_tmp *VAR_1, const void *VAR_2, int VAR_3) {
  struct raw_message *VAR_4 = VAR_1->raw;
  if (!VAR_1->buf_left) {
    struct msg_buffer *VAR_5 = FUNC_0 (VAR_4->last->part, VAR_1->left >= VAR_0 ? VAR_0 : VAR_1->left);
    struct msg_part *VAR_6 = FUNC_2 (VAR_4->last, VAR_5);
    VAR_4->last->next = VAR_6;
    VAR_4->last = VAR_6;
    VAR_4->last_offset = 0;
    VAR_1->buf_left = VAR_5->chunk->buffer_size;
  }
  VAR_1->left -= VAR_3;
  if (VAR_1->bp) {
    if (VAR_3 >= 16 - VAR_1->bp) {
      FUNC_1 (VAR_1->buf + VAR_1->bp, VAR_2, 16 - VAR_1->bp);
      VAR_3 -= 16 - VAR_1->bp;
      VAR_2 += 16 - VAR_1->bp;
      VAR_1->bp = 0;
      VAR_1->crypt (VAR_1->ctx, VAR_1->buf, VAR_4->last->part->data + VAR_4->last_offset, 16, VAR_1->iv);
      VAR_4->last->len += 16;
      VAR_4->last_offset += 16;
      VAR_4->total_bytes += 16;
      VAR_1->buf_left -= 16;
    } else {
      FUNC_1 (VAR_1->buf + VAR_1->bp, VAR_2, VAR_3);
      VAR_1->bp += VAR_3;
      return;
    }
  }
  if (VAR_3 & 15) {
    int VAR_7 = VAR_3 & ~15;
    FUNC_1 (VAR_1->buf, VAR_2 + VAR_7, VAR_3 - VAR_7);
    VAR_1->bp = VAR_3 - VAR_7;
    VAR_3 = VAR_7;
  }
  while (1) {
    if (!VAR_1->buf_left) {
      struct msg_buffer *VAR_8 = FUNC_0 (VAR_4->last->part, VAR_1->left + VAR_3 >= VAR_0 ? VAR_0 : VAR_1->left + VAR_3);
      struct msg_part *VAR_9 = FUNC_2 (VAR_4->last, VAR_8);
      VAR_4->last->next = VAR_9;
      VAR_4->last = VAR_9;
      VAR_4->last_offset = 0;
      VAR_1->buf_left = VAR_8->chunk->buffer_size;
    }
    if (VAR_3 <= VAR_1->buf_left) {
      VAR_1->crypt (VAR_1->ctx, VAR_2, (VAR_4->last->part->data + VAR_4->last_offset), VAR_3, VAR_1->iv);
      VAR_4->last->len += VAR_3;
      VAR_4->last_offset += VAR_3;
      VAR_4->total_bytes += VAR_3;
      VAR_1->buf_left -= VAR_3;
      return;
    } else {
      int VAR_10 = VAR_1->buf_left;
      VAR_1->crypt (VAR_1->ctx, VAR_2, VAR_4->last->part->data + VAR_4->last_offset, VAR_10, VAR_1->iv);
      VAR_4->last->len += VAR_10;
      VAR_4->last_offset += VAR_10;
      VAR_4->total_bytes += VAR_10;
      VAR_2 += VAR_10;
      VAR_3 -= VAR_10;
      VAR_1->buf_left -= VAR_10;
    }
  }
}
