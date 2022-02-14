
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_governor {int dummy; } ;
struct cpuidle_driver {scalar_t__ governor; } ;


 int FUNC_0 (struct cpuidle_driver*) ;
 int * VAR_0 ;
 int VAR_1 ;
 struct cpuidle_governor* FUNC_1 (scalar_t__) ;
 struct cpuidle_driver* FUNC_2 () ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (struct cpuidle_governor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct cpuidle_driver *VAR_5)
{
 struct cpuidle_governor *VAR_6;
 int VAR_7;

 FUNC_6(&VAR_1);
 VAR_7 = FUNC_0(VAR_5);
 FUNC_7(&VAR_1);

 if (!VAR_7 && !FUNC_8(VAR_4) && VAR_5->governor &&
     (FUNC_2() == VAR_5)) {
  FUNC_4(&VAR_2);
  VAR_6 = FUNC_1(VAR_5->governor);
  if (VAR_6) {
   VAR_3 = VAR_0;
   if (FUNC_3(VAR_6) < 0)
    VAR_3 = ((void*)0);
  }
  FUNC_5(&VAR_2);
 }

 return VAR_7;
}
