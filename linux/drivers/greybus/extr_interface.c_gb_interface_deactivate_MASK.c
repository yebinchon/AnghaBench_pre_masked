
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int active; int mode_switch_completion; scalar_t__ mode_switch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gb_interface*) ;
 int FUNC_2 (struct gb_interface*,int) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*,int) ;
 int FUNC_5 (struct gb_interface*,int) ;
 int FUNC_6 (struct gb_interface*) ;

void FUNC_7(struct gb_interface *VAR_0)
{
 if (!VAR_0->active)
  return;

 FUNC_6(VAR_0);


 if (VAR_0->mode_switch)
  FUNC_0(&VAR_0->mode_switch_completion);

 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0, 0);
 FUNC_2(VAR_0, 0);
 FUNC_5(VAR_0, 0);

 VAR_0->active = 0;
}
