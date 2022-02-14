
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timer_list*,unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,struct timer_list*) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (struct timer_list*) ;
 scalar_t__ FUNC_8 () ;
 int VAR_3 ;
 scalar_t__ FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_10 (unsigned long,int ) ;
 int FUNC_11 (int) ;
 struct timer_list* FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct timer_list *VAR_6)
{
 struct timer_list *VAR_7 = FUNC_12(&VAR_5);
 unsigned long VAR_8;

 FUNC_0(VAR_7 != VAR_6);

 VAR_8 = FUNC_2(VAR_3);

 if (FUNC_7(FUNC_12(&VAR_2))) {
  FUNC_4(0, FUNC_12(&VAR_4));

  if (FUNC_8()) {
   VAR_8 = FUNC_6(VAR_8);
   goto done;
  }
 }





 if (FUNC_9())
  VAR_8 = FUNC_5(VAR_8 / 2, (unsigned long) VAR_0/100);
 else
  VAR_8 = FUNC_10(VAR_8 * 2, FUNC_11(VAR_1 * VAR_0));

done:
 FUNC_3(VAR_3, VAR_8);
 FUNC_1(VAR_6, VAR_8);
}
