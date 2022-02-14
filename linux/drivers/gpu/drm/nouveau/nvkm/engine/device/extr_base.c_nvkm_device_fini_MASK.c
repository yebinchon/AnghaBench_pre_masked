
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_device {TYPE_1__* func; int therm; } ;
typedef int s64 ;
struct TYPE_2__ {int (* fini ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvkm_device*,char*,char const*,...) ;
 int FUNC_3 (struct nvkm_device*) ;
 struct nvkm_subdev* FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (struct nvkm_subdev*,char*,int) ;
 int FUNC_6 (struct nvkm_subdev*,int) ;
 int FUNC_7 (struct nvkm_subdev*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct nvkm_device*,int) ;

int
FUNC_10(struct nvkm_device *VAR_1, bool VAR_2)
{
 const char *VAR_3 = VAR_2 ? "suspend" : "fini";
 struct nvkm_subdev *VAR_4;
 int VAR_5, VAR_6;
 s64 VAR_7;

 FUNC_2(VAR_1, "%s running...\n", VAR_3);
 VAR_7 = FUNC_1(FUNC_0());

 FUNC_3(VAR_1);

 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
  if ((VAR_4 = FUNC_4(VAR_1, VAR_6))) {
   VAR_5 = FUNC_6(VAR_4, VAR_2);
   if (VAR_5 && VAR_2)
    goto fail;
  }
 }

 FUNC_8(VAR_1->therm, VAR_2);

 if (VAR_1->func->fini)
  VAR_1->func->fini(VAR_1, VAR_2);

 VAR_7 = FUNC_1(FUNC_0()) - VAR_7;
 FUNC_2(VAR_1, "%s completed in %lldus...\n", VAR_3, VAR_7);
 return 0;

fail:
 do {
  if ((VAR_4 = FUNC_4(VAR_1, VAR_6))) {
   int VAR_8 = FUNC_7(VAR_4);
   if (VAR_8)
    FUNC_5(VAR_4, "failed restart, %d\n", VAR_5);
  }
 } while (++VAR_6 < VAR_0);

 FUNC_2(VAR_1, "%s failed with %d\n", VAR_3, VAR_5);
 return VAR_5;
}
