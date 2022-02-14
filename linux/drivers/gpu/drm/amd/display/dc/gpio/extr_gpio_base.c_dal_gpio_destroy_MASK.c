
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct gpio* hpd; struct gpio* generic; struct gpio* ddc; } ;
struct gpio {int id; TYPE_1__ hw_container; } ;


 int FUNC_0 (int) ;






 int FUNC_1 (struct gpio*) ;
 int FUNC_2 (struct gpio*) ;

void FUNC_3(
 struct gpio **VAR_0)
{
 if (!VAR_0 || !*VAR_0) {
  FUNC_0(0);
  return;
 }

 FUNC_1(*VAR_0);

 switch ((*VAR_0)->id) {
 case 132:
  FUNC_2((*VAR_0)->hw_container.ddc);
  (*VAR_0)->hw_container.ddc = ((void*)0);
  break;
 case 133:

  FUNC_2((*VAR_0)->hw_container.ddc);
  (*VAR_0)->hw_container.ddc = ((void*)0);
  break;
 case 131:
  FUNC_2((*VAR_0)->hw_container.generic);
  (*VAR_0)->hw_container.generic = ((void*)0);
  break;
 case 129:
  FUNC_2((*VAR_0)->hw_container.hpd);
  (*VAR_0)->hw_container.hpd = ((void*)0);
  break;

 case 128:
  break;
 case 130:
  break;
 default:
  break;
 }

 FUNC_2(*VAR_0);

 *VAR_0 = ((void*)0);
}
