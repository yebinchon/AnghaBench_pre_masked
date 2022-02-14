
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mirror_set {int timer_pending; } ;


 int FUNC_0 (int ,int *) ;
 struct mirror_set* FUNC_1 (int ,struct timer_list*,int ) ;
 struct mirror_set* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mirror_set*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct mirror_set *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_0(0, &VAR_3->timer_pending);
 FUNC_2(VAR_3);
}
