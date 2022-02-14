
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int lock; } ;
struct timer_list {int dummy; } ;


 struct tsc200x* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct tsc200x* VAR_1 ;
 int FUNC_3 (struct tsc200x*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct tsc200x *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_3(VAR_3, 0, 0, 0);
 FUNC_2(&VAR_3->lock, VAR_4);
}
