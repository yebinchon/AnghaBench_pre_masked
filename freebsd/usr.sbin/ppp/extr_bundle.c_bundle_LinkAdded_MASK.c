
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct datalink {scalar_t__ state; TYPE_1__* physical; } ;
struct TYPE_13__ {scalar_t__ state; } ;
struct TYPE_14__ {TYPE_6__ timer; } ;
struct TYPE_12__ {int all; int open; } ;
struct TYPE_11__ {scalar_t__ sessiontime; } ;
struct TYPE_9__ {scalar_t__ state; } ;
struct TYPE_10__ {TYPE_2__ timer; } ;
struct bundle {TYPE_7__ idle; TYPE_5__ phys_type; TYPE_4__ radius; TYPE_3__ session; } ;
struct TYPE_8__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bundle*,int ) ;
 int FUNC_1 (struct bundle*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bundle *VAR_4, struct datalink *VAR_5)
{
  VAR_4->phys_type.all |= VAR_5->physical->type;
  if (VAR_5->state == VAR_0)
    VAR_4->phys_type.open |= VAR_5->physical->type;


  if ((VAR_4->phys_type.open & (VAR_2|VAR_1))
      != VAR_4->phys_type.open && VAR_4->session.timer.state == VAR_3)
    if (VAR_4->radius.sessiontime)
      FUNC_1(VAR_4, 0);


  if ((VAR_4->phys_type.open & (VAR_2|VAR_1))
      != VAR_4->phys_type.open && VAR_4->idle.timer.state == VAR_3)

    FUNC_0(VAR_4, 0);
}
