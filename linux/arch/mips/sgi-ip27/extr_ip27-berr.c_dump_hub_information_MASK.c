
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_13, unsigned long VAR_14)
{
 static char *VAR_15[2][8] = {
  { ((void*)0), "Uncached Partial Read PRERR", "DERR", "Read Timeout",
    ((void*)0), ((void*)0), ((void*)0), ((void*)0) },
  { "WERR", "Uncached Partial Write", "PWERR", "Write Timeout",
    ((void*)0), ((void*)0), ((void*)0), ((void*)0) }
 };
 int VAR_16 = VAR_14 & VAR_12;

 if (!(VAR_13 & VAR_11)) {
  FUNC_0("Hub does not contain valid error information\n");
  return;
 }


 FUNC_0("Hub has valid error information:\n");
 if (VAR_13 & VAR_4)
  FUNC_0("Overrun is set.	 Error stack may contain additional "
         "information.\n");
 FUNC_0("Hub error address is %08lx\n",
        (VAR_13 & VAR_0) >> (VAR_1 - 3));
 FUNC_0("Incoming message command 0x%lx\n",
        (VAR_13 & VAR_2) >> VAR_3);
 FUNC_0("Supplemental field of incoming message is 0x%lx\n",
        (VAR_13 & VAR_7) >> VAR_8);
 FUNC_0("T5 Rn (for RRB only) is 0x%lx\n",
        (VAR_13 & VAR_5) >> VAR_6);
 FUNC_0("Error type is %s\n", VAR_15[VAR_16]
        [(VAR_13 & VAR_9) >> VAR_10]
  ? : "invalid");
}
