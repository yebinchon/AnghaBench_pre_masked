
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; int data; } ;
struct nvkm_hwsq {TYPE_1__ c; int data; int addr; struct nvkm_subdev* subdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_hwsq* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;

int
FUNC_2(struct nvkm_subdev *VAR_2, struct nvkm_hwsq **VAR_3)
{
 struct nvkm_hwsq *VAR_4;

 VAR_4 = *VAR_3 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (VAR_4) {
  VAR_4->subdev = VAR_2;
  VAR_4->addr = ~0;
  VAR_4->data = ~0;
  FUNC_1(VAR_4->c.data, 0x7f, sizeof(VAR_4->c.data));
  VAR_4->c.size = 0;
 }

 return VAR_4 ? 0 : -VAR_0;
}
