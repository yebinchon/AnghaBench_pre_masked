
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,char**) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;

void FUNC_4(void)
{
 char *VAR_3 = ((void*)0);

 if (VAR_1->len == 0) {
  FUNC_2(VAR_1, VAR_0);
  return;
 }
 FUNC_1(VAR_1, VAR_2, &VAR_3);
 FUNC_3("Some data was leaked; either you left a uiControl lying around or there's a bug in libui itself. Leaked data:\n%s", VAR_3);
 FUNC_0(VAR_3);
}
