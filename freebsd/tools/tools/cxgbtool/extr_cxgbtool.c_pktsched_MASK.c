
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_pktsched_params {int sched; unsigned int idx; unsigned int min; unsigned int max; unsigned int binding; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_pktsched_params*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,unsigned int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char**,int,char const*) ;

__attribute__((used)) static int
FUNC_6(int VAR_1, char *VAR_2[], int VAR_3, const char *VAR_4)
{
 struct ch_pktsched_params VAR_5;
 unsigned int VAR_6, VAR_7 = -1, VAR_8, VAR_9 = -1;

 if (VAR_1 < 4)
  FUNC_2(1, "no scheduler specified");

 if (!FUNC_4(VAR_2[VAR_3], "port")) {
  if (VAR_1 != VAR_3 + 4)
   return -1;
  if (FUNC_3(VAR_2[VAR_3 + 1], &VAR_6) ||
      FUNC_3(VAR_2[VAR_3 + 2], &VAR_7) ||
      FUNC_3(VAR_2[VAR_3 + 3], &VAR_8))
   return -1;
  VAR_5.sched = 0;
 } else if (!FUNC_4(VAR_2[VAR_3], "tunnelq")) {
  if (VAR_1 != VAR_3 + 4)
   return -1;
  if (FUNC_3(VAR_2[VAR_3 + 1], &VAR_6) ||
      FUNC_3(VAR_2[VAR_3 + 2], &VAR_8) ||
      FUNC_3(VAR_2[VAR_3 + 3], &VAR_9))
   return -1;
  VAR_5.sched = 1;
 } else if (!FUNC_4(VAR_2[VAR_3], "tx"))
  return FUNC_5(VAR_1, VAR_2, VAR_3 + 1, VAR_4);
 else
  FUNC_2(1, "unknown scheduler \"%s\"; must be one of \"port\", "
   "\"tunnelq\" or \"tx\"", VAR_2[VAR_3]);

 VAR_5.idx = VAR_6;
 VAR_5.min = VAR_7;
 VAR_5.max = VAR_8;
 VAR_5.binding = VAR_9;
 if (FUNC_0(VAR_4, VAR_0, &VAR_5) < 0)
   FUNC_1(1, "pktsched");

 return 0;
}
