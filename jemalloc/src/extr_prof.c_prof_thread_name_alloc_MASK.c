
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 char* FUNC_1 (int *,size_t,int ,int,int *,int,int ,int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static char *
FUNC_5(tsdn_t *VAR_1, const char *VAR_2) {
 char *VAR_3;
 size_t VAR_4;

 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_2) + 1;
 if (VAR_4 == 1) {
  return "";
 }

 VAR_3 = FUNC_1(VAR_1, VAR_4, FUNC_4(VAR_4), 0, ((void*)0), 1,
     FUNC_0(VAR_0, 0, 1), 1);
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_2(VAR_3, VAR_2, VAR_4);
 return VAR_3;
}
