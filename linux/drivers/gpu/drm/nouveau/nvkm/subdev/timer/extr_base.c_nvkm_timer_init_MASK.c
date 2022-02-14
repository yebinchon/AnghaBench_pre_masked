
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_timer {TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* time ) (struct nvkm_timer*,int ) ;int (* init ) (struct nvkm_timer*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct nvkm_timer* FUNC_2 (struct nvkm_subdev*) ;
 int FUNC_3 (struct nvkm_timer*) ;
 int FUNC_4 (struct nvkm_timer*) ;
 int FUNC_5 (struct nvkm_timer*,int ) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_subdev *VAR_0)
{
 struct nvkm_timer *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->func->init)
  VAR_1->func->init(VAR_1);
 VAR_1->func->time(VAR_1, FUNC_1(FUNC_0()));
 FUNC_3(VAR_1);
 return 0;
}
