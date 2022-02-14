
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vk_aes_ctx {int dummy; } ;
struct rwm_encrypt_decrypt_tmp {void (* crypt ) (struct vk_aes_ctx*,void const*,void*,int,unsigned char*) ;int buf_left; unsigned char* iv; int left; struct vk_aes_ctx* ctx; struct raw_message* raw; int bp; } ;
struct raw_message {int total_bytes; scalar_t__ last_offset; int first_offset; struct msg_part* last; struct msg_part* first; } ;
struct msg_part {scalar_t__ offset; TYPE_2__* part; scalar_t__ len; struct msg_part* next; } ;
struct msg_buffer {int dummy; } ;
struct TYPE_4__ {int refcnt; TYPE_1__* chunk; } ;
struct TYPE_3__ {int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msg_buffer* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct raw_message*) ;
 struct msg_part* FUNC_3 (struct msg_part*,struct msg_buffer*) ;
 int FUNC_4 (struct raw_message*,int,void*,struct rwm_encrypt_decrypt_tmp*) ;
 scalar_t__ VAR_2 ;

int FUNC_5 (struct raw_message *VAR_3, struct raw_message *VAR_4, int VAR_5, struct vk_aes_ctx *VAR_6, void (*VAR_7)(struct vk_aes_ctx *VAR_8, const void *VAR_9, void *VAR_10, int VAR_11, unsigned char *VAR_12), unsigned char *VAR_13) {
  FUNC_1 (VAR_5 >= 0);
  if (VAR_5 > VAR_3->total_bytes) {
    VAR_5 = VAR_3->total_bytes;
  }
  VAR_5 &= ~15;
  if (!VAR_5) {
    return 0;
  }
  if (VAR_4->last && (VAR_4->last->next || VAR_4->last->offset != VAR_4->last_offset)) {
    FUNC_2 (VAR_4);
  }
  if (!VAR_4->last || VAR_4->last->part->refcnt != 1) {
    int VAR_14 = VAR_4->last ? VAR_5 : VAR_5 + VAR_1;
    struct msg_buffer *VAR_15 = FUNC_0 (VAR_4->last ? VAR_4->last->part : 0, VAR_14 >= VAR_0 ? VAR_0 : VAR_14);
    struct msg_part *VAR_16 = FUNC_3 (VAR_4->last, VAR_15);
    if (VAR_4->last) {
      VAR_4->last->next = VAR_16;
      VAR_4->last = VAR_16;
      VAR_4->last_offset = 0;
    } else {
      VAR_4->last = VAR_4->first = VAR_16;
      VAR_4->last_offset = VAR_4->first_offset = VAR_16->offset = VAR_1;
      VAR_16->len = 0;
    }
  }
  static struct rwm_encrypt_decrypt_tmp VAR_17;
  FUNC_1 (!VAR_17.bp);
  VAR_17.crypt = VAR_7;
  VAR_17.buf_left = VAR_4->last->part->chunk->buffer_size - VAR_4->last_offset;
  VAR_17.raw = VAR_4;
  VAR_17.ctx = VAR_6;
  VAR_17.iv = VAR_13;
  VAR_17.left = VAR_5;
  return FUNC_4 (VAR_3, VAR_5, (void *)VAR_2, &VAR_17);
}
