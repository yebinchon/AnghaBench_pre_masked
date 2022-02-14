
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int run; int packetmode; } ;
struct TYPE_10__ {int max; } ;
struct TYPE_8__ {int max; } ;
struct TYPE_11__ {TYPE_4__ dial; TYPE_2__ reconnect; } ;
struct TYPE_9__ {int tries; } ;
struct datalink {int state; TYPE_6__ script; TYPE_5__ cfg; TYPE_3__ dial; TYPE_1__* physical; int reconnect_tries; int bundle; } ;
struct TYPE_7__ {int type; } ;


 int VAR_0 ;





 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct datalink*,int) ;

void
FUNC_4(struct datalink *VAR_7, int VAR_8, int VAR_9)
{
  if (!FUNC_0(VAR_7->bundle, VAR_1) &&
      (VAR_7->physical->type & (VAR_6|VAR_5)))

    VAR_8 = 0;

  switch (VAR_7->state) {
    case 132:
      if (FUNC_2(VAR_7->bundle) == VAR_2 ||
          FUNC_2(VAR_7->bundle) == VAR_4)
        FUNC_1(VAR_7->bundle, VAR_3);
      FUNC_3(VAR_7, 129);
      VAR_7->reconnect_tries =
        VAR_7->physical->type == VAR_6 ? 0 : VAR_7->cfg.reconnect.max;
      VAR_7->dial.tries = VAR_7->cfg.dial.max;
      VAR_7->script.run = VAR_8;
      VAR_7->script.packetmode = VAR_9;
      break;

    case 129:
      if (!VAR_7->script.run && VAR_8)
        VAR_7->script.run = 1;


    case 131:
    case 130:
    case 128:
      if (!VAR_7->script.packetmode && VAR_9) {
        VAR_7->script.packetmode = 1;
        if (VAR_7->state == 128) {
          VAR_7->script.run = 0;
          FUNC_3(VAR_7, VAR_0);
        }
      }
      break;
  }
}
