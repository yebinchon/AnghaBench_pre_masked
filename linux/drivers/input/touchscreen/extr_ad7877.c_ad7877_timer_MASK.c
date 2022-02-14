
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ad7877 {int lock; } ;


 int FUNC_0 (struct ad7877*) ;
 struct ad7877* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;
 struct ad7877* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct ad7877 *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->lock, VAR_4);
}
