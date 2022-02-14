
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_fault_buffer {int id; int entries; unsigned long long addr; int mem; struct nvkm_fault* fault; } ;
struct nvkm_fault {TYPE_2__* func; struct nvkm_fault_buffer** buffer; struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {int entry_size; int (* info ) (struct nvkm_fault_buffer*) ;} ;
struct TYPE_4__ {TYPE_1__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvkm_fault_buffer* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int,int) ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (struct nvkm_device*,int ,int,int,int,int *) ;
 int FUNC_4 (struct nvkm_fault_buffer*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_fault *VAR_4, int VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_4->subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 struct nvkm_fault_buffer *VAR_8;
 int VAR_9;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2)))
  return -VAR_1;
 VAR_8->fault = VAR_4;
 VAR_8->id = VAR_5;
 VAR_4->func->buffer.info(VAR_8);
 VAR_4->buffer[VAR_5] = VAR_8;

 FUNC_1(VAR_6, "buffer %d: %d entries\n", VAR_5, VAR_8->entries);

 VAR_9 = FUNC_3(VAR_7, VAR_3, VAR_8->entries *
         VAR_4->func->buffer.entry_size, 0x1000, 1,
         &VAR_8->mem);
 if (VAR_9)
  return VAR_9;


 VAR_8->addr = FUNC_2(VAR_8->mem);
 if (VAR_8->addr == ~0ULL)
  return -VAR_0;

 return 0;
}
