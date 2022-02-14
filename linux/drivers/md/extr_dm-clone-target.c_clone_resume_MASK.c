
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct clone* private; } ;
struct TYPE_2__ {int work; } ;
struct clone {TYPE_1__ waker; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_1)
{
 struct clone *VAR_2 = VAR_1->private;

 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(&VAR_2->waker.work);
}
