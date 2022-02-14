
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ssif_info {int waiting_alert; scalar_t__ stopping; } ;


 struct ssif_info* FUNC_0 (int ,struct timer_list*,int ) ;
 unsigned long* FUNC_1 (struct ssif_info*,unsigned long*) ;
 int FUNC_2 (struct ssif_info*,unsigned long*) ;
 int VAR_0 ;
 struct ssif_info* VAR_1 ;
 int FUNC_3 (struct ssif_info*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct ssif_info *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4, *VAR_5;
 bool VAR_6;

 if (VAR_3->stopping)
  return;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 VAR_6 = VAR_3->waiting_alert;
 VAR_3->waiting_alert = 0;
 FUNC_2(VAR_3, VAR_5);

 if (VAR_6)
  FUNC_3(VAR_3);
}
