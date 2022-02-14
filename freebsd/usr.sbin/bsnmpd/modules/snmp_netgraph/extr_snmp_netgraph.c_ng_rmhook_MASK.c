
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_rmhook {int ourhook; } ;
typedef int rmhook ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,struct ngm_rmhook*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*,int ) ;

int
FUNC_2(const char *VAR_4)
{
 struct ngm_rmhook VAR_5;

 FUNC_1(VAR_5.ourhook, VAR_4, VAR_2);
 return (FUNC_0(VAR_3, ".:",
     VAR_0, VAR_1, &VAR_5, sizeof(VAR_5)));
}
