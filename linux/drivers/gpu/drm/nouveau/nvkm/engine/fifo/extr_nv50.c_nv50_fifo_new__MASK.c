
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_fifo_func {int dummy; } ;
struct nvkm_fifo {int mask; } ;
struct nvkm_device {int dummy; } ;
struct nv50_fifo {struct nvkm_fifo base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv50_fifo* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_fifo_func const*,struct nvkm_device*,int,int,struct nvkm_fifo*) ;
 int FUNC_2 (int,int ) ;

int
FUNC_3(const struct nvkm_fifo_func *VAR_2, struct nvkm_device *VAR_3,
        int VAR_4, struct nvkm_fifo **VAR_5)
{
 struct nv50_fifo *VAR_6;
 int VAR_7;

 if (!(VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1)))
  return -VAR_0;
 *VAR_5 = &VAR_6->base;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, 128, &VAR_6->base);
 if (VAR_7)
  return VAR_7;

 FUNC_2(0, VAR_6->base.mask);
 FUNC_2(127, VAR_6->base.mask);
 return 0;
}
