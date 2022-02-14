
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_secboot {int dummy; } ;
struct nvkm_msgqueue {int dummy; } ;
struct nvkm_falcon {int dummy; } ;
struct msgqueue_0148cdec {struct nvkm_msgqueue base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msgqueue_0148cdec* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct nvkm_falcon*,struct nvkm_msgqueue*) ;

int
FUNC_2(struct nvkm_falcon *VAR_3, const struct nvkm_secboot *VAR_4,
        struct nvkm_msgqueue **VAR_5)
{
 struct msgqueue_0148cdec *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 *VAR_5 = &VAR_6->base;

 FUNC_1(&VAR_2, VAR_3, &VAR_6->base);

 return 0;
}
