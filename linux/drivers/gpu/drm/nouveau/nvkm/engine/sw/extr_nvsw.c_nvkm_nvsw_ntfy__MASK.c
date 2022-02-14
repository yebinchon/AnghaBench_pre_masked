
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_nvsw {TYPE_1__* chan; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {struct nvkm_event event; } ;


 int VAR_0 ;

 struct nvkm_nvsw* FUNC_0 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, u32 VAR_2,
  struct nvkm_event **VAR_3)
{
 struct nvkm_nvsw *VAR_4 = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 128:
  *VAR_3 = &VAR_4->chan->event;
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
