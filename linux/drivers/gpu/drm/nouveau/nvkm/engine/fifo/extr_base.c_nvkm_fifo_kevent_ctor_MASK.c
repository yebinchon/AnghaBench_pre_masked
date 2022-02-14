
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_notify {int types; int index; scalar_t__ size; } ;
struct nvkm_fifo_chan {int chid; } ;


 int VAR_0 ;
 struct nvkm_fifo_chan* FUNC_0 (struct nvkm_object*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_1, void *VAR_2, u32 VAR_3,
        struct nvkm_notify *VAR_4)
{
 struct nvkm_fifo_chan *VAR_5 = FUNC_0(VAR_1);
 if (VAR_3 == 0) {
  VAR_4->size = 0;
  VAR_4->types = 1;
  VAR_4->index = VAR_5->chid;
  return 0;
 }
 return -VAR_0;
}
