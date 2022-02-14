
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
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(size_t VAR_7)
{
 size_t VAR_8;
 int VAR_9;

 VAR_5 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_9 = FUNC_5(VAR_0, VAR_1);
  if (VAR_9 < 0) {
   FUNC_2(VAR_6, "open: %s\n", FUNC_6(VAR_5));
   FUNC_0(1);
  }
 }
 FUNC_4(FUNC_3(), VAR_4);

 for (;;) {
  if (FUNC_1(VAR_2, VAR_3) != 0)
   break;
  FUNC_7(1000);
 }
 FUNC_0(0);
}
