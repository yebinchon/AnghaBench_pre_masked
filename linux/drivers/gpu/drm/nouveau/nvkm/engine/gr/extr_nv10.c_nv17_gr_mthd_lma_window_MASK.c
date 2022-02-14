
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pipe_state {int* pipe_0x0200; int* pipe_0x4400; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_7__ {TYPE_2__* engine; } ;
struct nv10_gr_chan {int* lma_window; struct pipe_state pipe_state; TYPE_4__* gr; TYPE_3__ object; } ;
struct TYPE_8__ {struct nvkm_gr base; } ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct TYPE_6__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_device*,int*,int) ;
 int FUNC_1 (struct nvkm_device*,int*,int) ;
 int FUNC_2 (struct nvkm_gr*) ;
 int FUNC_3 (struct nvkm_device*,int ) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct nv10_gr_chan *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_4->object.engine->subdev.device;
 struct nvkm_gr *VAR_8 = &VAR_4->gr->base;
 struct pipe_state *VAR_9 = &VAR_4->pipe_state;
 u32 VAR_10[1], VAR_11[8], VAR_12[3], VAR_13[3];
 u32 VAR_14, VAR_15;
 int VAR_16;

 VAR_4->lma_window[(VAR_5 - 0x1638) / 4] = VAR_6;

 if (VAR_5 != 0x1644)
  return;

 FUNC_2(VAR_8);

 FUNC_1(VAR_7, VAR_10, 0x0040);
 FUNC_1(VAR_7, VAR_9->pipe_0x0200, 0x0200);

 FUNC_0(VAR_7, VAR_4->lma_window, 0x6790);

 FUNC_2(VAR_8);

 VAR_14 = FUNC_3(VAR_7, VAR_2);
 VAR_15 = FUNC_3(VAR_7, VAR_3);

 FUNC_1(VAR_7, VAR_9->pipe_0x4400, 0x4400);
 FUNC_1(VAR_7, VAR_11, 0x64c0);
 FUNC_1(VAR_7, VAR_13, 0x6ab0);
 FUNC_1(VAR_7, VAR_12, 0x6a80);

 FUNC_2(VAR_8);

 FUNC_4(VAR_7, VAR_2, 0x10000000);
 FUNC_4(VAR_7, VAR_3, 0x00000000);
 FUNC_4(VAR_7, VAR_0, 0x000064c0);
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
  FUNC_4(VAR_7, VAR_1, 0x3f800000);
 for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
  FUNC_4(VAR_7, VAR_1, 0x00000000);

 FUNC_4(VAR_7, VAR_0, 0x00006ab0);
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
  FUNC_4(VAR_7, VAR_1, 0x3f800000);

 FUNC_4(VAR_7, VAR_0, 0x00006a80);
 for (VAR_16 = 0; VAR_16 < 3; VAR_16++)
  FUNC_4(VAR_7, VAR_1, 0x00000000);

 FUNC_4(VAR_7, VAR_0, 0x00000040);
 FUNC_4(VAR_7, VAR_1, 0x00000008);

 FUNC_0(VAR_7, VAR_9->pipe_0x0200, 0x0200);

 FUNC_2(VAR_8);

 FUNC_0(VAR_7, VAR_10, 0x0040);

 FUNC_4(VAR_7, VAR_2, VAR_14);
 FUNC_4(VAR_7, VAR_3, VAR_15);

 FUNC_0(VAR_7, VAR_11, 0x64c0);
 FUNC_0(VAR_7, VAR_13, 0x6ab0);
 FUNC_0(VAR_7, VAR_12, 0x6a80);
 FUNC_0(VAR_7, VAR_9->pipe_0x4400, 0x4400);

 FUNC_4(VAR_7, VAR_0, 0x000000c0);
 FUNC_4(VAR_7, VAR_1, 0x00000000);

 FUNC_2(VAR_8);
}
