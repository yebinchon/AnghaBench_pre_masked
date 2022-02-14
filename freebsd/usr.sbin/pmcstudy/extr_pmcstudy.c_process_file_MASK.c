
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_2__ {char* counter_name; int cpu; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int * VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,char*,int *) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_10(char *VAR_9)
{
 FILE *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 pid_t VAR_14=0;

 if (VAR_9 == ((void*)0)) {
  VAR_10 = FUNC_6(VAR_2, "r", &VAR_14);
 } else {
  VAR_10 = FUNC_3(VAR_9, "r");
  if (VAR_10 == ((void*)0)) {
   FUNC_8("Can't process file %s err:%d\n",
          VAR_9, VAR_4);
   return;
  }
 }
 FUNC_0(VAR_10);
 if (VAR_1 == ((void*)0)) {

  FUNC_8("Nothing to do -- no counters built\n");
  if (VAR_10) {
   FUNC_2(VAR_10);
  }
  return;
 }
 FUNC_4();
 FUNC_7();
 if (VAR_8) {
  for (VAR_11=0; VAR_11<VAR_7; VAR_11++) {
   FUNC_8("Counter:%s cpu:%d index:%d\n",
          VAR_1[VAR_11].counter_name,
          VAR_1[VAR_11].cpu, VAR_11);
  }
 }
 VAR_12 = 0;
 VAR_13 = 1;
 while(VAR_13) {
  if (FUNC_9(VAR_10)) {
   VAR_12++;
  } else {
   break;
  }
  if (VAR_12 >= VAR_6) {
   VAR_13 = 0;
  }
  if (VAR_9 == ((void*)0)) {
   int VAR_15;

   for(VAR_11=0, VAR_15=0; VAR_11<VAR_0; VAR_11++) {
    FUNC_1(VAR_5[VAR_11], (VAR_12-1));
    VAR_15++;
    if (VAR_15 == VAR_3) {
     FUNC_8("\n");
     break;
    } else {
     FUNC_8("\t");
    }
   }
  }
 }
 if (VAR_9) {
  FUNC_2(VAR_10);
 } else {
  FUNC_5(VAR_10, VAR_14);
 }
}
