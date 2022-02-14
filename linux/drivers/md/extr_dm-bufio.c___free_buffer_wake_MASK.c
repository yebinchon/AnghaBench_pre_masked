
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int free_buffer_wait; int need_reserved_buffers; int reserved_buffers; } ;
struct dm_buffer {int lru_list; struct dm_bufio_client* c; } ;


 int FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_0)
{
 struct dm_bufio_client *VAR_1 = VAR_0->c;

 if (!VAR_1->need_reserved_buffers)
  FUNC_0(VAR_0);
 else {
  FUNC_1(&VAR_0->lru_list, &VAR_1->reserved_buffers);
  VAR_1->need_reserved_buffers--;
 }

 FUNC_2(&VAR_1->free_buffer_wait);
}
