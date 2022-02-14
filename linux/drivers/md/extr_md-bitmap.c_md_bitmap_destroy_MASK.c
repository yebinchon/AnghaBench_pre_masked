
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; } ;
struct mddev {TYPE_2__* thread; TYPE_1__ bitmap_info; int lock; struct bitmap* bitmap; int * wb_info_pool; } ;
struct bitmap {int dummy; } ;
struct TYPE_4__ {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct bitmap*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mddev *VAR_1)
{
 struct bitmap *VAR_2 = VAR_1->bitmap;

 if (!VAR_2)
  return;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1->wb_info_pool);
 VAR_1->wb_info_pool = ((void*)0);

 FUNC_3(&VAR_1->bitmap_info.mutex);
 FUNC_5(&VAR_1->lock);
 VAR_1->bitmap = ((void*)0);
 FUNC_6(&VAR_1->lock);
 FUNC_4(&VAR_1->bitmap_info.mutex);
 if (VAR_1->thread)
  VAR_1->thread->timeout = VAR_0;

 FUNC_0(VAR_2);
}
