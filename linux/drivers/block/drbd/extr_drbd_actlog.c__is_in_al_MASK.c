
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {int al_lock; int act_log; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct drbd_device *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->al_lock);
 VAR_2 = FUNC_0(VAR_0->act_log, VAR_1);
 FUNC_2(&VAR_0->al_lock);

 return VAR_2;
}
