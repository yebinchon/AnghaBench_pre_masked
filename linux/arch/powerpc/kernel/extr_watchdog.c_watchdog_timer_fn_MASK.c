
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct hrtimer*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;

__attribute__((used)) static enum hrtimer_restart FUNC_5(struct hrtimer *VAR_6)
{
 int VAR_7 = FUNC_3();

 if (!(VAR_4 & VAR_2))
  return VAR_0;

 if (!FUNC_0(VAR_7, &VAR_3))
  return VAR_0;

 FUNC_4(VAR_7);

 FUNC_1(VAR_6, FUNC_2(VAR_5));

 return VAR_1;
}
