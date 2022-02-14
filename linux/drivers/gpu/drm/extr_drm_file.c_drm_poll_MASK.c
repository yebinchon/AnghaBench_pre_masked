
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {int event_list; int event_wait; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__poll_t FUNC_2(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct drm_file *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4->event_wait, VAR_3);

 if (!FUNC_0(&VAR_4->event_list))
  VAR_5 |= VAR_0 | VAR_1;

 return VAR_5;
}
