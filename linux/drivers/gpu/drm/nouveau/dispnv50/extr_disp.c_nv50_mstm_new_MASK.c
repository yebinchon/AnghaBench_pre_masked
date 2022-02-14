
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int * cbs; } ;
struct nv50_mstm {int * msto; TYPE_4__ mgr; struct nouveau_encoder* outp; } ;
struct TYPE_6__ {int name; struct drm_device* dev; } ;
struct TYPE_7__ {TYPE_2__ base; } ;
struct nouveau_encoder {TYPE_3__ base; TYPE_1__* dcb; } ;
struct drm_dp_aux {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_5__ {int heads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,struct drm_device*,struct drm_dp_aux*,int,int const,int) ;
 int FUNC_3 (int ) ;
 struct nv50_mstm* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct drm_device*,int ,int ,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct nouveau_encoder *VAR_5, struct drm_dp_aux *VAR_6, int VAR_7,
       int VAR_8, struct nv50_mstm **VAR_9)
{
 const int VAR_10 = FUNC_3(VAR_5->dcb->heads);
 struct drm_device *VAR_11 = VAR_5->base.base.dev;
 struct nv50_mstm *VAR_12;
 int VAR_13, VAR_14;
 u8 VAR_15;







 VAR_13 = FUNC_0(VAR_6, VAR_0, &VAR_15);
 if (VAR_13 >= 0 && VAR_15 >= 0x12)
  FUNC_1(VAR_6, VAR_1, 0);

 if (!(VAR_12 = *VAR_9 = FUNC_4(sizeof(*VAR_12), VAR_3)))
  return -VAR_2;
 VAR_12->outp = VAR_5;
 VAR_12->mgr.cbs = &VAR_4;

 VAR_13 = FUNC_2(&VAR_12->mgr, VAR_11, VAR_6, VAR_7,
        VAR_10, VAR_8);
 if (VAR_13)
  return VAR_13;

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_13 = FUNC_5(VAR_11, VAR_5->dcb->heads, VAR_5->base.base.name,
        VAR_14, &VAR_12->msto[VAR_14]);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
