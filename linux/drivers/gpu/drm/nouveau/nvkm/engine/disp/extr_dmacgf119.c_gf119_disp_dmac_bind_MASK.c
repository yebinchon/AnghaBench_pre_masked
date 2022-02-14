
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct TYPE_4__ {int user; } ;
struct nv50_disp_chan {TYPE_2__ chid; TYPE_1__* disp; } ;
struct TYPE_3__ {int ramht; } ;


 int FUNC_0 (int ,struct nvkm_object*,int,int,int ,int) ;

int
FUNC_1(struct nv50_disp_chan *VAR_0,
       struct nvkm_object *VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0->disp->ramht, VAR_1,
     VAR_0->chid.user, -9, VAR_2,
     VAR_0->chid.user << 27 | 0x00000001);
}
