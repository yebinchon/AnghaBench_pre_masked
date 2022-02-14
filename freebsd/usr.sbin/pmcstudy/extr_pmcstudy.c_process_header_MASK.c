
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counters {int counter_name; int cpu; } ;


 int VAR_0 ;
 struct counters* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_2, char *VAR_3)
{
 struct counters *VAR_4;
 int VAR_5, VAR_6, VAR_7;






 if (FUNC_3(VAR_3, "s/", 2)) {
  FUNC_0("Check -- invalid header no s/ in %s\n",
         VAR_3);
  return;
 }
 VAR_4 = &VAR_1[VAR_2];
 VAR_4->cpu = FUNC_5(&VAR_3[2], ((void*)0), 10);
 VAR_6 = FUNC_2(VAR_3);
 for (VAR_5=2; VAR_5<VAR_6; VAR_5++) {
  if (VAR_3[VAR_5] == '/') {
   VAR_7 = FUNC_2(&VAR_3[(VAR_5+1)]);
   if (VAR_7 < (VAR_0-1)) {
    FUNC_1(VAR_4->counter_name, &VAR_3[(VAR_5+1)]);
   } else {
    FUNC_4(VAR_4->counter_name, &VAR_3[(VAR_5+1)], (VAR_0-1));
   }
  }
 }
}
