
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roccat_reader {scalar_t__ cbuf_start; TYPE_1__* device; } ;
struct file {struct roccat_reader* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {scalar_t__ cbuf_end; int exist; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 struct roccat_reader *VAR_6 = VAR_4->private_data;
 FUNC_0(VAR_4, &VAR_6->device->wait, VAR_5);
 if (VAR_6->cbuf_start != VAR_6->device->cbuf_end)
  return VAR_2 | VAR_3;
 if (!VAR_6->device->exist)
  return VAR_0 | VAR_1;
 return 0;
}
