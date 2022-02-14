
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmdargs {scalar_t__ argc; scalar_t__ argn; TYPE_2__* cx; TYPE_4__* bundle; } ;
struct TYPE_5__ {int all; } ;
struct TYPE_8__ {TYPE_1__ phys_type; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int * name; TYPE_3__* physical; } ;


 int FUNC_0 (struct cmdargs const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int *,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct cmdargs const *VAR_4)
{
  int VAR_5;

  if ((VAR_4->cx && !(VAR_4->cx->physical->type & (VAR_3|VAR_2)))
      || (!VAR_4->cx &&
          (VAR_4->bundle->phys_type.all & ~(VAR_3|VAR_2)))) {
    FUNC_2(VAR_0, "Manual dial is only available for auto and"
              " interactive links\n");
    return 1;
  }

  if (VAR_4->argc > VAR_4->argn && (VAR_5 = FUNC_0(VAR_4)) != 0)
    return VAR_5;

  FUNC_1(VAR_4->bundle, VAR_4->cx ? VAR_4->cx->name : ((void*)0), VAR_1, 1);

  return 0;
}
