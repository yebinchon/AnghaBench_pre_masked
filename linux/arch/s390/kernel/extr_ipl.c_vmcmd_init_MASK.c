
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(void)
{
 if (!VAR_2)
  return -VAR_1;
 VAR_5 = FUNC_0("vmcmd", ((void*)0), VAR_3);
 if (!VAR_5)
  return -VAR_0;
 return FUNC_1(&VAR_5->kobj, &VAR_4);
}
