
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvif_notify {int flags; int object; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct nvif_notify*) ;
 int FUNC_2 (int ,int *) ;

int
FUNC_3(struct nvif_notify *VAR_1)
{
 if (FUNC_0(VAR_1->object) &&
     !FUNC_2(VAR_0, &VAR_1->flags))
  return FUNC_1(VAR_1);
 return 0;
}
