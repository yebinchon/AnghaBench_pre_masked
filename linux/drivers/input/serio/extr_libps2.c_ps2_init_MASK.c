
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int depth; } ;
struct ps2dev {struct serio* serio; int wait; int cmd_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ps2dev *VAR_0, struct serio *VAR_1)
{
 FUNC_2(&VAR_0->cmd_mutex);
 FUNC_1(&VAR_0->cmd_mutex, VAR_1->depth);
 FUNC_0(&VAR_0->wait);
 VAR_0->serio = VAR_1;
}
