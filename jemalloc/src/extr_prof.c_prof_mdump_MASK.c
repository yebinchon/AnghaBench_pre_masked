
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int,char const*,int) ;
 int FUNC_5 (int *,char*,char,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

bool
FUNC_9(tsd_t *VAR_6, const char *VAR_7) {
 FUNC_1(VAR_1);
 FUNC_0(FUNC_7(VAR_6) == 0);

 if (!VAR_2 || !VAR_3) {
  return 1;
 }
 char VAR_8[VAR_0];
 if (VAR_7 == ((void*)0)) {

  FUNC_2(FUNC_8(VAR_6), &VAR_4);
  if (FUNC_6(FUNC_8(VAR_6))[0] == '\0') {
   FUNC_3(FUNC_8(VAR_6), &VAR_4);
   return 1;
  }
  FUNC_5(VAR_6, VAR_8, 'm', VAR_5);
  VAR_5++;
  FUNC_3(FUNC_8(VAR_6), &VAR_4);
  VAR_7 = VAR_8;
 }
 return FUNC_4(VAR_6, 1, VAR_7, 0);
}
