
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
 int FUNC_1 (int ,char*,...) ;

int
FUNC_2(int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = FUNC_0(0x61);
 int VAR_9 = FUNC_0(0x461);

 FUNC_1(VAR_3, "NMI ISA %x, EISA %x\n", VAR_8, VAR_9);

 if (VAR_8 & VAR_5) {
  FUNC_1(VAR_3, "RAM parity error, likely hardware failure.");
  VAR_7 = 1;
 }

 if (VAR_8 & VAR_4) {
  FUNC_1(VAR_3, "I/O channel check, likely hardware failure.");
  VAR_7 = 1;
 }






 if (VAR_9 == 0xff)
  return(VAR_7);

 if (VAR_9 & VAR_2) {
  FUNC_1(VAR_3, "EISA watchdog timer expired, likely hardware failure.");
  VAR_7 = 1;
 }

 if (VAR_9 & VAR_0) {
  FUNC_1(VAR_3, "EISA bus timeout, likely hardware failure.");
  VAR_7 = 1;
 }

 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_3, "EISA I/O port status error.");
  VAR_7 = 1;
 }

 return(VAR_7);
}
