
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uma_cache_t ;
struct TYPE_9__ {int ub_cnt; } ;
struct TYPE_8__ {int ub_cnt; } ;
struct TYPE_7__ {int ub_cnt; } ;
struct TYPE_6__ {TYPE_4__* uc_crossbucket; TYPE_3__* uc_freebucket; TYPE_2__* uc_allocbucket; } ;


 int FUNC_0 (char*,TYPE_2__*,int,TYPE_3__*,int,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_1(uma_cache_t VAR_0)
{
 FUNC_0("alloc: %p(%d), free: %p(%d), cross: %p(%d)j\n",
  VAR_0->uc_allocbucket,
  VAR_0->uc_allocbucket?VAR_0->uc_allocbucket->ub_cnt:0,
  VAR_0->uc_freebucket,
  VAR_0->uc_freebucket?VAR_0->uc_freebucket->ub_cnt:0,
  VAR_0->uc_crossbucket,
  VAR_0->uc_crossbucket?VAR_0->uc_crossbucket->ub_cnt:0);
}
