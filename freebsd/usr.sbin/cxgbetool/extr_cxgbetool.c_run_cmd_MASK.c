
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (int,char const**) ;
 int FUNC_3 (int,char const**,int) ;
 int FUNC_4 (int,char const**) ;
 int FUNC_5 (int,char const**) ;
 int FUNC_6 (int,char const**) ;
 int FUNC_7 (int,char const**) ;
 int FUNC_8 (int,char const**) ;
 int FUNC_9 (int,char const**) ;
 int FUNC_10 (int,char const**) ;
 int FUNC_11 (int,char const**) ;
 int FUNC_12 (int,char const**) ;
 int FUNC_13 (int,char const**) ;
 int FUNC_14 (int,char const**,int) ;
 int FUNC_15 (int,char const**) ;
 int FUNC_16 (int,char const**) ;
 int FUNC_17 (char const*,char*) ;
 int FUNC_18 (int,char const**) ;
 int FUNC_19 (char*,char const*) ;

__attribute__((used)) static int
FUNC_20(int VAR_1, const char *VAR_2[])
{
 int VAR_3 = -1;
 const char *VAR_4 = VAR_2[0];


 VAR_1--;
 VAR_2++;

 if (!FUNC_17(VAR_4, "reg") || !FUNC_17(VAR_4, "reg32"))
  VAR_3 = FUNC_14(VAR_1, VAR_2, 4);
 else if (!FUNC_17(VAR_4, "reg64"))
  VAR_3 = FUNC_14(VAR_1, VAR_2, 8);
 else if (!FUNC_17(VAR_4, "regdump"))
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "filter"))
  VAR_3 = FUNC_3(VAR_1, VAR_2, 0);
 else if (!FUNC_17(VAR_4, "context"))
  VAR_3 = FUNC_4(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "loadfw"))
  VAR_3 = FUNC_9(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "memdump"))
  VAR_3 = FUNC_10(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "tcb"))
  VAR_3 = FUNC_13(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "i2c"))
  VAR_3 = FUNC_12(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "clearstats"))
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "tracer"))
  VAR_3 = FUNC_18(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "modinfo"))
  VAR_3 = FUNC_11(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "sched-class"))
  VAR_3 = FUNC_15(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "sched-queue"))
  VAR_3 = FUNC_16(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "loadcfg"))
  VAR_3 = FUNC_8(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "loadboot"))
  VAR_3 = FUNC_6(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "loadboot-cfg"))
  VAR_3 = FUNC_7(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "dumpstate"))
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "policy"))
  VAR_3 = FUNC_5(VAR_1, VAR_2);
 else if (!FUNC_17(VAR_4, "hashfilter"))
  VAR_3 = FUNC_3(VAR_1, VAR_2, 1);
 else {
  VAR_3 = VAR_0;
  FUNC_19("invalid command \"%s\"", VAR_4);
 }

 return (VAR_3);
}
