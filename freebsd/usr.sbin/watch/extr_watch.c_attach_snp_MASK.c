
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5, VAR_3 | VAR_2);
 if (VAR_8 < 0)
  FUNC_1(VAR_0, "can't open device");
 if (FUNC_2(VAR_7, VAR_4, &VAR_8) != 0)
  FUNC_1(VAR_1, "cannot attach to tty");
 FUNC_0(VAR_8);
 if (VAR_6)
  FUNC_4("Logging Started.");
}
