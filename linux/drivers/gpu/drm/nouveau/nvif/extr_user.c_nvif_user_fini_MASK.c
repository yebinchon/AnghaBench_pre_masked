
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * func; int object; } ;
struct nvif_device {TYPE_1__ user; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct nvif_device *VAR_0)
{
 if (VAR_0->user.func) {
  FUNC_0(&VAR_0->user.object);
  VAR_0->user.func = ((void*)0);
 }
}
