
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ run; } ;
struct datalink {scalar_t__ state; scalar_t__ reconnect_tries; TYPE_2__* physical; TYPE_1__ script; } ;
struct TYPE_4__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct datalink*,int,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

int
FUNC_2(struct datalink *VAR_6, int VAR_7)
{
  if (!FUNC_1(VAR_6->physical, VAR_7))
    return 0;
  if (VAR_6->physical->type & (VAR_4|VAR_3))
    VAR_6->script.run = 0;
  if (VAR_6->physical->type == VAR_4)
    VAR_6->reconnect_tries = 0;
  if (VAR_7 & (VAR_2|VAR_1|VAR_5) &&
      VAR_6->state <= VAR_0)
    FUNC_0(VAR_6, 1, 1);
  return 1;
}
