
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngm_name {int name; int peerhook; int ourhook; int type; } ;
struct ngm_mkpeer {int name; int peerhook; int ourhook; int type; } ;
typedef int ng_ID_t ;
typedef int name ;
typedef int mkpeer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,struct ngm_name*,int) ;
 int VAR_6 ;
 int FUNC_1 (int,int *,char const*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*,int ) ;

ng_ID_t
FUNC_5(ng_ID_t VAR_7, const char *VAR_8, const char *VAR_9,
    const char *VAR_10, const char *VAR_11)
{
 char VAR_12[VAR_4];
 struct ngm_mkpeer VAR_13;
 struct ngm_name VAR_14;

 FUNC_4(VAR_13.type, VAR_9, VAR_5);
 FUNC_4(VAR_13.ourhook, VAR_10, VAR_3);
 FUNC_4(VAR_13.peerhook, VAR_11, VAR_3);

 FUNC_2(VAR_12, "[%x]:", VAR_7);
 if (FUNC_0(VAR_6, VAR_12, VAR_0, VAR_1,
     &VAR_13, sizeof(VAR_13)) == -1)
  return (0);

 if ((VAR_7 = FUNC_1(VAR_7, ((void*)0), VAR_10, 0)) == 0)
  return (0);

 if (VAR_8 != ((void*)0)) {
  FUNC_3(VAR_14.name, VAR_8);
  FUNC_2(VAR_12, "[%x]:", VAR_7);
  if (FUNC_0(VAR_6, VAR_12, VAR_0, VAR_2,
      &VAR_14, sizeof(VAR_14)) == -1)
   return (0);
 }
 return (VAR_7);
}
