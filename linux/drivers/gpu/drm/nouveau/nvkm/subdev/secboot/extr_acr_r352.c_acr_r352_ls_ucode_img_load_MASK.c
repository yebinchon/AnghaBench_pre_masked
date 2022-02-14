
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_secboot {int dummy; } ;
struct ls_ucode_img {int falcon_id; int sig_size; struct ls_ucode_img_r352* sig; struct ls_ucode_img_r352* ucode_data; } ;
struct TYPE_8__ {int falcon_id; } ;
struct TYPE_7__ {TYPE_4__ signature; } ;
struct ls_ucode_img_r352 {struct ls_ucode_img base; TYPE_3__ lsb_header; int func; } ;
struct acr_r352_ls_func {int (* load ) (struct nvkm_secboot const*,int ,struct ls_ucode_img*) ;int * version; int version_max; } ;
struct TYPE_5__ {struct nvkm_subdev* subdev; } ;
struct acr_r352 {TYPE_2__* func; TYPE_1__ base; } ;
typedef enum nvkm_secboot_falcon { ____Placeholder_nvkm_secboot_falcon } nvkm_secboot_falcon ;
struct TYPE_6__ {struct acr_r352_ls_func** ls_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ls_ucode_img* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ls_ucode_img_r352*) ;
 struct ls_ucode_img_r352* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_4__*,struct ls_ucode_img_r352*,int) ;
 int FUNC_4 (struct nvkm_subdev const*,char*,int ) ;
 int * VAR_3 ;
 int FUNC_5 (struct nvkm_secboot const*,int ,struct ls_ucode_img*) ;

struct ls_ucode_img *
FUNC_6(const struct acr_r352 *VAR_4,
      const struct nvkm_secboot *VAR_5,
      enum nvkm_secboot_falcon VAR_6)
{
 const struct nvkm_subdev *VAR_7 = VAR_4->base.subdev;
 const struct acr_r352_ls_func *VAR_8 = VAR_4->func->ls_func[VAR_6];
 struct ls_ucode_img_r352 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->base.falcon_id = VAR_6;

 VAR_10 = VAR_8->load(VAR_5, VAR_8->version_max, &VAR_9->base);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9->base.ucode_data);
  FUNC_1(VAR_9->base.sig);
  FUNC_1(VAR_9);
  return FUNC_0(VAR_10);
 }

 VAR_9->func = VAR_8->version[VAR_10];


 if (VAR_9->base.sig_size != sizeof(VAR_9->lsb_header.signature)) {
  FUNC_4(VAR_7, "invalid signature size for %s falcon!\n",
      VAR_3[VAR_6]);
  return FUNC_0(-VAR_0);
 }


 FUNC_3(&VAR_9->lsb_header.signature, VAR_9->base.sig, VAR_9->base.sig_size);


 VAR_9->lsb_header.signature.falcon_id = VAR_6;

 return &VAR_9->base;
}
