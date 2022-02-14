
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int block_size; } ;
struct dm_buffer {int hold_count; int list_mode; int state; int block; int dirty_end; scalar_t__ dirty_start; struct dm_bufio_client* c; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dm_buffer* FUNC_1 (struct dm_bufio_client*,int ) ;
 int FUNC_2 (struct dm_buffer*) ;
 int FUNC_3 (struct dm_buffer*,int ,int ) ;
 int FUNC_4 (struct dm_buffer*) ;
 int FUNC_5 (struct dm_buffer*) ;
 int FUNC_6 (struct dm_bufio_client*) ;
 int FUNC_7 (struct dm_buffer*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct dm_bufio_client*) ;
 int FUNC_10 (struct dm_buffer*) ;
 int FUNC_11 (struct dm_bufio_client*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct dm_buffer*,int ,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int VAR_6 ;

void FUNC_17(struct dm_buffer *VAR_7, sector_t VAR_8)
{
 struct dm_bufio_client *VAR_9 = VAR_7->c;
 struct dm_buffer *VAR_10;

 FUNC_0(FUNC_8());

 FUNC_9(VAR_9);

retry:
 VAR_10 = FUNC_1(VAR_9, VAR_8);
 if (VAR_10) {
  if (VAR_10->hold_count) {
   FUNC_6(VAR_9);
   goto retry;
  }





  FUNC_4(VAR_10);
  FUNC_5(VAR_10);
  FUNC_2(VAR_10);
 }

 FUNC_0(!VAR_7->hold_count);
 FUNC_0(FUNC_14(VAR_1, &VAR_7->state));

 FUNC_7(VAR_7, ((void*)0));
 if (VAR_7->hold_count == 1) {
  FUNC_15(&VAR_7->state, VAR_2,
          VAR_5);
  FUNC_12(VAR_0, &VAR_7->state);
  VAR_7->dirty_start = 0;
  VAR_7->dirty_end = VAR_9->block_size;
  FUNC_5(VAR_7);
  FUNC_3(VAR_7, VAR_8, VAR_3);
 } else {
  sector_t VAR_11;
  FUNC_16(&VAR_7->state, VAR_2,
        VAR_5);







  VAR_11 = VAR_7->block;
  FUNC_5(VAR_7);
  FUNC_3(VAR_7, VAR_8, VAR_7->list_mode);
  FUNC_13(VAR_7, VAR_4, VAR_6);
  FUNC_15(&VAR_7->state, VAR_2,
          VAR_5);
  FUNC_5(VAR_7);
  FUNC_3(VAR_7, VAR_11, VAR_7->list_mode);
 }

 FUNC_11(VAR_9);
 FUNC_10(VAR_7);
}
