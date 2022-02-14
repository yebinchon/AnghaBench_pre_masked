
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_i2c_aux {int dummy; } ;
struct TYPE_2__ {int done; } ;
struct nvkm_dp {int present; TYPE_1__ lt; int outp; int dpcd; struct nvkm_i2c_aux* aux; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct nvkm_i2c_aux*,int) ;
 int FUNC_3 (struct nvkm_i2c_aux*,int ,int ,int) ;

__attribute__((used)) static bool
FUNC_4(struct nvkm_dp *VAR_1, bool VAR_2)
{
 struct nvkm_i2c_aux *VAR_3 = VAR_1->aux;

 if (VAR_2) {
  if (!VAR_1->present) {
   FUNC_0(&VAR_1->outp, "aux power -> always");
   FUNC_2(VAR_3, 1);
   VAR_1->present = 1;
  }

  if (!FUNC_3(VAR_3, VAR_0, VAR_1->dpcd,
    sizeof(VAR_1->dpcd)))
   return 1;
 }

 if (VAR_1->present) {
  FUNC_0(&VAR_1->outp, "aux power -> demand");
  FUNC_2(VAR_3, 0);
  VAR_1->present = 0;
 }

 FUNC_1(&VAR_1->lt.done, 0);
 return 0;
}
