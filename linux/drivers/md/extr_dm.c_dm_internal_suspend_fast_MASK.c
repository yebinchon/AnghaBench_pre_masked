
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int wq; int io_barrier; int flags; int suspend_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mapped_device *VAR_2)
{
 FUNC_4(&VAR_2->suspend_lock);
 if (FUNC_1(VAR_2) || FUNC_0(VAR_2))
  return;

 FUNC_5(VAR_0, &VAR_2->flags);
 FUNC_6(&VAR_2->io_barrier);
 FUNC_3(VAR_2->wq);
 FUNC_2(VAR_2, VAR_1);
}
