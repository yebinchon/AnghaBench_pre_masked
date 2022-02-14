
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_connect {int peerhook; int ourhook; int path; } ;
typedef int conn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,struct ngm_connect*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (int ,char const*,int ) ;

int
FUNC_3(const char *VAR_5, const char *VAR_6, const char *VAR_7)
{
 struct ngm_connect VAR_8;

 FUNC_1(VAR_8.path, VAR_3, "%s:", VAR_5);
 FUNC_2(VAR_8.ourhook, VAR_6, VAR_2);
 FUNC_2(VAR_8.peerhook, VAR_7, VAR_2);
 return (FUNC_0(VAR_4, ".:",
     VAR_1, VAR_0, &VAR_8, sizeof(VAR_8)));
}
