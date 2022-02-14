
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int flags; scalar_t__ internal_suspend_count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mapped_device*,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct mapped_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct mapped_device *VAR_1)
{
 FUNC_0(!VAR_1->internal_suspend_count);

 if (--VAR_1->internal_suspend_count)
  return;

 if (FUNC_3(VAR_1))
  goto done;





 (void) FUNC_1(VAR_1, ((void*)0));

done:
 FUNC_2(VAR_0, &VAR_1->flags);
 FUNC_4();
 FUNC_5(&VAR_1->flags, VAR_0);
}
