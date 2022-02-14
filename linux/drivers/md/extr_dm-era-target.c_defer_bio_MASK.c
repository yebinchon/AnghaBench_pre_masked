
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era {int deferred_lock; int deferred_bios; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct era*) ;

__attribute__((used)) static void FUNC_4(struct era *VAR_0, struct bio *VAR_1)
{
 FUNC_1(&VAR_0->deferred_lock);
 FUNC_0(&VAR_0->deferred_bios, VAR_1);
 FUNC_2(&VAR_0->deferred_lock);

 FUNC_3(VAR_0);
}
