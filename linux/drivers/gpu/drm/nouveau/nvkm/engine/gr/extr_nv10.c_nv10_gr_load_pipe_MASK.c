
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pipe_state {int pipe_0x0040; int pipe_0x0000; int pipe_0x4400; int pipe_0x7800; int pipe_0x7400; int pipe_0x7000; int pipe_0x6c00; int pipe_0x6800; int pipe_0x6400; int pipe_0x0200; } ;
struct nvkm_device {int dummy; } ;
struct nv10_gr_chan {struct pipe_state pipe_state; struct nv10_gr* gr; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct nv10_gr {TYPE_3__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nv10_gr*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct nvkm_device*,int ) ;
 int FUNC_3 (struct nvkm_device*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nv10_gr_chan *VAR_4)
{
 struct nv10_gr *VAR_5 = VAR_4->gr;
 struct pipe_state *VAR_6 = &VAR_4->pipe_state;
 struct nvkm_device *VAR_7 = VAR_5->base.engine.subdev.device;
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_1(&VAR_5->base);

 VAR_8 = FUNC_2(VAR_7, VAR_2);
 VAR_9 = FUNC_2(VAR_7, VAR_3);
 FUNC_3(VAR_7, VAR_2, 0x10000000);
 FUNC_3(VAR_7, VAR_3, 0x00000000);
 FUNC_3(VAR_7, VAR_0, 0x000064c0);
 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_3(VAR_7, VAR_1, 0x3f800000);
 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  FUNC_3(VAR_7, VAR_1, 0x00000000);

 FUNC_3(VAR_7, VAR_0, 0x00006ab0);
 for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  FUNC_3(VAR_7, VAR_1, 0x3f800000);

 FUNC_3(VAR_7, VAR_0, 0x00006a80);
 for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
  FUNC_3(VAR_7, VAR_1, 0x00000000);

 FUNC_3(VAR_7, VAR_0, 0x00000040);
 FUNC_3(VAR_7, VAR_1, 0x00000008);


 FUNC_0(VAR_5, VAR_6->pipe_0x0200, 0x0200);
 FUNC_1(&VAR_5->base);


 FUNC_3(VAR_7, VAR_2, VAR_8);
 FUNC_3(VAR_7, VAR_3, VAR_9);
 FUNC_0(VAR_5, VAR_6->pipe_0x6400, 0x6400);
 FUNC_0(VAR_5, VAR_6->pipe_0x6800, 0x6800);
 FUNC_0(VAR_5, VAR_6->pipe_0x6c00, 0x6c00);
 FUNC_0(VAR_5, VAR_6->pipe_0x7000, 0x7000);
 FUNC_0(VAR_5, VAR_6->pipe_0x7400, 0x7400);
 FUNC_0(VAR_5, VAR_6->pipe_0x7800, 0x7800);
 FUNC_0(VAR_5, VAR_6->pipe_0x4400, 0x4400);
 FUNC_0(VAR_5, VAR_6->pipe_0x0000, 0x0000);
 FUNC_0(VAR_5, VAR_6->pipe_0x0040, 0x0040);
 FUNC_1(&VAR_5->base);
}
