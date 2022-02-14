
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cs_char* private_data; } ;
struct cs_char {int lock; int dataind_queue; int chardev_queue; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct cs_char *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_2.wait, VAR_4);
 FUNC_2(&VAR_5->lock);
 if (!FUNC_0(&VAR_5->chardev_queue))
  VAR_6 = VAR_0 | VAR_1;
 else if (!FUNC_0(&VAR_5->dataind_queue))
  VAR_6 = VAR_0 | VAR_1;
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
