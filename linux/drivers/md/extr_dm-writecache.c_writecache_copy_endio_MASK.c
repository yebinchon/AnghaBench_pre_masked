
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int endio_list_lock; int endio_list; int endio_thread; } ;
struct copy_struct {int endio_entry; int error; struct dm_writecache* wc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(int VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct copy_struct *VAR_4 = VAR_3;
 struct dm_writecache *VAR_5 = VAR_4->wc;

 VAR_4->error = FUNC_0(!(VAR_1 | VAR_2)) ? 0 : -VAR_0;

 FUNC_3(&VAR_5->endio_list_lock);
 if (FUNC_5(FUNC_2(&VAR_5->endio_list)))
  FUNC_6(VAR_5->endio_thread);
 FUNC_1(&VAR_4->endio_entry, &VAR_5->endio_list);
 FUNC_4(&VAR_5->endio_list_lock);
}
