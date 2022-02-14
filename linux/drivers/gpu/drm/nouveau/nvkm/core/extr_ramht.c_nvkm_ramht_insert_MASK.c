
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_ramht {size_t size; TYPE_1__* data; } ;
struct nvkm_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ chid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct nvkm_ramht*,int,size_t) ;
 scalar_t__ FUNC_1 (struct nvkm_ramht*,int,size_t) ;
 int FUNC_2 (struct nvkm_ramht*,size_t,struct nvkm_object*,int,int,size_t,size_t) ;

int
FUNC_3(struct nvkm_ramht *VAR_2, struct nvkm_object *VAR_3,
    int VAR_4, int VAR_5, u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (FUNC_1(VAR_2, VAR_4, VAR_6))
  return -VAR_0;

 VAR_8 = VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_6);
 do {
  if (VAR_2->data[VAR_8].chid < 0) {
   return FUNC_2(VAR_2, VAR_8, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7);
  }

  if (++VAR_8 >= VAR_2->size)
   VAR_8 = 0;
 } while (VAR_8 != VAR_9);

 return -VAR_1;
}
