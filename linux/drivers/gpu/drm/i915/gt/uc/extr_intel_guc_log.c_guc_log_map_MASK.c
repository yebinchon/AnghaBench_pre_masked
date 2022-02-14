
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* buf_addr; int lock; } ;
struct intel_guc_log {TYPE_2__ relay; TYPE_1__* vma; } ;
struct TYPE_3__ {int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct intel_guc_log *VAR_2)
{
 void *VAR_3;

 FUNC_3(&VAR_2->relay.lock);

 if (!VAR_2->vma)
  return -VAR_0;






 VAR_3 = FUNC_2(VAR_2->vma->obj, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2->relay.buf_addr = VAR_3;

 return 0;
}
