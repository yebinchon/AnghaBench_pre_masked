
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test ;
typedef int qboolean ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

qboolean FUNC_2(const char *VAR_4, const char *VAR_5) {
 char VAR_6[VAR_1];

 FUNC_0( VAR_6, sizeof( VAR_6 ), "models/players/%s/%s/lower_default.skin", VAR_4, VAR_5 );

 if (FUNC_1(VAR_6, ((void*)0), VAR_0)) {
  return VAR_3;
 }
 FUNC_0( VAR_6, sizeof( VAR_6 ), "models/players/characters/%s/%s/lower_default.skin", VAR_4, VAR_5 );

 if (FUNC_1(VAR_6, ((void*)0), VAR_0)) {
  return VAR_3;
 }
 return VAR_2;
}
