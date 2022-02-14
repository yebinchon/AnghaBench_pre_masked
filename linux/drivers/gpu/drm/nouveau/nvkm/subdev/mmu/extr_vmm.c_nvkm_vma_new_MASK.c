
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct nvkm_vma {void* refd; void* page; void* size; void* addr; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct nvkm_vma* FUNC_0 (int,int ) ;

__attribute__((used)) static inline struct nvkm_vma *
FUNC_1(u64 VAR_2, u64 VAR_3)
{
 struct nvkm_vma *VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  VAR_4->addr = VAR_2;
  VAR_4->size = VAR_3;
  VAR_4->page = VAR_1;
  VAR_4->refd = VAR_1;
 }
 return VAR_4;
}
