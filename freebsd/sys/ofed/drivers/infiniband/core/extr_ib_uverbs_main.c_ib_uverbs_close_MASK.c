
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ib_uverbs_file {int is_closed; int ref; TYPE_1__* async_file; struct ib_uverbs_device* device; int list; int cleanup_mutex; int * ucontext; } ;
struct ib_uverbs_device {int kobj; int lists_mutex; } ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (struct ib_uverbs_file*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct ib_uverbs_file *VAR_4 = VAR_3->private_data;
 struct ib_uverbs_device *VAR_5 = VAR_4->device;

 FUNC_4(&VAR_4->cleanup_mutex);
 if (VAR_4->ucontext) {
  FUNC_0(VAR_4, VAR_4->ucontext);
  VAR_4->ucontext = ((void*)0);
 }
 FUNC_5(&VAR_4->cleanup_mutex);

 FUNC_4(&VAR_4->device->lists_mutex);
 if (!VAR_4->is_closed) {
  FUNC_3(&VAR_4->list);
  VAR_4->is_closed = 1;
 }
 FUNC_5(&VAR_4->device->lists_mutex);

 if (VAR_4->async_file)
  FUNC_2(&VAR_4->async_file->ref, VAR_0);

 FUNC_2(&VAR_4->ref, VAR_1);
 FUNC_1(&VAR_5->kobj);

 return 0;
}
