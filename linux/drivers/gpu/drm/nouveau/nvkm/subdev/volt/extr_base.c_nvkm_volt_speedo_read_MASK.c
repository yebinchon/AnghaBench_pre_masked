
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_volt {TYPE_1__* func; } ;
struct TYPE_2__ {int (* speedo_read ) (struct nvkm_volt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_volt*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_volt *VAR_1)
{
 if (VAR_1->func->speedo_read)
  return VAR_1->func->speedo_read(VAR_1);
 return -VAR_0;
}
