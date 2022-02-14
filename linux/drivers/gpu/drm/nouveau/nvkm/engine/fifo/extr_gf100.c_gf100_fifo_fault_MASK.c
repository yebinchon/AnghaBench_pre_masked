
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_8__ {TYPE_2__* client; } ;
struct nvkm_fifo_chan {int chid; TYPE_3__ object; } ;
struct nvkm_fifo {int dummy; } ;
struct nvkm_fault_data {int gpc; int inst; int reason; int client; int engine; int addr; scalar_t__ access; scalar_t__ hub; } ;
struct nvkm_enum {int data2; char* name; } ;
struct nvkm_engine {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct TYPE_9__ {TYPE_1__ engine; } ;
struct gf100_fifo {TYPE_4__ base; } ;
typedef int gpcid ;
struct TYPE_7__ {char* name; } ;





 struct gf100_fifo* FUNC_0 (struct nvkm_fifo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gf100_fifo*,struct nvkm_engine*,void*) ;
 int FUNC_2 (struct nvkm_device*) ;
 int FUNC_3 (struct nvkm_device*) ;
 struct nvkm_engine* FUNC_4 (struct nvkm_device*,int) ;
 struct nvkm_enum* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nvkm_subdev*,char*,char*,int ,int ,char*,int ,char*,char*,int ,char*,int,int ,char*) ;
 struct nvkm_fifo_chan* FUNC_7 (TYPE_4__*,int ,unsigned long*) ;
 int FUNC_8 (TYPE_4__*,unsigned long,struct nvkm_fifo_chan**) ;
 int FUNC_9 (struct nvkm_device*,int,int,int) ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct nvkm_fifo *VAR_4, struct nvkm_fault_data *VAR_5)
{
 struct gf100_fifo *VAR_6 = FUNC_0(VAR_4);
 struct nvkm_subdev *VAR_7 = &VAR_6->base.engine.subdev;
 struct nvkm_device *VAR_8 = VAR_7->device;
 const struct nvkm_enum *VAR_9, *VAR_10, *VAR_11;
 struct nvkm_engine *VAR_12 = ((void*)0);
 struct nvkm_fifo_chan *VAR_13;
 unsigned long VAR_14;
 char VAR_15[8] = "";

 VAR_9 = FUNC_5(VAR_3, VAR_5->reason);
 VAR_10 = FUNC_5(VAR_0, VAR_5->engine);
 if (VAR_5->hub) {
  VAR_11 = FUNC_5(VAR_2, VAR_5->client);
 } else {
  VAR_11 = FUNC_5(VAR_1, VAR_5->client);
  FUNC_10(VAR_15, sizeof(VAR_15), "GPC%d/", VAR_5->gpc);
 }

 if (VAR_10 && VAR_10->data2) {
  switch (VAR_10->data2) {
  case 129:
   FUNC_2(VAR_8);
   break;
  case 128:
   FUNC_3(VAR_8);
   break;
  case 130:
   FUNC_9(VAR_8, 0x001718, 0x00000000, 0x00000000);
   break;
  default:
   VAR_12 = FUNC_4(VAR_8, VAR_10->data2);
   break;
  }
 }

 VAR_13 = FUNC_7(&VAR_6->base, VAR_5->inst, &VAR_14);

 FUNC_6(VAR_7,
     "%s fault at %010llx engine %02x [%s] client %02x [%s%s] "
     "reason %02x [%s] on channel %d [%010llx %s]\n",
     VAR_5->access ? "write" : "read", VAR_5->addr,
     VAR_5->engine, VAR_10 ? VAR_10->name : "",
     VAR_5->client, VAR_15, VAR_11 ? VAR_11->name : "",
     VAR_5->reason, VAR_9 ? VAR_9->name : "", VAR_13 ? VAR_13->chid : -1,
     VAR_5->inst, VAR_13 ? VAR_13->object.client->name : "unknown");

 if (VAR_12 && VAR_13)
  FUNC_1(VAR_6, VAR_12, (void *)VAR_13);
 FUNC_8(&VAR_6->base, VAR_14, &VAR_13);
}
