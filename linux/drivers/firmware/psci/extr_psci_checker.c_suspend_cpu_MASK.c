
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state {int flags; int (* enter ) (struct cpuidle_device*,struct cpuidle_driver*,int) ;} ;
struct cpuidle_driver {struct cpuidle_state* states; } ;
struct cpuidle_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct cpuidle_device*,struct cpuidle_driver*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct cpuidle_device *VAR_1,
         struct cpuidle_driver *VAR_2, int VAR_3)
{
 struct cpuidle_state *VAR_4 = &VAR_2->states[VAR_3];
 bool VAR_5 = VAR_4->flags & VAR_0;
 int VAR_6;

 FUNC_0();

 if (VAR_5) {




  VAR_6 = FUNC_4();
  if (VAR_6) {







   FUNC_2();
   VAR_6 = 0;
   goto out_arch_exit;
  }
 }

 VAR_6 = VAR_4->enter(VAR_1, VAR_2, VAR_3);

 if (VAR_5)
  FUNC_5();

out_arch_exit:
 FUNC_1();

 return VAR_6;
}
