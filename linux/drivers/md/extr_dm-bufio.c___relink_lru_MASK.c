
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int * lru; int * n_buffers; } ;
struct dm_buffer {int accessed; size_t list_mode; int last_accessed; int lru_list; struct dm_bufio_client* c; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_buffer *VAR_1, int VAR_2)
{
 struct dm_bufio_client *VAR_3 = VAR_1->c;

 VAR_1->accessed = 1;

 FUNC_0(!VAR_3->n_buffers[VAR_1->list_mode]);

 VAR_3->n_buffers[VAR_1->list_mode]--;
 VAR_3->n_buffers[VAR_2]++;
 VAR_1->list_mode = VAR_2;
 FUNC_1(&VAR_1->lru_list, &VAR_3->lru[VAR_2]);
 VAR_1->last_accessed = VAR_0;
}
