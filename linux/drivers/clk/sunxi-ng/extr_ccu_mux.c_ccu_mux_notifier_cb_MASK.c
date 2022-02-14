
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct ccu_mux_nb {int delay_us; int original_index; int cm; int common; int bypass_index; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 struct ccu_mux_nb* FUNC_3 (struct notifier_block*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_2,
          unsigned long VAR_3, void *VAR_4)
{
 struct ccu_mux_nb *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 0;

 if (VAR_3 == VAR_1) {
  VAR_5->original_index = FUNC_0(VAR_5->common,
        VAR_5->cm);
  VAR_6 = FUNC_1(VAR_5->common, VAR_5->cm,
      VAR_5->bypass_index);
 } else if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_1(VAR_5->common, VAR_5->cm,
      VAR_5->original_index);
 }

 FUNC_4(VAR_5->delay_us);

 return FUNC_2(VAR_6);
}
