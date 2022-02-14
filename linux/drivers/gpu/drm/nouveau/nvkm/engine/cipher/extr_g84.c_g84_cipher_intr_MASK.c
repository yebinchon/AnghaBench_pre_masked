
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__* client; } ;
struct nvkm_fifo_chan {int chid; TYPE_2__ object; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {struct nvkm_fifo* fifo; } ;
typedef int msg ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,char*,int,int,char*,int,int) ;
 struct nvkm_fifo_chan* FUNC_1 (struct nvkm_fifo*,int,unsigned long*) ;
 int FUNC_2 (struct nvkm_fifo*,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_engine *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 struct nvkm_fifo *VAR_4 = VAR_3->fifo;
 struct nvkm_fifo_chan *VAR_5;
 u32 VAR_6 = FUNC_3(VAR_3, 0x102130);
 u32 VAR_7 = FUNC_3(VAR_3, 0x102190);
 u32 VAR_8 = FUNC_3(VAR_3, 0x102194);
 u32 VAR_9 = FUNC_3(VAR_3, 0x102188) & 0x7fffffff;
 unsigned long VAR_10;
 char VAR_11[128];

 VAR_5 = FUNC_1(VAR_4, (u64)VAR_9 << 12, &VAR_10);
 if (VAR_6) {
  FUNC_4(VAR_11, sizeof(VAR_11), VAR_0, VAR_6);
  FUNC_0(VAR_2, "%08x [%s] ch %d [%010llx %s] "
        "mthd %04x data %08x\n", VAR_6, VAR_11,
      VAR_5 ? VAR_5->chid : -1, (u64)VAR_9 << 12,
      VAR_5 ? VAR_5->object.client->name : "unknown",
      VAR_7, VAR_8);
 }
 FUNC_2(VAR_4, VAR_10, &VAR_5);

 FUNC_5(VAR_3, 0x102130, VAR_6);
 FUNC_5(VAR_3, 0x10200c, 0x10);
}
