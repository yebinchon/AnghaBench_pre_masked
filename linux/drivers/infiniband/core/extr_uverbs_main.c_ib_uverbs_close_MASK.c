
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ib_uverbs_file {int ref; TYPE_1__* device; int list; } ;
struct file {struct ib_uverbs_file* private_data; } ;
struct TYPE_2__ {int lists_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_uverbs_file*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct ib_uverbs_file *VAR_4 = VAR_3->private_data;

 FUNC_4(VAR_4, VAR_0);

 FUNC_2(&VAR_4->device->lists_mutex);
 FUNC_1(&VAR_4->list);
 FUNC_3(&VAR_4->device->lists_mutex);

 FUNC_0(&VAR_4->ref, VAR_1);

 return 0;
}
