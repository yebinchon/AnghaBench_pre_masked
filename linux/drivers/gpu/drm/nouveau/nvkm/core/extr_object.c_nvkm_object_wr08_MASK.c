
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct nvkm_object {TYPE_1__* func; } ;
struct TYPE_2__ {int (* wr08 ) (struct nvkm_object*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (struct nvkm_object*,int ,int )) ;
 int FUNC_1 (struct nvkm_object*,int ,int ) ;

int
FUNC_2(struct nvkm_object *VAR_1, u64 VAR_2, u8 VAR_3)
{
 if (FUNC_0(VAR_1->func->wr08))
  return VAR_1->func->wr08(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
