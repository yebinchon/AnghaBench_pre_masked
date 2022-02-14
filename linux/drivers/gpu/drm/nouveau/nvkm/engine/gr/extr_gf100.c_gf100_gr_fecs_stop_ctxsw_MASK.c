
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gr {int dummy; } ;
struct TYPE_2__ {int mutex; int disable; } ;
struct gf100_gr {TYPE_1__ fecs; } ;


 scalar_t__ FUNC_0 (int) ;
 struct gf100_gr* FUNC_1 (struct nvkm_gr*) ;
 int FUNC_2 (struct gf100_gr*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct nvkm_gr *VAR_0)
{
 struct gf100_gr *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;

 FUNC_3(&VAR_1->fecs.mutex);
 if (!VAR_1->fecs.disable++) {
  if (FUNC_0(VAR_2 = FUNC_2(VAR_1, 0x38)))
   VAR_1->fecs.disable--;
 }
 FUNC_4(&VAR_1->fecs.mutex);
 return VAR_2;
}
