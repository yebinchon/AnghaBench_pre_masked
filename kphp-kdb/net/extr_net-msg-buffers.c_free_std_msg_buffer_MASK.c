
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msg_buffers_chunk {scalar_t__ magic; int two_power; scalar_t__* free_cnt; int tot_buffers; TYPE_1__* ch_head; scalar_t__ buffer_size; } ;
struct msg_buffer {int refcnt; scalar_t__ magic; struct msg_buffers_chunk* chunk; } ;
struct TYPE_2__ {int free_buffers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct msg_buffers_chunk*) ;
 int FUNC_3 (struct msg_buffers_chunk*,struct msg_buffer*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_4 (struct msg_buffers_chunk *VAR_7, struct msg_buffer *VAR_8) {
  FUNC_0 (!VAR_8->refcnt && VAR_8->magic == VAR_1 && VAR_7->magic == VAR_2 && VAR_8->chunk == VAR_7);
  int VAR_9 = FUNC_3 (VAR_7, VAR_8);
  int VAR_10 = VAR_7->two_power;
  if (VAR_6 > 2) {
    FUNC_1 (VAR_3, "free_msg_buffer(%d)\n", VAR_9);
  }
  VAR_9 += VAR_10;
  FUNC_0 (!VAR_7->free_cnt[VAR_9]);
  do {
    FUNC_0 (++VAR_7->free_cnt[VAR_9] > 0);
  } while (VAR_9 >>= 1);

  VAR_8->magic = VAR_0;
  VAR_8->refcnt = -0x40000000;
  ++ VAR_7->ch_head->free_buffers;

  VAR_5 -= VAR_7->buffer_size;
  VAR_4 --;

  if (!VAR_7->free_cnt[1] && VAR_7->ch_head->free_buffers * 4 >= VAR_7->tot_buffers * 5) {
    FUNC_2 (VAR_7);
  }

  return 1;
}
