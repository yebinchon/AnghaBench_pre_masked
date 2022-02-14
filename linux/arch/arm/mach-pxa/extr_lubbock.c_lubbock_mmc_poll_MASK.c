
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_6)
{
 unsigned long VAR_7;


 FUNC_2(VAR_7);
 VAR_1 &= ~(1 << 0);
 FUNC_1(VAR_7);


 if (VAR_1 & (1 << 0))
  FUNC_4(&VAR_5, VAR_3 + VAR_2);
 else {
  (void) FUNC_3(VAR_0, VAR_4);
  FUNC_0(VAR_0);
 }
}
