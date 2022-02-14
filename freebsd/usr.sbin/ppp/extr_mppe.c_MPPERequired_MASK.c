
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct fsm {TYPE_7__* link; TYPE_4__* bundle; } ;
struct TYPE_13__ {int required; } ;
struct TYPE_14__ {TYPE_5__ mppe; } ;
struct TYPE_16__ {TYPE_6__ cfg; } ;
struct TYPE_15__ {TYPE_8__ ccp; } ;
struct TYPE_10__ {scalar_t__ policy; } ;
struct TYPE_9__ {scalar_t__* file; } ;
struct TYPE_11__ {TYPE_2__ mppe; TYPE_1__ cfg; } ;
struct TYPE_12__ {TYPE_3__ radius; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct fsm *VAR_1)
{





  if (*VAR_1->bundle->radius.cfg.file && VAR_1->bundle->radius.mppe.policy)
    return VAR_1->bundle->radius.mppe.policy == VAR_0 ? 1 : 0;


  return VAR_1->link->ccp.cfg.mppe.required;
}
