
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_6;

 if (FUNC_3(FUNC_2(), VAR_1) == -1)
  FUNC_4("Could not signal main process: %m");

 if (FUNC_6() == -1)
  FUNC_4("setsid() failed");

 VAR_6 = FUNC_5(VAR_5, VAR_0, 0);
 if (VAR_6 == -1) {
  FUNC_4("Could not open %s", VAR_5);
 } else {
  (void)FUNC_1(VAR_6, VAR_3);
  (void)FUNC_1(VAR_6, VAR_4);
  (void)FUNC_1(VAR_6, VAR_2);
  FUNC_0(VAR_6);
 }
}
