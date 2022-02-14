
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_debug_list {TYPE_1__* hdev; int hid_debug_fifo; } ;
struct file {struct hid_debug_list* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int debug; int debug_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct hid_debug_list *VAR_6 = VAR_4->private_data;

 FUNC_1(VAR_4, &VAR_6->hdev->debug_wait, VAR_5);
 if (!FUNC_0(&VAR_6->hid_debug_fifo))
  return VAR_2 | VAR_3;
 if (!VAR_6->hdev->debug)
  return VAR_0 | VAR_1;
 return 0;
}
