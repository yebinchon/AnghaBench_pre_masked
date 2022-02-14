
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ forbid_idle; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct cpuidle_device *VAR_7,
 struct cpuidle_driver *VAR_8, int VAR_9)
{
 static int VAR_10;
 static unsigned int VAR_11;
 static u64 VAR_12;
 u64 VAR_13, VAR_14;

 int VAR_15 = 0;
 unsigned int VAR_16 = VAR_6 - VAR_11;
 unsigned int VAR_17;

recalc:
 FUNC_6(VAR_3, &VAR_14, &VAR_13);
 if (VAR_16 > VAR_0) {
  VAR_10 = 0;
 } else if (VAR_16 > VAR_4) {
  unsigned int VAR_18;

  VAR_18 = FUNC_5(VAR_13 - VAR_12);
  VAR_18 *= 100;
  VAR_18 /= VAR_16;
  VAR_10 = (VAR_18 > VAR_5);
  if (VAR_2.forbid_idle)
   VAR_10 = 0;
 }

 VAR_11 = VAR_6;
 VAR_12 = VAR_13;

 VAR_17 = VAR_1;

 while (!FUNC_4()) {
  if (VAR_10) {
   unsigned int VAR_19;

   VAR_19 = VAR_6;
   switch (FUNC_1()) {
   case 0:
    VAR_15 = 1;
    if (VAR_19 != VAR_6) {
     if (VAR_17) {
      VAR_17 = VAR_1;
      continue;
     }
    } else if (VAR_17) {
     VAR_17--;
     continue;
    }
    break;
   case 1:
    VAR_15 = 1;
    break;
   default:
    break;
   }
  }
  FUNC_2();
  FUNC_3();
  VAR_16 = VAR_6 - VAR_11;
  if (VAR_16 > VAR_4)
   goto recalc;
 }

 if (VAR_15)
  FUNC_0();

 return VAR_9;
}
