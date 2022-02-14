
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_8)
{
 FUNC_4(1);
 while (VAR_7 != 1)
  ;
 if (VAR_6 == VAR_1) {
  VAR_8 = FUNC_3(VAR_0, VAR_3 | VAR_2);
  if (VAR_8 < 0)
   FUNC_1(1, "open for write");
 }
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 2)
  ;
 if (FUNC_5(VAR_8, "", 1) != 1)
  FUNC_1(1, "write");
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 3)
  ;
 if (FUNC_0(VAR_8) != 0)
  FUNC_1(1, "close for write");
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 4)
  ;
 if (VAR_6 != VAR_1)
  return;
 VAR_8 = FUNC_3(VAR_0, VAR_3 | VAR_2);
 if (VAR_8 < 0)
  FUNC_1(1, "open for write");
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 5)
  ;
 if (FUNC_5(VAR_8, "", 1) != 1)
  FUNC_1(1, "write");
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 6)
  ;
 if (FUNC_0(VAR_8) != 0)
  FUNC_1(1, "close for write");
 FUNC_2(VAR_5, VAR_4);

 FUNC_4(1);
 while (VAR_7 != 7)
  ;
}
