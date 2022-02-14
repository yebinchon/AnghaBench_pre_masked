
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct ps2dev {struct mutex cmd_mutex; TYPE_1__* serio; } ;
struct TYPE_2__ {scalar_t__ ps2_cmd_mutex; } ;


 int FUNC_0 (struct mutex*) ;

void FUNC_1(struct ps2dev *VAR_0)
{
 struct mutex *VAR_1 = VAR_0->serio->ps2_cmd_mutex ?: &VAR_0->cmd_mutex;

 FUNC_0(VAR_1);
}
