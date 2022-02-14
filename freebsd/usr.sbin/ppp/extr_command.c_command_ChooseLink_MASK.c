
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


struct link {int dummy; } ;
struct datalink {TYPE_1__* physical; } ;
struct cmdargs {TYPE_7__* bundle; TYPE_3__* cx; } ;
struct TYPE_11__ {int mrru; } ;
struct TYPE_12__ {struct link link; TYPE_4__ cfg; } ;
struct TYPE_13__ {TYPE_5__ mp; } ;
struct TYPE_14__ {TYPE_6__ ncp; } ;
struct TYPE_10__ {TYPE_2__* physical; } ;
struct TYPE_9__ {struct link link; } ;
struct TYPE_8__ {struct link link; } ;


 struct datalink* FUNC_0 (TYPE_7__*,int *) ;

struct link *
FUNC_1(struct cmdargs const *VAR_0)
{
  if (VAR_0->cx)
    return &VAR_0->cx->physical->link;
  else if (!VAR_0->bundle->ncp.mp.cfg.mrru) {
    struct datalink *VAR_1 = FUNC_0(VAR_0->bundle, ((void*)0));
    if (VAR_1)
      return &VAR_1->physical->link;
  }
  return &VAR_0->bundle->ncp.mp.link;
}
