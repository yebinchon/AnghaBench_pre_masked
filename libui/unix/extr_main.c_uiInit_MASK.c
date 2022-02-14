
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uiInitOptions ;
struct TYPE_4__ {int message; } ;
typedef TYPE_1__ GError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,TYPE_1__**) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;

const char *FUNC_6(uiInitOptions *VAR_5)
{
 GError *VAR_6 = ((void*)0);
 const char *VAR_7;

 VAR_4 = *VAR_5;
 if (FUNC_3(((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_6) == VAR_0) {
  VAR_7 = FUNC_2(VAR_6->message);
  FUNC_0(VAR_6);
  return VAR_7;
 }
 FUNC_4();
 FUNC_5();
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 return ((void*)0);
}
