
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {unsigned long poll_msec; unsigned long delay; int work; } ;


 int FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;

void FUNC_3(struct edac_device_ctl_info *VAR_0,
     unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);

 if (VAR_1 == 1000)
  VAR_2 = FUNC_2(VAR_1);

 VAR_0->poll_msec = VAR_1;
 VAR_0->delay = VAR_2;

 FUNC_0(&VAR_0->work, VAR_2);
}
