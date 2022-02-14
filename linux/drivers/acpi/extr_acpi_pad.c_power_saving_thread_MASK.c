
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (unsigned int) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,struct sched_param*) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (unsigned long,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(void *VAR_9)
{
 struct sched_param VAR_10 = {.sched_priority = 1};
 int VAR_11;
 unsigned int VAR_12 = (unsigned long)VAR_9;
 u64 VAR_13 = 0;

 FUNC_8(VAR_2, VAR_1, &VAR_10);

 while (!FUNC_1()) {
  unsigned long VAR_14;


  VAR_14 = VAR_13 + VAR_6 * VAR_0;
  if (FUNC_16(VAR_14, VAR_4)) {
   VAR_13 = VAR_4;
   FUNC_7(VAR_12);
  }

  VAR_11 = 0;

  VAR_14 = VAR_4 + VAR_0 * (100 - VAR_3) / 100;

  while (!FUNC_6()) {
   if (VAR_7 && !VAR_8) {

    FUNC_4("TSC halts in idle");
    VAR_8 = 1;
   }
   FUNC_2();
   FUNC_13();
   FUNC_14();
   FUNC_12();

   FUNC_5(VAR_5, 1);

   FUNC_11();
   FUNC_15();
   FUNC_3();

   if (FUNC_16(VAR_14, VAR_4)) {
    VAR_11 = 1;
    break;
   }
  }
  if (FUNC_17(VAR_11))
   FUNC_10(VAR_0 * VAR_3 / 100);





  if (FUNC_17(FUNC_6()))
   FUNC_9();
 }

 FUNC_0(VAR_12);
 return 0;
}
