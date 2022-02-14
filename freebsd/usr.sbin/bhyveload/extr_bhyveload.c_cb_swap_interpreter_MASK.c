
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5, const char *VAR_6)
{





 FUNC_3(VAR_3);
 if (VAR_1 == 1) {
  FUNC_5("requested loader interpreter does not match guest userboot");
  FUNC_1(((void*)0), 1);
 }
 if (VAR_6 == ((void*)0) || *VAR_6 == '\0') {
  FUNC_5("guest failed to request an interpreter");
  FUNC_1(((void*)0), 1);
 }

 if (FUNC_0(&VAR_3, "/boot/userboot_%s.so", VAR_6) == -1)
  FUNC_2(VAR_0, "malloc");
 VAR_4 = 1;
 FUNC_4(VAR_2, 1);
}
