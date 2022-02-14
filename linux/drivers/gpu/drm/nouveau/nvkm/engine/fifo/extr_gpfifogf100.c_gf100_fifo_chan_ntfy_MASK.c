
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_fifo_chan {TYPE_1__* fifo; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {struct nvkm_event kevent; struct nvkm_event uevent; } ;


 int VAR_0 ;



int
FUNC_0(struct nvkm_fifo_chan *VAR_1, u32 VAR_2,
       struct nvkm_event **VAR_3)
{
 switch (VAR_2) {
 case 128:
  *VAR_3 = &VAR_1->fifo->uevent;
  return 0;
 case 129:
  *VAR_3 = &VAR_1->fifo->kevent;
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
