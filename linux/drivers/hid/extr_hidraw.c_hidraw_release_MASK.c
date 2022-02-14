
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hidraw_list {int node; } ;
struct file {struct hidraw_list* private_data; } ;
struct TYPE_3__ {int list_lock; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__** VAR_0 ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct hidraw_list*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct inode * VAR_2, struct file * VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);
 struct hidraw_list *VAR_5 = VAR_3->private_data;
 unsigned long VAR_6;

 FUNC_4(&VAR_1);

 FUNC_6(&VAR_0[VAR_4]->list_lock, VAR_6);
 FUNC_3(&VAR_5->node);
 FUNC_7(&VAR_0[VAR_4]->list_lock, VAR_6);
 FUNC_2(VAR_5);

 FUNC_0(VAR_0[VAR_4], 0);

 FUNC_5(&VAR_1);
 return 0;
}
