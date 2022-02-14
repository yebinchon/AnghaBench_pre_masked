
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int handle; TYPE_2__* engine; } ;
struct nvkm_fifo_chan {int dummy; } ;
struct nv50_fifo_chan {int ramht; } ;
struct TYPE_3__ {int index; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 struct nv50_fifo_chan* FUNC_1 (struct nvkm_fifo_chan*) ;
 int FUNC_2 (int ,struct nvkm_object*,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_fifo_chan *VAR_1,
      struct nvkm_object *VAR_2)
{
 struct nv50_fifo_chan *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = VAR_2->handle;
 u32 VAR_5;

 switch (VAR_2->engine->subdev.index) {
 case 131:
 case 128 : VAR_5 = 0x00000000; break;
 case 130 : VAR_5 = 0x00100000; break;
 case 129 : VAR_5 = 0x00200000; break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 return FUNC_2(VAR_3->ramht, VAR_2, 0, 4, VAR_4, VAR_5);
}
