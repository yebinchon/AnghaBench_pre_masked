
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dm_file* private_data; } ;
struct dm_file {int global_event_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct dm_file* FUNC_1 (int,int ) ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct dm_file *VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_3(VAR_5))
  return VAR_5;

 VAR_6 = VAR_4->private_data = FUNC_1(sizeof(struct dm_file), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->global_event_nr = FUNC_0(&VAR_2);

 return 0;
}
