
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_i2c_aux {int dummy; } ;
struct TYPE_10__ {int link_bw; int link_nr; int mstm; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct nouveau_encoder {TYPE_5__ dp; TYPE_4__* dcb; struct nvkm_i2c_aux* aux; TYPE_2__ base; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int dpcd ;
struct TYPE_8__ {int link_nr; int link_bw; } ;
struct TYPE_9__ {TYPE_3__ dpconf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int,...) ;
 int FUNC_1 (struct drm_device*,struct nvkm_i2c_aux*,int*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (struct nvkm_i2c_aux*,int ,int*,int) ;

int
FUNC_5(struct nouveau_encoder *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->base.base.dev;
 struct nouveau_drm *VAR_8 = FUNC_2(VAR_7);
 struct nvkm_i2c_aux *VAR_9;
 u8 VAR_10[8];
 int VAR_11;

 VAR_9 = VAR_6->aux;
 if (!VAR_9)
  return -VAR_2;

 VAR_11 = FUNC_4(VAR_9, VAR_0, VAR_10, sizeof(VAR_10));
 if (VAR_11)
  return VAR_11;

 VAR_6->dp.link_bw = 27000 * VAR_10[1];
 VAR_6->dp.link_nr = VAR_10[2] & VAR_1;

 FUNC_0(VAR_8, "display: %dx%d dpcd 0x%02x\n",
       VAR_6->dp.link_nr, VAR_6->dp.link_bw, VAR_10[0]);
 FUNC_0(VAR_8, "encoder: %dx%d\n",
       VAR_6->dcb->dpconf.link_nr,
       VAR_6->dcb->dpconf.link_bw);

 if (VAR_6->dcb->dpconf.link_nr < VAR_6->dp.link_nr)
  VAR_6->dp.link_nr = VAR_6->dcb->dpconf.link_nr;
 if (VAR_6->dcb->dpconf.link_bw < VAR_6->dp.link_bw)
  VAR_6->dp.link_bw = VAR_6->dcb->dpconf.link_bw;

 FUNC_0(VAR_8, "maximum: %dx%d\n",
       VAR_6->dp.link_nr, VAR_6->dp.link_bw);

 FUNC_1(VAR_7, VAR_9, VAR_10);

 VAR_11 = FUNC_3(VAR_6->dp.mstm, VAR_10, VAR_5);
 if (VAR_11 == 1)
  return VAR_3;
 if (VAR_11 == 0)
  return VAR_4;
 return VAR_11;
}
