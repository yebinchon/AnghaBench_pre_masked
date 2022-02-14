
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_device {int requests_waitq; int requests_lock; int ** requests; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uinput_device *VAR_0,
     unsigned int VAR_1)
{

 FUNC_0(&VAR_0->requests_lock);
 VAR_0->requests[VAR_1] = ((void*)0);
 FUNC_1(&VAR_0->requests_lock);

 FUNC_2(&VAR_0->requests_waitq);
}
