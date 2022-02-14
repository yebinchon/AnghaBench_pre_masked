
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nvif_mmu {int dummy; } ;
struct TYPE_3__ {int* type_host; int* type_ncoh; } ;
struct TYPE_4__ {struct nvif_mmu mmu; } ;
struct nouveau_drm {TYPE_1__ ttm; TYPE_2__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvif_mmu*,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_drm *VAR_4, u8 VAR_5)
{
 struct nvif_mmu *VAR_6 = &VAR_4->client.mmu;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2 | VAR_3 |
         VAR_5 | VAR_1);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_4->ttm.type_host[!!VAR_5] = VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2 | VAR_3 | VAR_5);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_4->ttm.type_ncoh[!!VAR_5] = VAR_7;
 return 0;
}
