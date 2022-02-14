
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {TYPE_2__* prev; TYPE_1__* next; } ;
struct dm_writecache {int dev; int endio_list_lock; struct list_head endio_list; } ;
struct TYPE_4__ {struct list_head* next; } ;
struct TYPE_3__ {struct list_head* prev; } ;


 int FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_writecache*) ;
 scalar_t__ FUNC_2 (struct dm_writecache*) ;
 int FUNC_3 (struct dm_writecache*,struct list_head*) ;
 int FUNC_4 (struct dm_writecache*,struct list_head*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct dm_writecache*) ;
 int FUNC_13 (struct dm_writecache*) ;
 int FUNC_14 (struct dm_writecache*) ;
 int FUNC_15 (struct dm_writecache*,int ) ;
 int FUNC_16 (struct dm_writecache*,int ) ;

__attribute__((used)) static int FUNC_17(void *VAR_3)
{
 struct dm_writecache *VAR_4 = VAR_3;

 while (1) {
  struct list_head VAR_5;

  FUNC_7(&VAR_4->endio_list_lock);
  if (!FUNC_6(&VAR_4->endio_list))
   goto pop_from_list;
  FUNC_10(VAR_1);
  FUNC_8(&VAR_4->endio_list_lock);

  if (FUNC_11(FUNC_5())) {
   FUNC_10(VAR_2);
   break;
  }

  FUNC_9();

  continue;

pop_from_list:
  VAR_5 = VAR_4->endio_list;
  VAR_5.next->prev = VAR_5.prev->next = &VAR_5;
  FUNC_0(&VAR_4->endio_list);
  FUNC_8(&VAR_4->endio_list_lock);

  if (!FUNC_1(VAR_4))
   FUNC_15(VAR_4, VAR_4->dev);

  FUNC_12(VAR_4);

  if (FUNC_2(VAR_4)) {
   FUNC_3(VAR_4, &VAR_5);
  } else {
   FUNC_4(VAR_4, &VAR_5);
   FUNC_16(VAR_4, VAR_0);
  }

  FUNC_14(VAR_4);

  FUNC_13(VAR_4);
 }

 return 0;
}
