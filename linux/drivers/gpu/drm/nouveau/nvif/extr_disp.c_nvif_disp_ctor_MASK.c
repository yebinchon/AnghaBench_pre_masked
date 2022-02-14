
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvif_mclass {int member_1; int oclass; int member_0; } ;
struct TYPE_2__ {int * client; } ;
struct nvif_disp {TYPE_1__ object; } ;
struct nvif_device {int object; } ;
typedef int s32 ;
 int FUNC_0 (int *,int ,int ,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,struct nvif_mclass const*,int ) ;

int
FUNC_2(struct nvif_device *VAR_0, s32 VAR_1, struct nvif_disp *VAR_2)
{
 static const struct nvif_mclass VAR_3[] = {
  { 128, -1 },
  { 131, -1 },
  { 135, -1 },
  { 136, -1 },
  { 137, -1 },
  { 138, -1 },
  { 139, -1 },
  { 140, -1 },
  { 141, -1 },
  { 132, -1 },
  { 133, -1 },
  { 134, -1 },
  { 142, -1 },
  { 129, -1 },
  { 130, -1 },
  {}
 };
 int VAR_4 = FUNC_1(&VAR_0->object, VAR_3, VAR_1);
 VAR_2->object.client = ((void*)0);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(&VAR_0->object, 0, VAR_3[VAR_4].oclass,
    ((void*)0), 0, &VAR_2->object);
}
