
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_therm {int mode; int suspend; TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* fini ) (struct nvkm_therm*) ;} ;


 int VAR_0 ;
 struct nvkm_therm* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_therm*,int) ;
 int FUNC_2 (struct nvkm_therm*,int) ;
 int FUNC_3 (struct nvkm_therm*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_subdev *VAR_1, bool VAR_2)
{
 struct nvkm_therm *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->func->fini)
  VAR_3->func->fini(VAR_3);

 FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3, VAR_2);

 if (VAR_2) {
  VAR_3->suspend = VAR_3->mode;
  VAR_3->mode = VAR_0;
 }

 return 0;
}
