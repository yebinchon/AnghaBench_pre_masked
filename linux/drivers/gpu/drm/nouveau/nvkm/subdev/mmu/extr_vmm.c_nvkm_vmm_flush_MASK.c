
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_vmm_iter {scalar_t__ flush; TYPE_2__* vmm; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {int (* flush ) (TYPE_2__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct nvkm_vmm_iter *VAR_1)
{
 if (VAR_1->flush != VAR_0) {
  if (VAR_1->vmm->func->flush) {
   FUNC_0(VAR_1, "flush: %d", VAR_1->flush);
   VAR_1->vmm->func->flush(VAR_1->vmm, VAR_1->flush);
  }
  VAR_1->flush = VAR_0;
 }
}
