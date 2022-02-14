
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvc37b_window_imm_channel_dma_v0 {int pushbuf; int index; } ;
struct TYPE_6__ {int data; int wimm; } ;
struct nv50_wndw {int id; struct nv50_wimm_func const* immd; TYPE_3__ interlock; int wimm; } ;
struct nv50_wimm_func {int dummy; } ;
struct nv50_disp {TYPE_2__* disp; } ;
struct TYPE_4__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; int dev; } ;
typedef int s32 ;
typedef int args ;
struct TYPE_5__ {int object; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int) ;
 struct nv50_disp* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int ,struct nvc37b_window_imm_channel_dma_v0*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_3(const struct nv50_wimm_func *VAR_0, struct nouveau_drm *VAR_1,
        s32 VAR_2, struct nv50_wndw *VAR_3)
{
 struct nvc37b_window_imm_channel_dma_v0 VAR_4 = {
  .pushbuf = 0xb0007b00 | VAR_3->id,
  .index = VAR_3->id,
 };
 struct nv50_disp *VAR_5 = FUNC_1(VAR_1->dev);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_1->client.device, &VAR_5->disp->object,
          &VAR_2, 0, &VAR_4, sizeof(VAR_4), 0,
          &VAR_3->wimm);
 if (VAR_6) {
  FUNC_0(VAR_1, "wimm%04x allocation failed: %d\n", VAR_2, VAR_6);
  return VAR_6;
 }

 VAR_3->interlock.wimm = VAR_3->interlock.data;
 VAR_3->immd = VAR_0;
 return 0;
}
