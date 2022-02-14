
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvif_sclass {scalar_t__ const oclass; } ;
struct nvif_object {int dummy; } ;
struct nvif_device {int dummy; } ;
struct nv50_chan {int user; struct nvif_device* device; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct nvif_object*,int ,scalar_t__ const,void*,int ,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct nvif_object*,struct nvif_sclass**) ;
 int FUNC_3 (struct nvif_sclass**) ;

__attribute__((used)) static int
FUNC_4(struct nvif_device *VAR_1, struct nvif_object *VAR_2,
   const s32 *VAR_3, u8 VAR_4, void *VAR_5, u32 VAR_6,
   struct nv50_chan *VAR_7)
{
 struct nvif_sclass *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7->device = VAR_1;

 VAR_9 = VAR_11 = FUNC_2(VAR_2, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 while (VAR_3[0]) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if (VAR_8[VAR_10].oclass == VAR_3[0]) {
    VAR_9 = FUNC_0(VAR_2, 0, VAR_3[0],
             VAR_5, VAR_6, &VAR_7->user);
    if (VAR_9 == 0)
     FUNC_1(&VAR_7->user, ((void*)0), 0);
    FUNC_3(&VAR_8);
    return VAR_9;
   }
  }
  VAR_3++;
 }

 FUNC_3(&VAR_8);
 return -VAR_0;
}
