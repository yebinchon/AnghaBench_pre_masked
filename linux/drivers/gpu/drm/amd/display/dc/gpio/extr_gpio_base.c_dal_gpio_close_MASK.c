
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio {int mode; int pin; int service; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(
 struct gpio *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_1->service, &VAR_1->pin);

 VAR_1->mode = VAR_0;
}
