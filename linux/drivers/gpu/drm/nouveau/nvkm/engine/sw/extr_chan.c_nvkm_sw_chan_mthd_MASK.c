
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_sw_chan {TYPE_1__* func; int event; } ;
struct TYPE_2__ {int (* mthd ) (struct nvkm_sw_chan*,int,int,int) ;} ;


 int FUNC_0 (int *,int,int ,int *,int ) ;
 int FUNC_1 (struct nvkm_sw_chan*,int,int,int) ;

bool
FUNC_2(struct nvkm_sw_chan *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 switch (VAR_2) {
 case 0x0000:
  return 1;
 case 0x0500:
  FUNC_0(&VAR_0->event, 1, 0, ((void*)0), 0);
  return 1;
 default:
  if (VAR_0->func->mthd)
   return VAR_0->func->mthd(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 }
 return 0;
}
