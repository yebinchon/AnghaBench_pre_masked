
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int dummy; } ;
struct dm_buffer {int dummy; } ;
struct blk_plug {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dm_buffer* FUNC_2 (struct dm_bufio_client*,int ,int ,int*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct dm_bufio_client*) ;
 int FUNC_9 (struct dm_buffer*) ;
 int FUNC_10 (struct dm_bufio_client*) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int FUNC_12 (struct dm_buffer*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_3 ;

void FUNC_14(struct dm_bufio_client *VAR_4,
         sector_t VAR_5, unsigned VAR_6)
{
 struct blk_plug VAR_7;

 FUNC_1(VAR_3);

 FUNC_0(FUNC_7());

 FUNC_5(&VAR_7);
 FUNC_8(VAR_4);

 for (; VAR_6--; VAR_5++) {
  int VAR_8;
  struct dm_buffer *VAR_9;
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_0, &VAR_8,
    &VAR_3);
  if (FUNC_13(!FUNC_11(&VAR_3))) {
   FUNC_10(VAR_4);
   FUNC_4(&VAR_7);
   FUNC_3(&VAR_3);
   FUNC_5(&VAR_7);
   FUNC_8(VAR_4);
  }
  if (FUNC_13(VAR_9 != ((void*)0))) {
   FUNC_10(VAR_4);

   if (VAR_8)
    FUNC_12(VAR_9, VAR_1, VAR_2);
   FUNC_9(VAR_9);

   FUNC_6();

   if (!VAR_6)
    goto flush_plug;
   FUNC_8(VAR_4);
  }
 }

 FUNC_10(VAR_4);

flush_plug:
 FUNC_4(&VAR_7);
}
