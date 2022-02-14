
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dm_file* private_data; } ;
struct dm_file {scalar_t__ global_event_nr; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_3, poll_table *VAR_4)
{
 struct dm_file *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_2, VAR_4);

 if ((int)(FUNC_0(&VAR_1) - VAR_5->global_event_nr) > 0)
  VAR_6 |= VAR_0;

 return VAR_6;
}
