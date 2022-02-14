
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_fifo {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct gf100_fifo {struct nvkm_fifo base; TYPE_1__ recover; int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct gf100_fifo* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct nvkm_device*,int,int,struct nvkm_fifo*) ;

int
FUNC_4(struct nvkm_device *VAR_4, int VAR_5, struct nvkm_fifo **VAR_6)
{
 struct gf100_fifo *VAR_7;

 if (!(VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1)))
  return -VAR_0;
 FUNC_0(&VAR_7->chan);
 FUNC_1(&VAR_7->recover.work, VAR_3);
 *VAR_6 = &VAR_7->base;

 return FUNC_3(&VAR_2, VAR_4, VAR_5, 128, &VAR_7->base);
}
