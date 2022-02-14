
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_8__ {int tsg; int id; } ;
struct gk104_fifo_engine_status {int busy; int faulted; int chsw; int save; int load; TYPE_4__ next; TYPE_4__* chan; TYPE_4__ prev; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct TYPE_7__ {TYPE_2__ engine; } ;
struct gk104_fifo {TYPE_3__ base; TYPE_1__* engine; } ;
struct TYPE_5__ {struct nvkm_engine* engine; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,int,int,int,int,int,char*,int,char*,char*,int,char*) ;
 scalar_t__ FUNC_1 (struct nvkm_engine*) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_3(struct gk104_fifo *VAR_0, int VAR_1,
    struct gk104_fifo_engine_status *VAR_2)
{
 struct nvkm_engine *VAR_3 = VAR_0->engine[VAR_1].engine;
 struct nvkm_subdev *VAR_4 = &VAR_0->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = FUNC_2(VAR_5, 0x002640 + (VAR_1 * 0x08));

 VAR_2->busy = !!(VAR_6 & 0x80000000);
 VAR_2->faulted = !!(VAR_6 & 0x40000000);
 VAR_2->next.tsg = !!(VAR_6 & 0x10000000);
 VAR_2->next.id = (VAR_6 & 0x0fff0000) >> 16;
 VAR_2->chsw = !!(VAR_6 & 0x00008000);
 VAR_2->save = !!(VAR_6 & 0x00004000);
 VAR_2->load = !!(VAR_6 & 0x00002000);
 VAR_2->prev.tsg = !!(VAR_6 & 0x00001000);
 VAR_2->prev.id = (VAR_6 & 0x00000fff);
 VAR_2->chan = ((void*)0);

 if (VAR_2->busy && VAR_2->chsw) {
  if (VAR_2->load && VAR_2->save) {
   if (VAR_3 && FUNC_1(VAR_3))
    VAR_2->chan = &VAR_2->next;
   else
    VAR_2->chan = &VAR_2->prev;
  } else
  if (VAR_2->load) {
   VAR_2->chan = &VAR_2->next;
  } else {
   VAR_2->chan = &VAR_2->prev;
  }
 } else
 if (VAR_2->load) {
  VAR_2->chan = &VAR_2->prev;
 }

 FUNC_0(VAR_4, "engine %02d: busy %d faulted %d chsw %d "
      "save %d load %d %sid %d%s-> %sid %d%s\n",
     VAR_1, VAR_2->busy, VAR_2->faulted,
     VAR_2->chsw, VAR_2->save, VAR_2->load,
     VAR_2->prev.tsg ? "tsg" : "ch", VAR_2->prev.id,
     VAR_2->chan == &VAR_2->prev ? "*" : " ",
     VAR_2->next.tsg ? "tsg" : "ch", VAR_2->next.id,
     VAR_2->chan == &VAR_2->next ? "*" : " ");
}
