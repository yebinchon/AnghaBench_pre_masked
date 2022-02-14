
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int rad; } ;
struct radius {int port_id_type; TYPE_5__ cx; } ;
struct physical {TYPE_4__* dl; TYPE_1__* handler; } ;
struct TYPE_9__ {TYPE_3__* bundle; } ;
struct TYPE_8__ {int unit; TYPE_2__* iface; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int type; } ;






 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct physical*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct radius *VAR_7, struct physical *VAR_8)
{
  int VAR_9, VAR_10;

  VAR_10 = VAR_6;
  if (VAR_8->handler)
    switch (VAR_8->handler->type) {
      case 136:
        VAR_10 = VAR_3;
        break;

      case 129:
        VAR_10 = VAR_1;
        break;

      case 138:
        VAR_10 = VAR_2;
        break;

      case 130:
      case 128:
      case 137:
      case 139:
      case 135:
        VAR_10 = VAR_6;
        break;
    }

  if (FUNC_4(VAR_7->cx.rad, VAR_5, VAR_10) != 0) {
    FUNC_1(VAR_0, "rad_put: rad_put_int: %s\n", FUNC_5(VAR_7->cx.rad));
    FUNC_3(VAR_7->cx.rad);
    return 0;
  }

  switch (VAR_7->port_id_type) {
    case 132:
      VAR_9 = (int)FUNC_0();
      break;
    case 133:
      VAR_9 = VAR_8->dl->bundle->iface->index;
      break;
    case 131:
      VAR_9 = VAR_8->dl->bundle->unit;
      break;
    case 134:
    default:
      VAR_9 = FUNC_2(VAR_8);
      break;
  }

  if (VAR_9 >= 0)
    if (FUNC_4(VAR_7->cx.rad, VAR_4, VAR_9) != 0) {
      FUNC_1(VAR_0, "rad_put: rad_put_int: %s\n", FUNC_5(VAR_7->cx.rad));
      FUNC_3(VAR_7->cx.rad);
      return 0;
    }

  return 1;
}
