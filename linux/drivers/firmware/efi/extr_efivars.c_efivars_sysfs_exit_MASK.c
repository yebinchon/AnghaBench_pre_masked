
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{

 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_1,
      ((void*)0), ((void*)0));
 if (VAR_5) {
  FUNC_3("efivars: Failed to destroy sysfs entries\n");
  return;
 }

 if (VAR_4)
  FUNC_4(&VAR_3->kobj, VAR_4);
 if (VAR_2)
  FUNC_4(&VAR_3->kobj, VAR_2);
 FUNC_1(VAR_4);
 FUNC_1(VAR_2);
 FUNC_2(VAR_3);
}
