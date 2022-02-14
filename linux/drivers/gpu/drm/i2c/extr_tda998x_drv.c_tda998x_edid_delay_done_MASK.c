
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tda998x_priv {int edid_delay_active; int detect_work; int edid_delay_waitq; } ;


 int VAR_0 ;
 struct tda998x_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 struct tda998x_priv* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct tda998x_priv *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 VAR_3->edid_delay_active = 0;
 FUNC_2(&VAR_3->edid_delay_waitq);
 FUNC_1(&VAR_3->detect_work);
}
