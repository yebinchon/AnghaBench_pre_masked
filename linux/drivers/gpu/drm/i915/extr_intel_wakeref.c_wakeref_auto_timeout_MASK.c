
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct intel_wakeref_auto {int rpm; int lock; int wakeref; int count; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (int *) ;
 struct intel_wakeref_auto* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,unsigned long*) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_0 ;
 struct intel_wakeref_auto* VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct intel_wakeref_auto *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 intel_wakeref_t VAR_4;
 unsigned long VAR_5;

 if (!FUNC_3(&VAR_3->count, &VAR_3->lock, &VAR_5))
  return;

 VAR_4 = FUNC_0(&VAR_3->wakeref);
 FUNC_4(&VAR_3->lock, VAR_5);

 FUNC_2(VAR_3->rpm, VAR_4);
}
