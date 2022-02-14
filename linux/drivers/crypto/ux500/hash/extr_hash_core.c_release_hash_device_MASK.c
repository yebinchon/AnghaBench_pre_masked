
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hash_device_data {int ctx_lock; TYPE_1__* current_ctx; } ;
struct TYPE_4__ {int device_allocation; } ;
struct TYPE_3__ {int * device; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hash_device_data *VAR_1)
{
 FUNC_0(&VAR_1->ctx_lock);
 VAR_1->current_ctx->device = ((void*)0);
 VAR_1->current_ctx = ((void*)0);
 FUNC_1(&VAR_1->ctx_lock);





 FUNC_2(&VAR_0.device_allocation);
}
