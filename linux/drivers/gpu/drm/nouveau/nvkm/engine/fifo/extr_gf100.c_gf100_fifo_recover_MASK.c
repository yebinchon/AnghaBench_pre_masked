
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {size_t index; struct nvkm_device* device; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {int chid; } ;
struct gf100_fifo_chan {int killed; int head; TYPE_1__ base; } ;
struct TYPE_6__ {struct nvkm_engine engine; int lock; } ;
struct TYPE_5__ {unsigned long long mask; int work; } ;
struct gf100_fifo {TYPE_3__ base; TYPE_2__ recover; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_subdev*,char*,int ,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int * VAR_0 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct gf100_fifo *VAR_1, struct nvkm_engine *VAR_2,
     struct gf100_fifo_chan *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_5 = VAR_4->device;
 u32 VAR_6 = VAR_3->base.chid;

 FUNC_2(VAR_4, "%s engine fault on channel %d, recovering...\n",
     VAR_0[VAR_2->subdev.index], VAR_6);
 FUNC_0(&VAR_1->base.lock);

 FUNC_4(VAR_5, 0x003004 + (VAR_6 * 0x08), 0x00000001, 0x00000000);
 FUNC_1(&VAR_3->head);
 VAR_3->killed = 1;

 if (VAR_2 != &VAR_1->base.engine)
  VAR_1->recover.mask |= 1ULL << VAR_2->subdev.index;
 FUNC_5(&VAR_1->recover.work);
 FUNC_3(&VAR_1->base, VAR_6);
}
