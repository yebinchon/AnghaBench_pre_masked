
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct nouveau_svm_fault_buffer {int notify; void* put; void* get; int putaddr; int getaddr; } ;
struct nouveau_svm {TYPE_3__* drm; struct nouveau_svm_fault_buffer* buffer; } ;
struct TYPE_4__ {struct nvif_object object; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__ client; } ;


 int FUNC_0 (struct nouveau_svm*,char*,void*,void*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct nvif_object*,int ) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_svm *VAR_0, int VAR_1)
{
 struct nouveau_svm_fault_buffer *VAR_2 = &VAR_0->buffer[VAR_1];
 struct nvif_object *VAR_3 = &VAR_0->drm->client.device.object;
 VAR_2->get = FUNC_2(VAR_3, VAR_2->getaddr);
 VAR_2->put = FUNC_2(VAR_3, VAR_2->putaddr);
 FUNC_0(VAR_0, "get %08x put %08x (init)", VAR_2->get, VAR_2->put);
 return FUNC_1(&VAR_2->notify);
}
