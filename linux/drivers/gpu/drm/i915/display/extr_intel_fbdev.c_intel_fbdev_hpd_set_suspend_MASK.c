
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbdev {int hpd_suspended; int hpd_waiting; int helper; int hpd_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct intel_fbdev *VAR_1, int VAR_2)
{
 bool VAR_3 = 0;

 FUNC_2(&VAR_1->hpd_lock);
 VAR_1->hpd_suspended = VAR_2 == VAR_0;
 VAR_3 = !VAR_1->hpd_suspended && VAR_1->hpd_waiting;
 VAR_1->hpd_waiting = 0;
 FUNC_3(&VAR_1->hpd_lock);

 if (VAR_3) {
  FUNC_0("Handling delayed fbcon HPD event\n");
  FUNC_1(&VAR_1->helper);
 }
}
