
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vk_aes_ctx {int (* cbc_crypt ) (struct vk_aes_ctx*,unsigned char*,unsigned char*,int,unsigned char*) ;int (* ige_crypt ) (struct vk_aes_ctx*,unsigned char*,unsigned char*,int,unsigned char*) ;} ;
struct raw_message {int total_bytes; int first_offset; int last_offset; struct msg_part* last; struct msg_part* first; } ;
struct msg_part {int offset; int len; struct msg_part* next; TYPE_1__* part; } ;
struct TYPE_2__ {unsigned char* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct raw_message*) ;
 int FUNC_3 (struct vk_aes_ctx*,void*,void*,int,unsigned char*) ;
 int FUNC_4 (struct vk_aes_ctx*,void*,void*,int,unsigned char*) ;
 int FUNC_5 (struct vk_aes_ctx*,unsigned char*,unsigned char*,int,unsigned char*) ;
 int FUNC_6 (struct vk_aes_ctx*,unsigned char*,unsigned char*,int,unsigned char*) ;

int FUNC_7 (struct raw_message *VAR_0, int VAR_1, struct vk_aes_ctx *VAR_2, int VAR_3, unsigned char *VAR_4) {
  FUNC_0 (VAR_1 >= 0);
  if (VAR_1 > VAR_0->total_bytes) {
    VAR_1 = VAR_0->total_bytes;
  }
  VAR_1 &= ~15;
  if (!VAR_1) {
    return 0;
  }
  int VAR_5 = VAR_1;
  FUNC_2 (VAR_0);


  struct msg_part *VAR_6 = VAR_0->first;
  int VAR_7 = (VAR_6 == VAR_0->first) ? VAR_0->first_offset : VAR_6->offset;
  int VAR_8 = (VAR_6 == VAR_0->last) ? VAR_0->last_offset - VAR_7 : VAR_6->len + VAR_6->offset - VAR_7;
  while (VAR_1) {
    FUNC_0 (VAR_7 >= 0);
    FUNC_0 (VAR_8 >= 0);
    while (VAR_8 >= 16) {
      int VAR_9 = VAR_8 < VAR_1 ? (VAR_8 & ~15) : VAR_1;
      if (!VAR_3) {
        VAR_2->ige_crypt (VAR_2, (void *)(VAR_6->part->data + VAR_7), (void *)(VAR_6->part->data + VAR_7), VAR_9, VAR_4);
      } else {
        VAR_2->cbc_crypt (VAR_2, (void *)(VAR_6->part->data + VAR_7), (void *)(VAR_6->part->data + VAR_7), VAR_9, VAR_4);
      }
      VAR_7 += VAR_9;
      VAR_1 -= VAR_9;
      VAR_8 = VAR_8 & 15;
    }
    if (VAR_8 && VAR_1) {
      static unsigned char VAR_10[16];
      int VAR_11 = 0;
      int VAR_12 = VAR_8;
      int VAR_13 = VAR_7;
      struct msg_part *VAR_14 = VAR_6;
      while (VAR_11 < 16) {
        int VAR_15 = (VAR_8 > 16 - VAR_11) ? 16 - VAR_11 : VAR_8;
        FUNC_1 (VAR_10 + VAR_11, VAR_6->part->data + VAR_7, VAR_15);
        VAR_11 += VAR_15;
        if (VAR_8 == VAR_15) {
          VAR_6 = VAR_6->next;
          if (VAR_6) {
            VAR_7 = VAR_6->offset;
            VAR_8 = (VAR_6 == VAR_0->last) ? VAR_0->last_offset - VAR_7 : VAR_6->len;
          } else {
            VAR_7 = -1;
            VAR_8 = -1;
            FUNC_0 (VAR_11 == 16);
          }
        } else {
          break;
        }
      }
      if (!VAR_3) {
        VAR_2->ige_crypt (VAR_2, VAR_10, VAR_10, 16, VAR_4);
      } else {
        VAR_2->cbc_crypt (VAR_2, VAR_10, VAR_10, 16, VAR_4);
      }
      VAR_8 = VAR_12;
      VAR_7 = VAR_13;
      VAR_6 = VAR_14;
      VAR_11 = 0;
      while (VAR_11 < 16) {
        int VAR_16 = (VAR_8 > 16 - VAR_11) ? 16 - VAR_11 : VAR_8;
        FUNC_1 (VAR_6->part->data + VAR_7, VAR_10 + VAR_11, VAR_16);
        VAR_11 += VAR_16;
        if (VAR_8 == VAR_16) {
          VAR_6 = VAR_6->next;
          if (VAR_6) {
            VAR_7 = VAR_6->offset;
            VAR_8 = (VAR_6 == VAR_0->last) ? VAR_0->last_offset - VAR_7 : VAR_6->len;
          } else {
            VAR_7 = -1;
            VAR_8 = -1;
            FUNC_0 (VAR_11 == 16);
          }
        } else {
          VAR_7 += VAR_16;
          VAR_8 -= VAR_16;
          break;
        }
      }
      VAR_1 -= 16;
    } else {
      VAR_6 = VAR_6->next;
      if (VAR_6) {
        VAR_7 = VAR_6->offset;
        VAR_8 = (VAR_6 == VAR_0->last) ? VAR_0->last_offset - VAR_7 : VAR_6->len;
      } else {
        VAR_7 = -1;
        VAR_8 = -1;
      }
    }
  }

  return VAR_5;
}
