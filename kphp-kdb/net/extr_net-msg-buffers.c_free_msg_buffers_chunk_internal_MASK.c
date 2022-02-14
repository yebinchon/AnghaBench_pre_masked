
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msg_buffers_chunk {scalar_t__ magic; scalar_t__ buffer_size; scalar_t__ tot_buffers; scalar_t__* free_cnt; scalar_t__ tot_chunks; int free_buffers; TYPE_2__* ch_next; TYPE_1__* ch_prev; struct msg_buffers_chunk* ch_head; } ;
struct TYPE_4__ {TYPE_1__* ch_prev; } ;
struct TYPE_3__ {TYPE_2__* ch_next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msg_buffers_chunk*) ;
 int FUNC_2 (struct msg_buffers_chunk*,int ,int) ;

void FUNC_3 (struct msg_buffers_chunk *VAR_5, struct msg_buffers_chunk *VAR_6) {
  FUNC_0 (VAR_5->magic == VAR_2);
  FUNC_0 (VAR_6->magic == VAR_1);
  FUNC_0 (VAR_5->buffer_size == VAR_6->buffer_size);
  FUNC_0 (VAR_5->tot_buffers == VAR_5->free_cnt[1]);
  FUNC_0 (VAR_6 == VAR_5->ch_head);

  VAR_5->magic = 0;
  VAR_5->ch_head = 0;
  VAR_5->ch_next->ch_prev = VAR_5->ch_prev;
  VAR_5->ch_prev->ch_next = VAR_5->ch_next;

  VAR_6->tot_buffers -= VAR_5->tot_buffers;
  VAR_6->free_buffers -= VAR_5->tot_buffers;
  VAR_6->tot_chunks--;
  FUNC_0 (VAR_6->tot_chunks >= 0);

  VAR_4--;
  VAR_3 -= VAR_0;

  FUNC_2 (VAR_5, 0, sizeof (struct msg_buffers_chunk));
  FUNC_1 (VAR_5);
}
