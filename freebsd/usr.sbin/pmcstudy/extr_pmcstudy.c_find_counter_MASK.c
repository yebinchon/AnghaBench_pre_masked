
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counters {char const* counter_name; struct counters* next_cpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static struct counters *
FUNC_4(struct counters *VAR_0, const char *VAR_1)
{
 struct counters *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = FUNC_2(VAR_1);
 while(VAR_2) {
  if (FUNC_3(VAR_2->counter_name, VAR_1, VAR_3) == 0) {
   return(VAR_2);
  }
  VAR_2 = VAR_2->next_cpu;
 }
 FUNC_1("Can't find counter %s\n", VAR_1);
 FUNC_1("We have:\n");
 VAR_2 = VAR_0;
 while(VAR_2) {
  FUNC_1("- %s\n", VAR_2->counter_name);
  VAR_2 = VAR_2->next_cpu;
 }
 FUNC_0(-1);
}
