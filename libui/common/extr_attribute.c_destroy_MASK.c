
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int features; TYPE_2__* family; } ;
struct TYPE_6__ {int type; TYPE_1__ u; } ;
typedef TYPE_2__ uiAttribute ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(uiAttribute *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  FUNC_1(VAR_0->u.family);
  break;
 case 128:
  FUNC_0(VAR_0->u.features);
  break;
 }
 FUNC_1(VAR_0);
}
