
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int * lru; int * n_buffers; } ;
struct dm_buffer {int list_mode; int last_accessed; struct dm_bufio_client* c; int lru_list; int block; } ;
typedef int sector_t ;


 int FUNC_0 (struct dm_bufio_client*,struct dm_buffer*) ;
 int FUNC_1 (struct dm_buffer*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_1, sector_t VAR_2, int VAR_3)
{
 struct dm_bufio_client *VAR_4 = VAR_1->c;

 VAR_4->n_buffers[VAR_3]++;
 VAR_1->block = VAR_2;
 VAR_1->list_mode = VAR_3;
 FUNC_2(&VAR_1->lru_list, &VAR_4->lru[VAR_3]);
 FUNC_0(VAR_1->c, VAR_1);
 VAR_1->last_accessed = VAR_0;

 FUNC_1(VAR_1, 0);
}
