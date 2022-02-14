
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv_device_v0 {unsigned long long device; } ;
struct TYPE_2__ {int object; } ;
struct nouveau_cli {struct nouveau_abi16* abi16; TYPE_1__ base; } ;
struct nouveau_abi16 {int device; int channels; } ;
struct drm_file {int dummy; } ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_abi16*) ;
 struct nouveau_abi16* FUNC_2 (int,int ) ;
 struct nouveau_cli* FUNC_3 (struct drm_file*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,struct nv_device_v0*,int,int *) ;

__attribute__((used)) static struct nouveau_abi16 *
FUNC_5(struct drm_file *VAR_2)
{
 struct nouveau_cli *VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3->abi16) {
  struct nouveau_abi16 *VAR_4;
  VAR_3->abi16 = VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
  if (VAR_3->abi16) {
   struct nv_device_v0 VAR_5 = {
    .device = ~0ULL,
   };

   FUNC_0(&VAR_4->channels);





   if (FUNC_4(&VAR_3->base.object, 0, VAR_1,
          &VAR_5, sizeof(VAR_5),
          &VAR_4->device) == 0)
    return VAR_3->abi16;

   FUNC_1(VAR_3->abi16);
   VAR_3->abi16 = ((void*)0);
  }
 }
 return VAR_3->abi16;
}
