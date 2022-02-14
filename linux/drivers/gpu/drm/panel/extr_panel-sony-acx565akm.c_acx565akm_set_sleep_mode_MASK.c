
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acx565akm_panel {void* hw_guard_end; unsigned long hw_guard_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acx565akm_panel*,int) ;
 void* VAR_3 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct acx565akm_panel *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 ? VAR_0 : VAR_1;
 unsigned long VAR_7;





 VAR_7 = VAR_4->hw_guard_end - VAR_3;
 if ((long)VAR_7 > 0 && VAR_7 <= VAR_4->hw_guard_wait) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_7);
 }

 FUNC_0(VAR_4, VAR_6);

 VAR_4->hw_guard_wait = FUNC_1(120);
 VAR_4->hw_guard_end = VAR_3 + VAR_4->hw_guard_wait;
}
