
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct client* private_data; } ;
struct client {int event_list; int device; int wait; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, poll_table * VAR_5)
{
 struct client *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = 0;

 FUNC_2(VAR_4, &VAR_6->wait, VAR_5);

 if (FUNC_0(VAR_6->device))
  VAR_7 |= VAR_1 | VAR_0;
 if (!FUNC_1(&VAR_6->event_list))
  VAR_7 |= VAR_2 | VAR_3;

 return VAR_7;
}
