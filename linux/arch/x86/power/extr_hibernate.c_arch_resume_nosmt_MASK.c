
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cpuhp_smt_control { ____Placeholder_cpuhp_smt_control } cpuhp_smt_control ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

int FUNC_4(void)
{
 int VAR_3 = 0;
 FUNC_1();
 if (VAR_2 == VAR_0 ||
   VAR_2 == VAR_1) {
  enum cpuhp_smt_control VAR_4 = VAR_2;

  VAR_3 = FUNC_3();
  if (VAR_3)
   goto out;
  VAR_3 = FUNC_2(VAR_4);
  if (VAR_3)
   goto out;
 }
out:
 FUNC_0();
 return VAR_3;
}
