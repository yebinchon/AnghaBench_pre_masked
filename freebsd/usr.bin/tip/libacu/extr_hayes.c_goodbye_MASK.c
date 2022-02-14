
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* VAR_5 ;
 char FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 size_t FUNC_6 (int ,char*,int ) ;
 size_t VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_10(void)
{
 int VAR_7;
 char VAR_8;

 FUNC_8(VAR_1, VAR_3);
 if (FUNC_2()) {
  FUNC_7(1);

  FUNC_8(VAR_1, VAR_3);

  FUNC_9(VAR_1, "ATH0\r", 5);

  VAR_8 = FUNC_1("03");
  if (VAR_8 != '0' && VAR_8 != '3') {
   FUNC_5("cannot hang up modem\n\r");
   FUNC_5("please use 'tip dialer' to make sure the line is hung up\n\r");
  }

  FUNC_7(1);
  FUNC_3(VAR_1, VAR_2, &VAR_7);






  FUNC_9(VAR_1, "ATv1\r", 5);
  FUNC_7(1);







 }
 FUNC_8(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_4, 0);
 FUNC_0(VAR_1);
}
