
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_rmhook {int ourhook; } ;
typedef int rmhook ;
typedef int ng_ID_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,struct ngm_rmhook*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (int ,char const*,int ) ;

int
FUNC_3(ng_ID_t VAR_5, const char *VAR_6)
{
 struct ngm_rmhook VAR_7;
 char VAR_8[VAR_3];

 FUNC_2(VAR_7.ourhook, VAR_6, VAR_2);
 FUNC_1(VAR_8, VAR_3, "[%x]:", VAR_5);
 return (FUNC_0(VAR_4, VAR_8,
     VAR_0, VAR_1, &VAR_7, sizeof(VAR_7)));
}
