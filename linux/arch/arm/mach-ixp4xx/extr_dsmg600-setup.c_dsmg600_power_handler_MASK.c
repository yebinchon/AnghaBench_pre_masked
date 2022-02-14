
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_6)
{




 if (FUNC_1(VAR_1)) {


  if (VAR_5 > 0)
   VAR_5--;

 } else {


  if (VAR_5 == 0) {




   FUNC_0();


   FUNC_2(VAR_0, 0);
  } else {
   VAR_5 = VAR_2;
  }
 }

 FUNC_3(&VAR_3, VAR_4 + FUNC_4(500));
}
