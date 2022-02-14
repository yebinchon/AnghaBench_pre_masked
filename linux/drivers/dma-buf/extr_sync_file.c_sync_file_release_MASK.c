
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_file {int fence; int cb; int flags; } ;
struct inode {int dummy; } ;
struct file {struct sync_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sync_file*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct sync_file *VAR_3 = VAR_2->private_data;

 if (FUNC_3(VAR_0, &VAR_3->flags))
  FUNC_1(VAR_3->fence, &VAR_3->cb);
 FUNC_0(VAR_3->fence);
 FUNC_2(VAR_3);

 return 0;
}
