
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_group_priv {unsigned int idle; int lock; struct mpic_timer* timer; } ;
struct mpic_timer {struct cascade_priv* cascade_handle; } ;
struct cascade_priv {unsigned int cascade_map; unsigned int timer_num; } ;


 unsigned int FUNC_0 (struct cascade_priv*) ;
 struct cascade_priv* VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct mpic_timer *FUNC_3(
     struct timer_group_priv *VAR_1)
{
 struct cascade_priv *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_0);
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned long VAR_7;

 VAR_2 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_1(&VAR_1->lock, VAR_7);
  VAR_3 = VAR_2->cascade_map & VAR_1->idle;
  if (VAR_3 == VAR_2->cascade_map) {
   VAR_5 = VAR_2->timer_num;
   VAR_1->timer[VAR_5].cascade_handle = VAR_2;


   VAR_1->idle &= ~VAR_2->cascade_map;
   FUNC_2(&VAR_1->lock, VAR_7);
   return &VAR_1->timer[VAR_5];
  }
  FUNC_2(&VAR_1->lock, VAR_7);
  VAR_2++;
 }

 return ((void*)0);
}
