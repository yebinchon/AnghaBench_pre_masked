
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_fault_buffer {TYPE_3__* fault; } ;
struct TYPE_6__ {TYPE_2__* func; } ;
struct TYPE_4__ {int (* init ) (struct nvkm_fault_buffer*) ;} ;
struct TYPE_5__ {TYPE_1__ buffer; } ;


 struct nvkm_fault_buffer* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_fault_buffer*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_0)
{
 struct nvkm_fault_buffer *VAR_1 = FUNC_0(VAR_0);
 VAR_1->fault->func->buffer.init(VAR_1);
 return 0;
}
