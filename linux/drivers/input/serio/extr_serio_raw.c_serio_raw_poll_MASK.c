
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw_client {struct serio_raw* serio_raw; } ;
struct serio_raw {scalar_t__ head; scalar_t__ tail; scalar_t__ dead; int wait; } ;
struct file {struct serio_raw_client* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_6, poll_table *VAR_7)
{
 struct serio_raw_client *VAR_8 = VAR_6->private_data;
 struct serio_raw *VAR_9 = VAR_8->serio_raw;
 __poll_t VAR_10;

 FUNC_0(VAR_6, &VAR_9->wait, VAR_7);

 VAR_10 = VAR_9->dead ? VAR_1 | VAR_0 : VAR_3 | VAR_5;
 if (VAR_9->head != VAR_9->tail)
  VAR_10 |= VAR_2 | VAR_4;

 return VAR_10;
}
