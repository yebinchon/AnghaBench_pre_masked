
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_therm {scalar_t__ suspend; TYPE_2__* fan; TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_4__ {int percent; } ;
struct TYPE_3__ {int (* init ) (struct nvkm_therm*) ;} ;


 struct nvkm_therm* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_therm*) ;
 int FUNC_2 (struct nvkm_therm*,scalar_t__) ;
 int FUNC_3 (struct nvkm_therm*,int,int ) ;
 int FUNC_4 (struct nvkm_therm*) ;
 int FUNC_5 (struct nvkm_therm*) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_subdev *VAR_0)
{
 struct nvkm_therm *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->func->init)
  VAR_1->func->init(VAR_1);

 if (VAR_1->suspend >= 0) {

  if (VAR_1->suspend > 0)
   FUNC_3(VAR_1, 1, VAR_1->fan->percent);

  FUNC_2(VAR_1, VAR_1->suspend);
 }

 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
