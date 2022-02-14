
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_vmm_iter {scalar_t__ lvl; scalar_t__ max; int flush; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct nvkm_vmm_iter *VAR_0)
{
 VAR_0->flush = FUNC_0(VAR_0->flush, VAR_0->max - VAR_0->lvl);
}
