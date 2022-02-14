
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_hw_sched {unsigned int sched; int mode; int channel; int kbps; int class_ipg; int flow_ipg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_hw_sched*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,unsigned int*) ;
 int FUNC_4 (int,char**,int,unsigned int*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_1, char *VAR_2[], int VAR_3, const char *VAR_4)
{
 struct ch_hw_sched VAR_5;
 unsigned int VAR_6, VAR_7;

 if (VAR_1 < 5 || FUNC_3(VAR_2[VAR_3++], &VAR_6))
  return -1;

 VAR_5.sched = VAR_6;
 VAR_5.mode = VAR_5.channel = -1;
 VAR_5.kbps = VAR_5.class_ipg = VAR_5.flow_ipg = -1;

 while (VAR_1 > VAR_3) {
  if (!FUNC_5(VAR_2[VAR_3], "mode")) {
   if (VAR_3 + 1 >= VAR_1)
    FUNC_2(1, "missing value for mode");
   if (!FUNC_5(VAR_2[VAR_3 + 1], "class"))
    VAR_5.mode = 0;
   else if (!FUNC_5(VAR_2[VAR_3 + 1], "flow"))
    VAR_5.mode = 1;
   else
    FUNC_2(1, "bad mode \"%s\"", VAR_2[VAR_3 + 1]);
  } else if (!FUNC_5(VAR_2[VAR_3], "channel") &&
    !FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_7))
   VAR_5.channel = VAR_7;
  else if (!FUNC_5(VAR_2[VAR_3], "rate") &&
    !FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_7))
   VAR_5.kbps = VAR_7;
  else if (!FUNC_5(VAR_2[VAR_3], "ipg") &&
    !FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_7))
   VAR_5.class_ipg = VAR_7;
  else if (!FUNC_5(VAR_2[VAR_3], "flowipg") &&
    !FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_7))
   VAR_5.flow_ipg = VAR_7;
  else
   FUNC_2(1, "unknown scheduler parameter \"%s\"",
        VAR_2[VAR_3]);
  VAR_3 += 2;
 }

 if (FUNC_0(VAR_4, VAR_0, &VAR_5) < 0)
   FUNC_1(1, "pktsched");

 return 0;
}
