
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int ) ;

void
FUNC_5(void)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0("/");
 if (VAR_3 != 0)
  FUNC_3("chdir");

 VAR_4 = FUNC_4(VAR_2, VAR_0, 0);
 if (VAR_4 < 0) {
  FUNC_3("cannot open %s", VAR_2);
  return;
 }

 VAR_3 = FUNC_2(VAR_4, VAR_1);
 if (VAR_3 != 0)
  FUNC_3("dup2");

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 != 0) {

  FUNC_3("close");
 }
}
