
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_msgqueue {int dummy; } ;
struct nvkm_falcon {TYPE_1__* owner; } ;
struct nvkm_device {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {int index; struct nvkm_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nvkm_falcon*,int *,int ,int,int ) ;
 int FUNC_2 (struct nvkm_falcon*) ;
 int FUNC_3 (struct nvkm_falcon*,int,int) ;
 int FUNC_4 (struct nvkm_device*,int ,int) ;
 int FUNC_5 (struct nvkm_msgqueue*) ;
 int FUNC_6 (struct nvkm_msgqueue*,int *) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_msgqueue *VAR_1,
    struct nvkm_falcon *VAR_2, u32 VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->owner->device;
 u8 VAR_5[VAR_0];

 FUNC_0(VAR_5, 0, sizeof(VAR_5));
 FUNC_6(VAR_1, VAR_5);
 FUNC_1(VAR_2, VAR_5, VAR_3, sizeof(VAR_5), 0);

 FUNC_5(VAR_1);


 FUNC_3(VAR_2, 0x10, 0xff);
 FUNC_4(VAR_4, VAR_2->owner->index, 1);


 FUNC_2(VAR_2);

 return 0;
}
