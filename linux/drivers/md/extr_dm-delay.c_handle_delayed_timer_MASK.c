
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct delay_c {int flush_expired_bios; int kdelayd_wq; } ;


 struct delay_c* VAR_0 ;
 int VAR_1 ;
 struct delay_c* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct delay_c *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(VAR_3->kdelayd_wq, &VAR_3->flush_expired_bios);
}
