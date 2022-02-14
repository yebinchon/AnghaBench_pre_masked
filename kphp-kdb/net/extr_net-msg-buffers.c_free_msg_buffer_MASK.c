
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_buffers_chunk {scalar_t__ magic; int (* free_buffer ) (struct msg_buffers_chunk*,struct msg_buffer*) ;} ;
struct msg_buffer {struct msg_buffers_chunk* chunk; int refcnt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct msg_buffers_chunk*,struct msg_buffer*) ;

int FUNC_2 (struct msg_buffer *VAR_1) {
  FUNC_0 (!VAR_1->refcnt);
  struct msg_buffers_chunk *VAR_2 = VAR_1->chunk;
  FUNC_0 (VAR_2->magic == VAR_0);
  return VAR_2->free_buffer (VAR_2, VAR_1);
}
