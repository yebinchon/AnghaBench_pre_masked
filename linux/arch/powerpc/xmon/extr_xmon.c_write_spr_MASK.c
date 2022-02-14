
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,unsigned long) ;
 char* VAR_3 ;

__attribute__((used)) static void
FUNC_4(int VAR_4, unsigned long VAR_5)
{
 if (VAR_2) {
  FUNC_0(VAR_3);
  return;
 }

 if (FUNC_1(VAR_0) == 0) {
  VAR_1 = 1;
  FUNC_2();

  FUNC_3(VAR_4, VAR_5);

  FUNC_2();
 } else {
  FUNC_0("SPR 0x%03x (%4d) Faulted during write\n", VAR_4, VAR_4);
 }
 VAR_1 = 0;
}
