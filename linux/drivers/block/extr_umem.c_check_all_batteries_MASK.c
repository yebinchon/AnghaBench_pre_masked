
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct cardinfo {int flags; scalar_t__ Active; int check_batteries; int lock; } ;


 int VAR_0 ;
 struct cardinfo* VAR_1 ;
 int FUNC_0 (struct cardinfo*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (!(VAR_1[VAR_4].flags & VAR_0)) {
   struct cardinfo *VAR_5 = &VAR_1[VAR_4];
   FUNC_2(&VAR_5->lock);
   if (VAR_5->Active >= 0)
    VAR_5->check_batteries = 1;
   else
    FUNC_0(VAR_5);
   FUNC_3(&VAR_5->lock);
  }

 FUNC_1();
}
