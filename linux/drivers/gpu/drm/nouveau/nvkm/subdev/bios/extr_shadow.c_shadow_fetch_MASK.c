
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct shadow {TYPE_1__* func; void* data; } ;
struct nvkm_bios {int size; } ;
struct TYPE_2__ {int (* read ) (void*,int const,int const,struct nvkm_bios*) ;} ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,int const) ;
 int FUNC_1 (void*,int const,int const,struct nvkm_bios*) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_bios *VAR_0, struct shadow *VAR_1, u32 VAR_2)
{
 const u32 VAR_3 = (VAR_2 + 3) & ~3;
 const u32 VAR_4 = VAR_0->size;
 void *VAR_5 = VAR_1->data;
 if (FUNC_0(VAR_0, VAR_3) > 0) {
  u32 VAR_6 = VAR_1->func->read(VAR_5, VAR_4, VAR_3 - VAR_4, VAR_0);
  VAR_0->size = VAR_4 + VAR_6;
 }
 return VAR_0->size >= VAR_2;
}
