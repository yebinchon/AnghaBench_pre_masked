
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct event {int dummy; } ;
struct TYPE_3__ {int tick; } ;
typedef TYPE_1__ channel_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct event*) ;
 int FUNC_1 (struct event*,int (*) (int ,int ,struct event*),struct event*) ;

void
FUNC_2(channel_t *VAR_1, int VAR_2)
{
 static struct event VAR_3;

 if (VAR_2 == 0)
  VAR_1->tick = 0;
 else
  VAR_1->tick = (VAR_0 + VAR_2) % 60;

 if (VAR_0 == 0) {
  FUNC_1(&VAR_3, FUNC_0, &VAR_3);
  FUNC_0(0, 0, &VAR_3);
 }
}
