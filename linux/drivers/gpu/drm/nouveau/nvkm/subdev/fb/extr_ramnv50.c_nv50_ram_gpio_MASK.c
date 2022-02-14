
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct nvkm_gpio {int dummy; } ;
struct TYPE_6__ {TYPE_2__* subdev; } ;
struct nv50_ramseq {TYPE_3__ base; } ;
struct dcb_gpio_func {int line; int* log; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct nvkm_gpio* gpio; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_gpio*,int ,int ,int ,struct dcb_gpio_func*) ;
 size_t FUNC_1 (struct nvkm_gpio*,int ,int ,int ) ;
 int FUNC_2 (struct nv50_ramseq*,struct nvkm_gpio,int,size_t) ;
 int FUNC_3 (struct nv50_ramseq*,int) ;
 size_t FUNC_4 (struct nv50_ramseq*,struct nvkm_gpio) ;

__attribute__((used)) static void
FUNC_5(struct nv50_ramseq *VAR_1, u8 VAR_2, u32 VAR_3)
{
 struct nvkm_gpio *VAR_4 = VAR_1->base.subdev->device->gpio;
 struct dcb_gpio_func VAR_5;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4, 0, VAR_2, VAR_0) != VAR_3) {
  VAR_9 = FUNC_0(VAR_4, 0, VAR_2, VAR_0, &VAR_5);
  if (VAR_9)
   return;

  VAR_6 = VAR_5.line >> 3;
  VAR_7 = (VAR_5.line & 0x7) << 2;
  VAR_8 = FUNC_4(VAR_1, VAR_4[VAR_6]);

  if (VAR_8 & (8 << VAR_7))
   VAR_3 = !VAR_3;
  if (!(VAR_5.log[1] & 1))
   VAR_3 = !VAR_3;

  FUNC_2(VAR_1, VAR_4[VAR_6], (0x3 << VAR_7), ((VAR_3 | 0x2) << VAR_7));
  FUNC_3(VAR_1, 20000);
 }
}
