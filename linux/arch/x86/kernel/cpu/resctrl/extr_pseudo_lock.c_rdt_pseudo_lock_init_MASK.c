
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int devnode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int,char*) ;

int FUNC_5(void)
{
 int VAR_5;

 VAR_5 = FUNC_3(0, "pseudo_lock", &VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_5;

 VAR_1 = FUNC_2(VAR_0, "pseudo_lock");
 if (FUNC_0(VAR_1)) {
  VAR_5 = FUNC_1(VAR_1);
  FUNC_4(VAR_4, "pseudo_lock");
  return VAR_5;
 }

 VAR_1->devnode = VAR_3;
 return 0;
}
