
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {unsigned int block_size; } ;
struct dm_buffer {unsigned int dirty_start; unsigned int dirty_end; int state; struct dm_bufio_client* c; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_buffer*,int ) ;
 int FUNC_2 (struct dm_bufio_client*) ;
 int FUNC_3 (struct dm_bufio_client*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct dm_buffer *VAR_3,
     unsigned VAR_4, unsigned VAR_5)
{
 struct dm_bufio_client *VAR_6 = VAR_3->c;

 FUNC_0(VAR_4 >= VAR_5);
 FUNC_0(VAR_5 > VAR_3->c->block_size);

 FUNC_2(VAR_6);

 FUNC_0(FUNC_5(VAR_1, &VAR_3->state));

 if (!FUNC_4(VAR_0, &VAR_3->state)) {
  VAR_3->dirty_start = VAR_4;
  VAR_3->dirty_end = VAR_5;
  FUNC_1(VAR_3, VAR_2);
 } else {
  if (VAR_4 < VAR_3->dirty_start)
   VAR_3->dirty_start = VAR_4;
  if (VAR_5 > VAR_3->dirty_end)
   VAR_3->dirty_end = VAR_5;
 }

 FUNC_3(VAR_6);
}
