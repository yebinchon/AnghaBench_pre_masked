
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int suspend_lock; } ;


 int FUNC_0 (struct mapped_device*) ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 scalar_t__ FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mapped_device *VAR_0)
{
 if (FUNC_2(VAR_0) || FUNC_1(VAR_0))
  goto done;

 FUNC_0(VAR_0);

done:
 FUNC_3(&VAR_0->suspend_lock);
}
