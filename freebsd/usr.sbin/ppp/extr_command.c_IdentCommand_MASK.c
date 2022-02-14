
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cmdargs {scalar_t__ argn; scalar_t__ argv; scalar_t__ argc; TYPE_5__* cx; } ;
struct TYPE_10__ {TYPE_4__* physical; } ;
struct TYPE_6__ {int ident; } ;
struct TYPE_7__ {TYPE_1__ cfg; } ;
struct TYPE_8__ {TYPE_2__ lcp; } ;
struct TYPE_9__ {TYPE_3__ link; } ;


 int FUNC_0 (int ,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct cmdargs const *VAR_0)
{
  FUNC_0(VAR_0->cx->physical->link.lcp.cfg.ident,
              sizeof VAR_0->cx->physical->link.lcp.cfg.ident,
              VAR_0->argc - VAR_0->argn, VAR_0->argv + VAR_0->argn);
  return 0;
}
