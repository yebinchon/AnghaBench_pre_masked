
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad_platform_data {int clear_wakeup_event; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct pxa27x_keypad_platform_data*,int) ;

__attribute__((used)) static inline int FUNC_2(struct pxa27x_keypad_platform_data *VAR_2)
{
 if (FUNC_0())
  VAR_2->clear_wakeup_event = VAR_0;

 return FUNC_1(&VAR_1, VAR_2, sizeof(*VAR_2));
}
