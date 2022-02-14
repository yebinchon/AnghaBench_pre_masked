
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct clone* private; } ;
struct clone {int wq; int hydrations_in_flight; int hydration_stopped; int flags; int waker; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct clone*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct dm_target *VAR_1)
{
 struct clone *VAR_2 = VAR_1->private;
 FUNC_1(&VAR_2->waker);

 FUNC_4(VAR_0, &VAR_2->flags);
 FUNC_5();

 FUNC_6(VAR_2->hydration_stopped, !FUNC_0(&VAR_2->hydrations_in_flight));
 FUNC_3(VAR_2->wq);

 (void) FUNC_2(VAR_2);
}
