
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idle_statedata {scalar_t__ mpu_state; scalar_t__ mpu_logic_state; int cpu_state; } ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {size_t cpu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct cpuidle_device*,int *) ;
 scalar_t__ FUNC_9 (int,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_9 ;
 int FUNC_13 (size_t,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 struct idle_statedata* VAR_10 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct cpuidle_device *VAR_11,
   struct cpuidle_driver *VAR_12,
   int VAR_13)
{
 struct idle_statedata *VAR_14 = VAR_10 + VAR_13;
 u32 VAR_15 = 0;







 if (VAR_11->cpu == 0 && FUNC_9(1, VAR_7)) {
  while (FUNC_15(VAR_8[1]) != VAR_1) {
   FUNC_7();
   if (VAR_6[1])
       goto fail;

  }
 }

 VAR_15 = (VAR_14->mpu_state == VAR_3) &&
     (VAR_14->mpu_logic_state == VAR_1);


 FUNC_17();


 FUNC_18();





 FUNC_5();

 if (VAR_11->cpu == 0) {
  FUNC_16(VAR_9, VAR_14->mpu_logic_state);
  FUNC_14(VAR_9, VAR_14->mpu_state);





  if (VAR_15)
   FUNC_3();
 }

 FUNC_13(VAR_11->cpu, VAR_14->cpu_state);
 VAR_6[VAR_11->cpu] = 1;


 if (VAR_11->cpu == 0 && FUNC_9(1, VAR_7)) {

  if (FUNC_0(VAR_0) &&
      VAR_15)
   FUNC_10();

  FUNC_2(VAR_5[1]);
  FUNC_14(VAR_8[1], VAR_2);
  FUNC_1(VAR_5[1]);

  if (FUNC_0(VAR_0) &&
      VAR_15) {
   while (FUNC_11()) {
    FUNC_20(1);
    FUNC_7();
   }
   FUNC_12();
  }
 }





 FUNC_6();





 if (VAR_11->cpu == 0 && VAR_15)
  FUNC_4();

 FUNC_19();

fail:
 FUNC_8(VAR_11, &VAR_4);
 VAR_6[VAR_11->cpu] = 0;

 return VAR_13;
}
