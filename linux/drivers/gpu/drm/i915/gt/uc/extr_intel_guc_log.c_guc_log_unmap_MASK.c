
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * buf_addr; int lock; } ;
struct intel_guc_log {TYPE_2__ relay; TYPE_1__* vma; } ;
struct TYPE_3__ {int obj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_guc_log *VAR_0)
{
 FUNC_1(&VAR_0->relay.lock);

 FUNC_0(VAR_0->vma->obj);
 VAR_0->relay.buf_addr = ((void*)0);
}
