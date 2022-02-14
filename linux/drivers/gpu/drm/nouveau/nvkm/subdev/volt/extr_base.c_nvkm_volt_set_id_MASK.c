
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nvkm_volt {TYPE_1__* func; } ;
struct TYPE_2__ {int (* set_id ) (struct nvkm_volt*,int ,int) ;} ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_volt*) ;
 int FUNC_2 (struct nvkm_volt*,int ,int ) ;
 int FUNC_3 (struct nvkm_volt*,int) ;
 int FUNC_4 (struct nvkm_volt*,int ,int) ;

int
FUNC_5(struct nvkm_volt *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3,
   int VAR_4)
{
 int VAR_5;

 if (VAR_0->func->set_id)
  return VAR_0->func->set_id(VAR_0, VAR_1, VAR_4);

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_5 >= 0) {
  int VAR_6 = FUNC_1(VAR_0);
  if (!VAR_4 || VAR_6 < 0 ||
      (VAR_4 < 0 && VAR_5 < VAR_6) ||
      (VAR_4 > 0 && VAR_5 > VAR_6)) {
   int VAR_7 = FUNC_2(VAR_0, VAR_2, VAR_3);
   if (VAR_7 >= 0)
    VAR_5 = FUNC_0(VAR_7, VAR_5);
   VAR_5 = FUNC_3(VAR_0, VAR_5);
  } else {
   VAR_5 = 0;
  }
 }
 return VAR_5;
}
