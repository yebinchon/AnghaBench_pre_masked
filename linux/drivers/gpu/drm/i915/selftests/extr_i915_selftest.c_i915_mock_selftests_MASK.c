
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(void)
{
 int VAR_3;

 if (!VAR_1.mock)
  return 0;

 VAR_3 = FUNC_0(VAR_2, ((void*)0));
 if (VAR_3) {
  VAR_1.mock = VAR_3;
  return VAR_3;
 }

 if (VAR_1.mock < 0) {
  VAR_1.mock = -VAR_0;
  return 1;
 }

 return 0;
}
