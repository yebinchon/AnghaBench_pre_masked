
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct lineevent_state {int events; int wait; } ;
struct file {struct lineevent_state* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2,
       struct poll_table_struct *VAR_3)
{
 struct lineevent_state *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4->wait, VAR_3);

 if (!FUNC_0(&VAR_4->events))
  VAR_5 = VAR_0 | VAR_1;

 return VAR_5;
}
