
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static inline int FUNC_14(struct cpuidle_device *VAR_3,
       struct cpuidle_driver *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_11();
 bool VAR_7 = 0;

 if (FUNC_1(&VAR_1) == FUNC_3()) {



  if (!FUNC_12(&VAR_2))
   goto wfi;


  if (FUNC_5()) {
   FUNC_13(&VAR_2);
   goto out;
  }



  VAR_7 = 1;




  if (!FUNC_8(VAR_6 ? 0 : 1))
   goto out;



  if (FUNC_4())
   goto out;



  if (FUNC_6())
   goto out;


  if (FUNC_9())
   goto out;




  if (FUNC_10(VAR_0, 1, 1))
   goto out;



  VAR_7 = 0;

  FUNC_13(&VAR_2);
 }
wfi:
 FUNC_2();
out:
 FUNC_0(&VAR_1);

 if (VAR_7) {
  FUNC_7();
  FUNC_13(&VAR_2);
 }

 return VAR_5;
}
