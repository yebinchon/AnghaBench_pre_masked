
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_buffers_chunk {scalar_t__ magic; scalar_t__* free_cnt; int two_power; int free_buffers; int tot_buffers; int buffer_size; scalar_t__ first_buffer; struct msg_buffers_chunk* ch_next; struct msg_buffers_chunk* ch_prev; } ;
struct msg_buffer {int refcnt; int magic; struct msg_buffers_chunk* chunk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct msg_buffers_chunk* FUNC_0 (struct msg_buffers_chunk*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct msg_buffers_chunk*,struct msg_buffer*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct msg_buffer *FUNC_5 (struct msg_buffer *VAR_6, struct msg_buffers_chunk *VAR_7) {
  FUNC_1 (VAR_7->magic == VAR_1);
  struct msg_buffers_chunk *VAR_8 = VAR_7->ch_next, *VAR_9 = VAR_8;
  if (VAR_9 == VAR_7) {
    VAR_9 = FUNC_0 (VAR_7);
    if (!VAR_9) {
      return 0;
    }
    FUNC_1 (VAR_9 == VAR_7->ch_next && VAR_9 != VAR_7 && VAR_9->free_cnt[1]);
  } else while (VAR_9 != VAR_7 && !VAR_9->free_cnt[1]) {
    VAR_7->ch_next = VAR_9->ch_next;
    VAR_9->ch_next->ch_prev = VAR_7;
    VAR_9->ch_next = VAR_7;
    VAR_9->ch_prev = VAR_7->ch_prev;
    VAR_9->ch_prev->ch_next = VAR_9;
    VAR_7->ch_prev = VAR_9;
    VAR_9 = VAR_7->ch_next;
    if (VAR_9 == VAR_8) {
      VAR_9 = FUNC_0 (VAR_7);
      if (!VAR_9) {
 return 0;
      }
      FUNC_1 (VAR_9 == VAR_7->ch_next && VAR_9 != VAR_7 && VAR_9->free_cnt[1]);
      break;
    }
  }

  int VAR_10 = VAR_9->two_power, VAR_11 = 1;

  if (VAR_6 && VAR_6->chunk == VAR_9) {
    int VAR_12 = FUNC_3 (VAR_9, VAR_6);
    if (VAR_5 > 2) {
      FUNC_2 (VAR_2, "alloc_msg_buffer: allocating neighbor buffer for %d\n", VAR_12);
    }
    int VAR_13 = 1, VAR_14 = 0, VAR_15 = 0, VAR_16 = VAR_10;
    while (VAR_11 < VAR_10) {
      VAR_11 <<= 1;
      int VAR_17 = (VAR_15 + VAR_16) >> 1;
      if (VAR_12 < VAR_17) {
 if (VAR_9->free_cnt[VAR_11] > 0) {
   VAR_16 = VAR_17;
   if (VAR_9->free_cnt[VAR_11+1] > 0) {
     VAR_13 = VAR_11 + 1;
   }
 } else {
   VAR_15 = VAR_17;
   VAR_11++;
 }
      } else if (VAR_9->free_cnt[VAR_11+1] > 0) {
 VAR_15 = VAR_17;
 VAR_11++;
      } else {
 VAR_14 = VAR_11 = VAR_13;
 while (VAR_11 < VAR_10) {
   VAR_11 <<= 1;
   if (!VAR_9->free_cnt[VAR_11]) {
     VAR_11++;
   }
   FUNC_1 (-- VAR_9->free_cnt[VAR_11] >= 0);
 }
 break;
      }
    }
    if (!VAR_14) {
      VAR_14 = VAR_11;
    }
    while (VAR_14 > 0) {
      FUNC_1 (-- VAR_9->free_cnt[VAR_14] >= 0);
      VAR_14 >>= 1;
    }
  } else {
    int VAR_18 = VAR_9->free_cnt[1] < 16 ? VAR_9->free_cnt[1] : 16;
    VAR_18 = ((long long) FUNC_4() * VAR_18) >> 31;
    FUNC_1 (VAR_18 >= 0 && VAR_18 < VAR_9->free_cnt[1]);
    while (VAR_11 < VAR_10) {
      FUNC_1 (-- VAR_9->free_cnt[VAR_11] >= 0);
      VAR_11 <<= 1;
      if (VAR_9->free_cnt[VAR_11] <= VAR_18) {
 VAR_18 -= VAR_9->free_cnt[VAR_11];
 VAR_11++;
      }
    }
    FUNC_1 (-- VAR_9->free_cnt[VAR_11] == 0);
  }

  -- VAR_7->free_buffers;

  VAR_11 -= VAR_10;
  if (VAR_5 > 2) {
    FUNC_2 (VAR_2, "alloc_msg_buffer(%d): tot_buffers = %d, free_buffers = %d\n", VAR_11, VAR_9->tot_buffers, VAR_9->free_buffers);
  }
  FUNC_1 (VAR_11 >= 0 && VAR_11 < VAR_9->tot_buffers);

  struct msg_buffer *VAR_19 = (struct msg_buffer *) ((char *) VAR_9->first_buffer + VAR_11 * (VAR_9->buffer_size + 16));

  VAR_19->chunk = VAR_9;
  VAR_19->refcnt = 1;
  VAR_19->magic = VAR_0;

  VAR_4 += VAR_9->buffer_size;
  VAR_3 ++;


  return VAR_19;
}
