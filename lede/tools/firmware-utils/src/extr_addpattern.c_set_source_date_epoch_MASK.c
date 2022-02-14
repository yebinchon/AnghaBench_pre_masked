
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static void FUNC_4() {
 char *VAR_3 = FUNC_2("SOURCE_DATE_EPOCH");
 char *VAR_4 = VAR_3;
 VAR_0 = 0;
        if (VAR_3 && *VAR_3) {
  VAR_1 = FUNC_3(VAR_3, &VAR_4, 10);
  if (VAR_0 || (VAR_4 && *VAR_4 != '\0')) {
   FUNC_1(VAR_2, "Invalid SOURCE_DATE_EPOCH");
   FUNC_0(1);
  }
        }
}
