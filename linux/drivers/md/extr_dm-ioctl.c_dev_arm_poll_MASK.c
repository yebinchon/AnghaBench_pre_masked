
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dm_file* private_data; } ;
struct dm_ioctl {int dummy; } ;
struct dm_file {int global_event_nr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, struct dm_ioctl *VAR_2, size_t VAR_3)
{
 struct dm_file *VAR_4 = VAR_1->private_data;

 VAR_4->global_event_nr = FUNC_0(&VAR_0);

 return 0;
}
