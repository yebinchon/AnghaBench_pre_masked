
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__* VAR_24 ;
 int * VAR_25 ;
 int FUNC_2 (scalar_t__,scalar_t__,char*,...) ;
 int VAR_26 ;

void
FUNC_3(void)
{
 int VAR_27, VAR_28;

 FUNC_0();
 FUNC_2(VAR_19, VAR_18 + 6, "users    Load");
 FUNC_2(VAR_19 + 1, VAR_18 + 3, "Mem usage:    %%Phy   %%Kmem");
 FUNC_2(VAR_11, VAR_10, "Mem: KB    REAL            VIRTUAL");
 FUNC_2(VAR_11 + 1, VAR_10, "        Tot   Share      Tot    Share");
 FUNC_2(VAR_11 + 2, VAR_10, "Act");
 FUNC_2(VAR_11 + 3, VAR_10, "All");

 FUNC_2(VAR_11 + 1, VAR_10 + 41, "Free");

 FUNC_2(VAR_15, VAR_14, "         VN PAGER   SWAP PAGER");
 FUNC_2(VAR_15 + 1, VAR_14, "         in   out     in   out");
 FUNC_2(VAR_15 + 2, VAR_14, "count");
 FUNC_2(VAR_15 + 3, VAR_14, "pages");

 FUNC_2(VAR_7, VAR_6 + 1, "Interrupts");
 FUNC_2(VAR_7 + 1, VAR_6 + 6, "total");

 FUNC_2(VAR_21, VAR_20 + 9, "ioflt");
 FUNC_2(VAR_21 + 1, VAR_20 + 9, "cow");
 FUNC_2(VAR_21 + 2, VAR_20 + 9, "zfod");
 FUNC_2(VAR_21 + 3, VAR_20 + 9, "ozfod");
 FUNC_2(VAR_21 + 4, VAR_20 + 9 - 1, "%%ozfod");
 FUNC_2(VAR_21 + 5, VAR_20 + 9, "daefr");
 FUNC_2(VAR_21 + 6, VAR_20 + 9, "prcfr");
 FUNC_2(VAR_21 + 7, VAR_20 + 9, "totfr");
 FUNC_2(VAR_21 + 8, VAR_20 + 9, "react");
 FUNC_2(VAR_21 + 9, VAR_20 + 9, "pdwak");
 FUNC_2(VAR_21 + 10, VAR_20 + 9, "pdpgs");
 FUNC_2(VAR_21 + 11, VAR_20 + 9, "intrn");
 FUNC_2(VAR_21 + 12, VAR_20 + 9, "wire");
 FUNC_2(VAR_21 + 13, VAR_20 + 9, "act");
 FUNC_2(VAR_21 + 14, VAR_20 + 9, "inact");
 FUNC_2(VAR_21 + 15, VAR_20 + 9, "laund");
 FUNC_2(VAR_21 + 16, VAR_20 + 9, "free");
 if (VAR_8 - 1 > VAR_21 + 17)
  FUNC_2(VAR_21 + 17, VAR_20 + 9, "buf");

 FUNC_2(VAR_3, VAR_2, " Csw  Trp  Sys  Int  Sof  Flt");

 FUNC_2(VAR_5, VAR_4,
  "  . %%Sys    . %%Intr   . %%User   . %%Nice   . %%Idle");
 FUNC_2(VAR_17, VAR_16, "Proc:");
 FUNC_2(VAR_17 + 1, VAR_16, "  r   p   d   s   w");
 FUNC_2(VAR_5 + 1, VAR_4,
  "|    |    |    |    |    |    |    |    |    |    |");

 FUNC_2(VAR_23, VAR_22 + 8, "dtbuf");
 FUNC_2(VAR_23 + 1, VAR_22 + 8, "desvn");
 FUNC_2(VAR_23 + 2, VAR_22 + 8, "numvn");
 FUNC_2(VAR_23 + 3, VAR_22 + 8, "frevn");

 FUNC_2(VAR_13, VAR_12, "Namei     Name-cache   Dir-cache");
 FUNC_2(VAR_13 + 1, VAR_12,
  "   Calls    hits   %%    hits   %%");
 FUNC_1(VAR_9, VAR_0, VAR_1);

 for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
  if (VAR_24[VAR_27] == 0)
   continue;
  FUNC_2(VAR_24[VAR_27], VAR_6 + 6, "%-10.10s", VAR_25[VAR_27]);
 }
}
