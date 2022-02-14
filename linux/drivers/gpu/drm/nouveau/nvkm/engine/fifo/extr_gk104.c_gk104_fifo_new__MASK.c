
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct gk104_fifo_func {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct gk104_fifo {struct nvkm_fifo base; TYPE_1__ recover; struct gk104_fifo_func const* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct gk104_fifo* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct nvkm_device*,int,int,struct nvkm_fifo*) ;

int
FUNC_3(const struct gk104_fifo_func *VAR_4, struct nvkm_device *VAR_5,
  int VAR_6, int VAR_7, struct nvkm_fifo **VAR_8)
{
 struct gk104_fifo *VAR_9;

 if (!(VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 VAR_9->func = VAR_4;
 FUNC_0(&VAR_9->recover.work, VAR_3);
 *VAR_8 = &VAR_9->base;

 return FUNC_2(&VAR_2, VAR_5, VAR_6, VAR_7, &VAR_9->base);
}
