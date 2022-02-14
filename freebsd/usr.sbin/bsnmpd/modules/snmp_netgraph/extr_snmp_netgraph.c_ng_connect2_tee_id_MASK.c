
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_connect {char* path; int peerhook; int ourhook; } ;
typedef int ng_ID_t ;
typedef int conn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,struct ngm_connect*,int) ;
 int VAR_4 ;
 int FUNC_1 (int,int *,char*,char const*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int ,char const*,int ) ;

int
FUNC_4(ng_ID_t VAR_5, ng_ID_t VAR_6, const char *VAR_7,
    const char *VAR_8)
{
 struct ngm_connect VAR_9;
 char VAR_10[VAR_3];
 ng_ID_t VAR_11;

 if ((VAR_11 = FUNC_1(VAR_5, ((void*)0), "tee", VAR_7, "left")) == 0)
  return (-1);

 FUNC_2(VAR_10, VAR_3, "[%x]:", VAR_11);

 FUNC_2(VAR_9.path, VAR_3, "[%x]:", VAR_6);
 FUNC_3(VAR_9.ourhook, "right", VAR_2);
 FUNC_3(VAR_9.peerhook, VAR_8, VAR_2);
 return (FUNC_0(VAR_4, VAR_10,
     VAR_1, VAR_0, &VAR_9, sizeof(VAR_9)));
}
