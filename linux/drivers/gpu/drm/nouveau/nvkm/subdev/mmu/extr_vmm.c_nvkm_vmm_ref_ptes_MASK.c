
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm_pt {int * refs; } ;
struct nvkm_vmm_iter {struct nvkm_vmm_pt** pt; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc {int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm_iter*,struct nvkm_vmm_pt*,struct nvkm_vmm_desc const*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nvkm_vmm_iter *VAR_1, bool VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct nvkm_vmm_desc *VAR_5 = VAR_1->desc;
 const int VAR_6 = VAR_5->type == VAR_0;
 struct nvkm_vmm_pt *VAR_7 = VAR_1->pt[0];


 VAR_7->refs[VAR_6] += VAR_4;


 if (VAR_5->type == VAR_0)
  FUNC_0(VAR_1, VAR_7, VAR_5, VAR_3, VAR_4);

 return 1;
}
