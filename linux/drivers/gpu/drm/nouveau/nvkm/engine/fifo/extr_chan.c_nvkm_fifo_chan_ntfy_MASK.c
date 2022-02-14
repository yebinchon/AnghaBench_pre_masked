
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {TYPE_1__* func; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {int (* ntfy ) (struct nvkm_fifo_chan*,int ,struct nvkm_event**) ;} ;


 int VAR_0 ;
 struct nvkm_fifo_chan* FUNC_0 (struct nvkm_object*) ;
 int FUNC_1 (struct nvkm_fifo_chan*,int ,struct nvkm_event**) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_object *VAR_1, u32 VAR_2,
      struct nvkm_event **VAR_3)
{
 struct nvkm_fifo_chan *VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->func->ntfy)
  return VAR_4->func->ntfy(VAR_4, VAR_2, VAR_3);
 return -VAR_0;
}
