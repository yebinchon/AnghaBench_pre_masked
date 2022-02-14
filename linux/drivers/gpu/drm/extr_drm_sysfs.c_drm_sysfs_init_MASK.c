
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int attr; } ;
struct TYPE_9__ {int devnode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_1__* FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(void)
{
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0, "drm");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_4 = FUNC_3(VAR_2, &VAR_1.attr);
 if (VAR_4) {
  FUNC_4(VAR_2);
  VAR_2 = ((void*)0);
  return VAR_4;
 }

 VAR_2->devnode = VAR_3;
 FUNC_5(VAR_2);
 return 0;
}
