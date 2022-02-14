
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct client* private_data; } ;
struct TYPE_4__ {int size; int wait; } ;
struct client {TYPE_1__* lynx; TYPE_2__ buffer; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_3__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t
FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct client *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_2(VAR_3, &VAR_5->buffer.wait, VAR_4);

 if (FUNC_0(&VAR_5->buffer.size) > 0)
  VAR_6 = VAR_1 | VAR_2;

 if (FUNC_1(&VAR_5->lynx->link))
  VAR_6 |= VAR_0;

 return VAR_6;
}
