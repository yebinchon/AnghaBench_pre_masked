
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_event {int dummy; } ;
struct nv50_disp_chan {struct nv50_disp* disp; } ;
struct nv50_disp {struct nvkm_event uevent; } ;


 int VAR_0 ;

 struct nv50_disp_chan* FUNC_0 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, u32 VAR_2,
      struct nvkm_event **VAR_3)
{
 struct nv50_disp_chan *VAR_4 = FUNC_0(VAR_1);
 struct nv50_disp *VAR_5 = VAR_4->disp;
 switch (VAR_2) {
 case 128:
  *VAR_3 = &VAR_5->uevent;
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
