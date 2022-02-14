
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 int VAR_11 ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_0("");
 if (VAR_0 & VAR_1) {
  FUNC_1("Recalibrate failed!");
 } else if (VAR_6 & VAR_8) {
  FUNC_1("data CRC error");
  FUNC_2();
 } else if (VAR_2 & VAR_3) {
  FUNC_1("CRC error");
  FUNC_2();
 } else if ((VAR_2 & (VAR_4 | VAR_5)) ||
     (VAR_6 & VAR_9)) {
  if (!VAR_11) {
   FUNC_1("sector not found");
   FUNC_2();
  } else
   FUNC_1("probe failed...");
 } else if (VAR_6 & VAR_10) {
  FUNC_1("wrong cylinder");
 } else if (VAR_6 & VAR_7) {
  FUNC_1("bad cylinder");
 } else {
  FUNC_1("unknown error. ST[0..2] are: 0x%x 0x%x 0x%x",
   VAR_0, VAR_2, VAR_6);
  FUNC_2();
 }
 FUNC_1("\n");
}
