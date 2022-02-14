
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvif_notify {int work; int flags; int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nvif_notify*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int
FUNC_5(struct nvif_notify *VAR_2)
{
 if (FUNC_1(VAR_2->object) &&
     FUNC_3(VAR_0, &VAR_2->flags)) {
  int VAR_3 = FUNC_2(VAR_2);
  if (FUNC_4(VAR_1, &VAR_2->flags))
   FUNC_0(&VAR_2->work);
  return VAR_3;
 }
 return 0;
}
