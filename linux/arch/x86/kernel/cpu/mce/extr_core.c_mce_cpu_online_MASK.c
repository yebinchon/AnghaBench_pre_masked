
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (unsigned int) ;
 int VAR_0 ;
 struct timer_list* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_1)
{
 struct timer_list *VAR_2 = FUNC_5(&VAR_0);
 int VAR_3;

 FUNC_0(VAR_1);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3) {
  FUNC_1(VAR_1);
  return VAR_3;
 }
 FUNC_2();
 FUNC_3(VAR_2);
 return 0;
}
