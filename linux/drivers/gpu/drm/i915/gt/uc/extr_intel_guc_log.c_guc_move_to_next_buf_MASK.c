
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int channel; } ;
struct intel_guc_log {TYPE_4__ relay; TYPE_3__* vma; } ;
struct TYPE_7__ {TYPE_2__* obj; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct intel_guc_log *VAR_0)
{




 FUNC_2();


 FUNC_1(VAR_0->relay.channel, VAR_0->vma->obj->base.size);


 FUNC_0(VAR_0->relay.channel);
}
