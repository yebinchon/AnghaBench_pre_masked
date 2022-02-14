
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidraw_list {scalar_t__ head; scalar_t__ tail; TYPE_1__* hidraw; } ;
struct file {struct hidraw_list* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int exist; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_5, poll_table *VAR_6)
{
 struct hidraw_list *VAR_7 = VAR_5->private_data;

 FUNC_0(VAR_5, &VAR_7->hidraw->wait, VAR_6);
 if (VAR_7->head != VAR_7->tail)
  return VAR_2 | VAR_4 | VAR_3;
 if (!VAR_7->hidraw->exist)
  return VAR_0 | VAR_1;
 return 0;
}
