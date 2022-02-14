
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fault_buffer {TYPE_1__* fault; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {struct nvkm_event event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nvkm_fault_buffer* FUNC_0 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_2, u32 VAR_3,
   struct nvkm_event **VAR_4)
{
 struct nvkm_fault_buffer *VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 == VAR_1) {
  *VAR_4 = &VAR_5->fault->event;
  return 0;
 }
 return -VAR_0;
}
