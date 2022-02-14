
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int work; int wq; int deferred_lock; int deferred; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mapped_device *VAR_0, struct bio *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->deferred_lock, VAR_2);
 FUNC_0(&VAR_0->deferred, VAR_1);
 FUNC_3(&VAR_0->deferred_lock, VAR_2);
 FUNC_1(VAR_0->wq, &VAR_0->work);
}
